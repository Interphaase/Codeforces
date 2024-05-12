#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>

int main(uint8_t argc, uint8_t* argv){

	uint8_t* string1 = NULL; 
	uint8_t* string2 = NULL;
	



	string1 = malloc(101);
	string2 = malloc(101);
		
	scanf("%s", string1);
	scanf("%s", string2);
	
	for(uint8_t i = 0; i < 101; i++){
		
		if(string1[i] == '\0'){
			printf("%d\n", 0);
			break;
		}
	
		else if(tolower(string1[i]) < tolower(string2[i])){
			printf("%d\n", -1);
			break;
		}
		else if(tolower(string1[i]) > tolower(string2[i])){
			printf("%d\n", 1);
			break;		
		}
	}	

	free(string1);
	free(string2);
	return 0;
}
