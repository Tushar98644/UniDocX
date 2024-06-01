# SQL

SQL (Structured Query Language) is the standard language used for interacting with relational databases. It encompasses all the types of database languages mentioned: DDL, DML, DCL, and TCL. 

## Types of Database Languages and Their Relation to SQL

SQL (Structured Query Language) is the standard language used for interacting with relational databases. It encompasses all the types of database languages mentioned: DDL, DML, DCL, and TCL. Here’s how each of these languages is related to SQL:

## SQL and DDL (Data Definition Language)

It is used to define database structure or pattern. SQL includes commands that define the structure of the database, which are part of DDL.

- **Examples of DDL Commands in SQL:** 

  ```sql
  CREATE TABLE Employees (
      ID int PRIMARY KEY,
      Name varchar(255),
      Age int,
      Salary decimal
  );

  ALTER TABLE Employees ADD COLUMN Address varchar(255);

  DROP TABLE Employees;

  TRUNCATE TABLE Employees;


## SQL and DML (Data Manipulation Language)

It is used for accessing and manipulating data in a database. It handles user requests. SQL provides commands for accessing and manipulating the data within the database, which fall under DML.

- **Examples of DML Commands in SQL:**

  ```sql
  SELECT * FROM Employees;

  INSERT INTO Employees (ID, Name, Age, Salary) VALUES (1, 'John Doe', 30, 60000);

  UPDATE Employees SET Salary = 65000 WHERE ID = 1;

  DELETE FROM Employees WHERE ID = 1;
  
  
## SQL and DCL (Data Control Language)

It is used to retrieve the stored or saved data. SQL includes commands to control access to data within the database, which are part of DCL.

- **Examples of DCL Commands in SQL:**

  ```sql
  GRANT SELECT, INSERT ON Employees TO user1;

  REVOKE SELECT, INSERT ON Employees FROM user1;


## SQL and TCL (Transaction Control Language)

TCL is used to run the changes made by the DML statement. TCL can be grouped into a logical transaction. SQL provides commands for managing transactions within the database, which fall under TCL.

- **Examples of TCL Commands in SQL:**

  ```sql
  BEGIN TRANSACTION;

  INSERT INTO Employees (ID, Name, Age, Salary) VALUES (2, 'Jane Smith', 28, 70000);

  SAVEPOINT savepoint1;

  UPDATE Employees SET Salary = 72000 WHERE ID = 2;

  ROLLBACK TO savepoint1;

  COMMIT;


