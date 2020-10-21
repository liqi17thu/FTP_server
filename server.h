#ifndef SERVER_H
#define SERVER_H

#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#include "client.h"

/*-------------------------------MARCO------------------------------------*/
#define DEFAULT_PORT 21
#define DEFAULT_ROOT_PATH "/tmp/"
#define BACKLOG 5
#define BUF_SIZE 8192
#define RETRY_TIME 10
#define DEBUG

/*-------------------------------STRUCT-----------------------------------*/
typedef struct Server {
    // basic config
    int port;
    char root_path[100];
    struct sockaddr_in addr;
    int control_sockfd;
} Server;

/*------------------------------FUNCTIONS---------------------------------*/
void user(Client *client);
void pass(Client *client);
void retr_job(Client *client);
void retr(Client *client);
void stor_job(Client *client);
void stor(Client *client);
void appe_job(Client *client);
void appe(Client *client);
void quit(Client *client);
void syst(Client *client);
void type(Client *client);
void port(Client *client);
void pasv(Client *client);
void rest(Client *client);
void mkd(Client *client);
void cwd(Client *client);
void pwd(Client *client);
void size(Client *client);
void list(Client *client);
void rmd(Client *client);
void rnfr(Client *client);
void rnto(Client *client);
void listen_to_client(Client *client);
#endif