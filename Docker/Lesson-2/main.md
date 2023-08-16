# Docker run

The docker run command runs a command in a new container, pulling the image if needed and starting the container.

<img width="973" alt="Screenshot 2023-08-15 at 12 25 32 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/84302800-e946-4858-8c1a-8557cd0e76da">

#### The run command is a combination of the create and start commands , the create command creates a writeable container layer(filesystem) over the specified image and prepares it for running the specified command

<img width="1150" alt="Screenshot 2023-08-15 at 2 05 36 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/f0ab24fa-37a3-47bf-9f05-386a20327040">

# Overriding run command 

<img width="1204" alt="Screenshot 2023-08-15 at 12 31 44 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/69af25bb-57e0-4fe4-acf7-18e30855cf3a">

### The run command can be overwritten another executable command present in the filesystem snapshot . If the command is not present in the FS snapshot , it will throw an error. 

<img width="1244" alt="Screenshot 2023-08-15 at 12 33 14 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/0273846c-b83d-450e-a98e-6b37036822c3">

# Listing all containers

* `docker ps` - list all running containers
* `docker ps --all` - list all containers
* `docker system prune` - Remove all unused containers, networks, images (both dangling and unreferenced), and optionally, volumes
* `docker create` - The docker container create (or shorthand: docker create) command creates a new container from the specified image, without starting it
* `docker start container_id` - start a container
* `docker start -a container_id` - start a container and print output to the console
