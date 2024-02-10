# Piping 

_Piping is a type of redirection in Linux used to send output of one command to input of another command. We had earlier written the output of grep to a file & then used it as input to awk. Instead of this, we can use the Linux pipe operator (|) to redirect output of grep directly to input of awk._

# Useful shortcuts

_`up arrow key` → will bring up the last command that was executed. Each press will bring up the previous command executed._

_`history` → will print out a list of the previous commands executed._

_`tab key` → pressing the tab key can be used to auto-complete the directory and file names while typing paths or filenames._

# Netcat 

_Netcat, often abbreviated as nc, is a versatile command-line networking tool that can be used for various network-related tasks. It is sometimes referred to as the "Swiss Army knife for TCP/IP." Netcat operates as a simple and powerful tool for reading from and writing to network connections using TCP or UDP._

Eg - Start the Netcat server process again using nc -v -l 8081. Verify using the `netstat` command that there’s indeed a process listening on port 8081.

# Ping

_ping is a network utility tool and helps to check if a particular IP address is reachable. Ping your workspace’s public IP address from your local system’s command line client or terminal, while keeping sudo tcpdump -i any icmp running on the workspace. tcpdump is a command that captures packets._

`Note` : When we enter https://www.google.com on our browser, this gets resolved to Google server’s IP address & from the protocol used (https), the port number is found to be 443. Find the IP address of https://www.google.com (can use ping command) & try entering the IP address and port in your browser’s URL bar like this IPaddress:port ie, if IP address is 10.0.2.15, visit 10.0.2.15:443
