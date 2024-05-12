#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void){
	uint8_t* input = NULL;
	input = malloc(101);
	scanf("%s", input);
		
	uint8_t last_char = input[0];
	uint8_t counter = 1;
	
	for(uint8_t i = 1; i < 101; i++){
		if(input[i] == '\0') break;
		
		if(input[i] == last_char) counter++;
		else{
			last_char = input[i];
			counter = 1;
		}
 		if(counter >= 7){
		 	printf("YES\n");
			free(input);
			return 0;
		}	
	}
	printf("NO\n");
	free(input);
	return 0;
}
