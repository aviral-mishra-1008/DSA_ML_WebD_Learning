-- Students (StudentID, StudentName, Department)
-- Courses (CourseID, CourseName, Credits)
-- Enrollments (StudentID, CourseID, Grade)

-- 1
SELECT Students.StudentName, Courses.CourseName,  Enrollments.Grade
FROM Students
JOIN Enrollments ON Students.StudentID = Enrollments.StudentID
JOIN Courses ON Enrollments.CourseID = Courses.CourseID

-- 2
SELECT Students.StudentID, Courses.CourseName, Enrollments.Grade
FROM Students
LEFT JOIN Enrollments ON Students.StudentID = Enrollments.StudentID
LEFT JOIN Courses ON Enrollments.CourseID = Courses.CourseID

-- 3
SELECT Courses.CourseName, Students.StudentName, Enrollments.Grade
FROM Courses
LEFT JOIN Enrollments ON Enrollments.CourseID = Courses.CourseID
LEFT JOIN Studetns ON Students.StudentID = Enrollments.StudentID

--4
SELECT Students.StudentName, Courses.CourseName
FROM Students CROSS JOIN Courses


--i. Customers (CustomerID, CustomerName, City)
--ii. Orders (OrderID, CustomerID, OrderDate)
--iii. Products (ProductID, ProductName, Price)
--iv. OrderDetails (OrderID, ProductID, Quantity)

-- 1
SELECT Customers.CustomerName, Products.ProductName, OrderDetails.Quantity
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
LEFT JOIN OrderDetails ON Orders.OrderID = OrderDetails.OrderID
LEFT JOIN Products ON Products.ProductID = OrderDetails.ProductID

UNION

SELECT Customers.CustomerName, Products.ProductName, OrderDetails.Quantity
FROM Products
LEFT JOIN OrderDetails ON Products.ProductID = OrderDetails.ProductID
WHERE OrderDetails.OrderID IS NULL

--2 
SELECT Products.ProductName, Products.Price, COALESCE(SUM(OrderDetails.Quantity),0) AS NetOrders
FROM Products 
LEFT JOIN OrderDetails ON Products.ProductID  = OrderDetails.ProductID
GROUP BY Products.ProductID

--3
SELECT Customers.CustomerName, Products.ProductName, Orders.OrderID
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
LEFT JOIN OrderDetails ON Orders.OrderID = OrderDetails.OrderID
LEFT JOIN Products ON Products.ProductID = OrderDetails.ProductID

UNION 

SELECT Customers.CustomerName, Products.ProductName, Orders.OrderID
FROM Orders
LEFT JOIN Customers ON Customers.CustomerID = Orders.CustomerID
LEFT JOIN OrderDetails ON Orders.OrderID = OrderDetails.OrderID
LEFT JOIN Products ON Products.ProductID = OrderDetails.ProductID
WHERE Customers.CustomerID IS NULL OR Products.ProductID IS NULL

UNION

SELECT Customers.CustomerName, Products.ProductName, Orders.OrderID
FROM Products
LEFT JOIN OrderDetails ON Products.ProductID = OrderDetails.ProductID
LEFT JOIN Orders ON OrderDetails.OrderID = Orders.ProductID
LEFT JOIN Customers ON Customers.CustomerID = Orders.CustomerID
WHERE Customers.CustomerID IS NULL OR Orders.OrderID IS NULL

