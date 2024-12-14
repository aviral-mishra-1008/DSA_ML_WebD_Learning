--1
CREATE TRIGGER tg1 
AFTER INSERT ON Orders
FOR EACH ROW
BEGIN
    UPDATE Customers
    SET status = "Active"
    WHERE customer_id = New.customer_id
END

--2
CREATE TRIGGER tg0
AFTER INSERT ON Orders
FOR EACH ROW 
BEGIN
    IF NEW.Total_amount>1000 THEN
        UPDATE Orders
        SET status = "confirmed"
        WHERE Order_id = NEW.Order_id
    ENDIF
END


--3
CREATE TRIGGER tg5
BEFORE INSERT ON Orders
FOR EACH ROW
BEGIN 
    DECLARE customer_status VARCHAR(100)

    SELECT status INTO customer_status
    FROM Customers
    WHERE customer_id = NEW.customer_id

    IF customer_status=="inactive" THEN
        SIGNAL SQLSTATE "45000"
        SET MESSAGE_TEXT "User is inactive"
    ENDIF
END

--4
ALTER TABLE Customers
ADD COLUMN total_orders INT DEFAULT 0

--Insert trigger
CREATE TRIGGER tg2
AFTER INSERT ON Orders
FOR EACH ROW
BEGIN 
    UPDATE Customers
    SET total_orders = total_orders+1
    WHERE Customer_id = NEW.Customer_id
END

--Delete Trigger
CREATE TRIGGER tg3
AFTER DELETE ON Orders
FOR EACH ROW
BEGIN 
    UPDATE Customers
    SET total_orders = total_orders-1
    WHERE Customer_id = OLD.customer_id
END

--5
CREATE TRIGGER tg4
BEFORE INSERT ON Orders
FOR EACH ROW
BEGIN
    IF NEW.status = '' OR NEW.status IS NULL THEN
        SET NEW.status = "pending"
    ENDIF
END


--5
CREATE TRIGGER tg6
BEFORE DELETE ON Orders
FOR EACH ROW
BEGIN 
    IF OLD.status = "shipped" THEN
        SIGNAL SQLSTATE "45000"
        SET MESSAGE_TEXT "Unable to delete"
    ENDIF
END