#include <netinet/in.h>
#include <sys/socket.h>

typedef struct IPFWQueueVars_
{
	struct sockaddr_in ipfw_sin;

}IPFWQueueVars;
