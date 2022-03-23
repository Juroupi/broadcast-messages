#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../broadcast.h"

int main() {
	
	char message[512];
	
	BroadcastSocket s = broadcastSocket(NULL, 5000, BROADCAST_RECEIVE);
	if (s == NULL) {
		return 1;
	}
	
	while (receiveBroadcastMessage(s, message, sizeof(message)) >= 0) {
		
		if (strcmp(message, "stop") == 0) {
			break;
		}
		
		printf("message: %s\n", message);
	}
	
	closeBroadcastSocket(s);
	
	return 0;
}