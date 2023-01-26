#include <stdio.h>
#define TRUE 1
#define FALSE 0

void main() {

	int fnd = FALSE;
	int x, y; 
	int count;

	for (x = 2520; fnd == FALSE; x = x + 2520) {

	count = 0;

	for (y = 11; y <= 20; y++) {

		count += x % y;
	}

		if (count == 0) {

			fnd = TRUE;
			printf("%d\n", x);	
				
		}

	}


}

		 
