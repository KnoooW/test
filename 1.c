#include <stdio.h>

int main () {
	system("id > /tmp/flag.txt") ;
	while(1) {
		printf("1\n") ;
		sleep(5) ;
	}
	return 0 ;
}

