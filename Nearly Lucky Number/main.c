#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	uint8_t* number = NULL;
	uint8_t lucky_count = 0;
	
	number = malloc(20);
	scanf("%s", number);

	for(uint8_t i = 0; i < 20; i++){
		if(number[i] == '\0') break;
		if(number[i] == '7' || number[i] == '4') lucky_count++;
	}
	
	(lucky_count == 4 || lucky_count == 7)? printf("YES\n") : printf("NO\n");

	

	return 0;
}
