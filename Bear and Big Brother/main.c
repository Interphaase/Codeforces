#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(void){
	
	int32_t limak = 0, bob = 0;
	uint8_t years = 0;

	scanf("%d %d", &limak, &bob);
	while(limak <= bob){
		limak *= 3;
		bob *= 2;
		years += 1;
	}

	printf("%d\n", years);
	return 0;
}
