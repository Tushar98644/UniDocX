# Transactions

A transaction in a Database Management System (DBMS) is a sequence of one or more operations (such as read, write, update, delete) performed on a database that are treated as a single logical unit of work. A transaction ensures that the database remains in a consistent state even in the presence of failures and concurrent access.

### Example

```sql
BEGIN TRANSACTION;

-- Deduct money from Account A
UPDATE Accounts SET balance = balance - 100 WHERE account_id = 'A';

-- Add money to Account B
UPDATE Accounts SET balance = balance + 100 WHERE account_id = 'B';

-- Check for any errors and commit the transaction if all operations succeeded
COMMIT;

-- Rollback in case of any error
ROLLBACK;
```

# Properties 

Transactions are defined by four key properties, often referred to as the ACID properties:


* *Atomicity* 
   * Ensures that all operations within a transaction are completed successfully or none of them are.
   * If any operation fails, the entire transaction is rolled back, leaving the database in its original state.
   * The `ROLLBACK` command ensures that all changes are undone if there's a failure.
     
* *Consistency*
  * Ensures that a transaction takes the database from one valid state to another valid state, maintaining database invariants.
  * Any data written to the database must be valid according to all defined rules, including constraints, cascades, triggers, and any combination thereof.
    
* *Isolation*
  * Ensures that concurrent execution of transactions leaves the database in the same state that would have been obtained if the transactions were executed sequentially.
  * This property is essential for the consistency of data when multiple transactions are occurring simultaneously.
  * If another transaction is being executed simultaneously (e.g., another transfer or deposit operation), the `BEGIN TRANSACTION` and `COMMIT` commands ensure that these transactions do not interfere with each other.
  
* *Durability*
  * Ensures that once a transaction has been committed, it remains so, even in the event of a system failure.
  * Once the transaction is committed using the `COMMIT` command, the changes are permanently recorded in the database.
  
