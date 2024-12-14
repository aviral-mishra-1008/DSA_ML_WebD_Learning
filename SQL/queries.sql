-- Students(StudentID,StudentName,Department)
-- Courses(CourseID, CourseName, Credits)
-- Enrollments(StudentID, CourseID, Grade)

-- 1.
SELECT Students.StudentID, Students.StudentName, Courses.CourseName, Enrollments.Grade
FROM Enrollments
JOIN Students ON Students.StudentID = Enrollments.StudentID
JOIN Courses ON Courses.CourseID = Enrollments.CourseID

-- 2.
SELECT Students.StudentID, Students.StudentName, Students.Department, Courses.CourseName, Enrollments.Grade
FROM Students
LEFT JOIN Enrollments ON Students.StudentID = Enrollments.StudentID
LEFT JOIN Courses ON Enrollments.CourseID = Courses.CourseID;

-- 3.
SELECT Courses.CourseName, Students.StudentName, Enrollments.Grade
FROM Courses
LEFT JOIN Enrollments ON Courses.CourseID = Enrollments.CourseID
LEFT JOIN Students ON Enrollments.StudentID = Student.StudentID

--4
SELECT Students.StudentID, Students.StudentName, Students.Department, 
       Courses.CourseID, Courses.CourseName, Courses.Credits, 
       Enrollments.Grade
FROM Students
CROSS JOIN Courses
LEFT JOIN Enrollments 
    ON Students.StudentID = Enrollments.StudentID 
    AND Courses.CourseID = Enrollments.CourseID;
 

--i. Customers (CustomerID, CustomerName, City)
--ii. Orders (OrderID, CustomerID, OrderDate)
--iii. Products (ProductID, ProductName, Price)
--iv. OrderDetails (OrderID, ProductID, Quantity)

-- 1.
-- Customers who ordered products
SELECT Customers.CustomerName, Products.ProductName, OrderDetails.Quantity
FROM Customers
JOIN Orders ON Orders.CustomerID = Customers.CustomerID
JOIN OrderDetails ON Orders.OrderID = OrderDetails.OrderID
JOIN Products ON Products.ProductID = OrderDetails.ProductID

UNION ALL

SELECT Customers.CustomerName, NULL AS ProductName, NULL AS Quantity
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
WHERE Orders.OrderID IS NULL

UNION ALL

SELECT NULL AS CustomerName, Products.ProductName, NULL AS Quantity
FROM Products
LEFT JOIN OrderDetails ON Product.ProductID = OrderDetails.ProductID
WHERE OrderDetails.Quantity = NULL


--2
SELECT Products.ProductName, Products.Price, COALESCE(SUM(OrderDetails.Quantity),0) AS NetOrder
FROM Products 
LEFT JOIN OrderDetails ON Product.ProductID = OrderDetails.ProductID
GROUP BY Product.ProductID

--3
SELECT Customers.CustomerName, Orders.OrderID, Product.ProductName
FROM Customers
JOIN 


--4
CREATE TRIGGER TG1
AFTER INSERT ON Orders
FOR EACH ROW
   IF new.total_amount>1000 THEN 
         UPDATE Orders
         SET status = "confirmed"
        WHERE groupId = 1000