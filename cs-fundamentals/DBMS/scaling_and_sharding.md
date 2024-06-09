# Scaling 

Scaling alters the size of a system. In the scaling process, we either compress or expand the system to meet the expected needs. The scaling operation can be achieved by adding resources to meet the smaller expectation in the current system, or by adding a new system in the existing one, or both.

* *Vertical Scaling*
  * keeps the existing infrastructure but adds computing power. The existing pool of code does not need to change — it simply needs to run the same code on machines with better specs. Scaling up, increases the capacity of a single machine and increase its throughput. It allows data to live on a single node, and scaling spreads the load through CPU and RAM resources for the machines. 

* *Horizontal Scaling*
  * Adds more instances of machines without first implementing improvements to existing specifications. Scaling out allows to sharing of the processing power and load balancing across multiple machines.
 

# Sharding

Database sharding is a method of horizontal scaling where a large database is partitioned into smaller, more manageable pieces called shards. Each shard holds a subset of the data, and together, they form the complete dataset. Sharding helps distribute the load across multiple servers, improving performance and scalability.

## Example of Sharding

Consider an example of a user database for a social media application with millions of users. Instead of storing all user data in a single database, we can shard the database to distribute the load.

## Step-by-Step:

1. *Identify the Shard Key*:

   * Choose an attribute that will determine the distribution of data. In this case, we'll use user_id as the shard key.

2. *Define Shard Ranges*:

   * Divide the user IDs into ranges. For instance, if we have four shards, we might define the ranges as follows:
     Shard 1: User IDs 1-250,000
     Shard 2: User IDs 250,001-500,000
     Shard 3: User IDs 500,001-750,000
     Shard 4: User IDs 750,001-1,000,000

3. *Create Shards*:

   * Set up four separate database servers or instances, each responsible for storing the data within its assigned range.

4. *Distribute Data*:

   * When inserting new user data, determine the appropriate shard based on the user_id and store the data in that shard. For example:
```sql
Copy code
-- Pseudo-code for inserting user data
user_id = 123456
shard = determineShard(user_id)
insert into shard_2 (user_id, user_data) values (123456, 'User Data')
```

5. *Querying Data*:

   * To query user data, determine which shard contains the data based on the user_id and query that specific shard. For example:
```sql
Copy code
-- Pseudo-code for querying user data
user_id = 123456
shard = determineShard(user_id)
select * from shard_2 where user_id = 123456
```
