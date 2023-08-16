# Docker run

The docker run command runs a command in a new container, pulling the image if needed and starting the container.

<img width="973" alt="Screenshot 2023-08-15 at 12 25 32 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/84302800-e946-4858-8c1a-8557cd0e76da">

#### The run command is a combination of the create and start commands , the create command creates a writeable container layer(filesystem) over the specified image and prepares it for running the specified command.Once a container has been started with a specific run command , it cannot be overridden

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
*  `docker logs container_id` - The docker logs command batch-retrieves logs present at the time of execution

# Stop and kill containers 

`docker stop id` - The main process inside the container will receive SIGTERM, and after a grace period, SIGKILL. The first signal can be changed with the STOPSIGNAL instruction in the container’s Dockerfile, or the --stop-signal option to docker run.

<img width="1222" alt="Screenshot 2023-08-16 at 6 28 08 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/c103a0cb-1b65-4984-ade4-29679b010328">

`docker kill id` - The docker kill subcommand kills one or more containers. The main process inside the container is sent SIGKILL signal (default), or the signal that is specified with the --signal option. 

<img width="1146" alt="Screenshot 2023-08-16 at 6 28 34 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/d7142aa0-589c-4601-a47e-fdc25e9dd258">

# Multiple commands in a container 

If we start a container and want to run another process within that container , we need to make use of the exec command which will run the command in that specific running container. Just running the commands in the command line will run them outside the container.

`docker exec -it id command`- The docker exec command runs a new command in a running container.The command started using docker exec only runs while the container’s primary process (PID 1) is running, and it is not restarted if the container is restarted

<img width="1204" alt="Screenshot 2023-08-16 at 7 03 47 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/a901d245-e1a3-4b30-9fa5-c34a945a50ea">

<img width="1146" alt="Screenshot 2023-08-16 at 7 19 00 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/8b3870df-3557-42df-9d88-b9a0353920a9">

 The -i option is set to keep STDIN attached (-i), which prevents the sh process from exiting immediately.

The -d option (shorthand for --detach) sets the container to run in the background, in detached mode, with a pseudo-TTY attached (-t)

<img width="1146" alt="Screenshot 2023-08-16 at 7 14 22 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/415e5134-fdaa-49df-b2e4-e17bb376041a">

# Starting a shell 

[Refer to this documentation](https://www.baeldung.com/ops/docker-container-shell)
