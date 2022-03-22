#include <stdlib.h>
#include "../broadcast.h"

int main(int argc, char* argv[]) {
	
	if (argc > 1) {
		
		BroadcastSocket s = broadcastSocket("192.168.1.255", 5000, BROADCAST_SEND);
		if (s == NULL) {
			return 1;
		}
		
		for (int i = 1; i < argc; i++) {
			sendBroadcastMessage(s, argv[i]);
		}
		
		closeBroadcastSocket(s);
	}
	
	return 0;
}