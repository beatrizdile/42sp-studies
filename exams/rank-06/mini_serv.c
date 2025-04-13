#include <unistd.h>
#include <string.h>
#include <sys/select.h>
#include <netinet/in.h>

typedef struct client {
	int fd;
	int id;
} client;

void exit_error(char *str) {
	write(1, &str, strlen(str));
	exit(1);
}

int main(int argc, char **argv) {
	if (argc != 2)
		exit_error("Wrong number of arguments\n");
	
	int MAX_CLIENTS = 128;
	int BUFFER_SIZE = 200000;
	client clients[MAX_CLIENTS];
	int next_id = 0;
	fd_set active_sockets;
	fd_set ready_sockets;

	char buffer[BUFFER_SIZE];
	char msg_buffer[BUFFER_SIZE];
	char sub_buffer[BUFFER_SIZE];
	int server_socket;

	if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		exit_error("Fatal error\n");
	
	
}


