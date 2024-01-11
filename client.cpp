#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

int main(int ac , char *av[]) {
    // Create a socket
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        std::cerr << "Error creating socket" << std::endl;
        return -1;
    }

    // Connect to the server
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1"); // Change this to the server's IP address

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1)
    {
        std::cerr << "Error connecting to server" << std::endl;
        close(clientSocket);
        return -1;
    }
    std::cout << "Connected to server" << std::endl;

    // Send data to the server
    const char* message = av[1];// take from arg
    send(clientSocket, message, strlen(message), 0);

    // Receive response from the server
    char buffer[1024];
    memset(buffer, 0, sizeof(buffer));

    int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);
    std::cout << "Received from server: " << buffer << std::endl;

    // Close socket
    close(clientSocket);

    return 0;
}
