#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(uint8_t argc, uint8_t* argv){
	uint8_t* string = NULL;
	uint8_t str_len = 0;
	
	uint8_t count_1 = 0;
	uint8_t	count_2 = 0;
	uint8_t count_3 = 0;

	string = malloc(101);
	scanf("%s", string);

	for(uint8_t i = 0; i < 101; i++){
		if(string[i] == '\0'){
			break;
		}
		else if(string[i] != '+'){
			switch(string[i]){
				case '1':
					count_1++;
					break;
				case '2':
					count_2++;
					break;
				case '3':
					count_3++;
					break;
			}
		}
	}
	for(uint8_t i = 0; i < 101; i += 2){
		if(count_1 > 0){
			string[i] = '1';
			string[i+1] = '+';
			count_1 -= 1;
		}
		else if(count_2 > 0){
			string[i] = '2';
			string[i+1] = '+';
			count_2 -= 1;
		}
		else if(count_3 > 0){
			string[i] = '3';
			string[i+1] = '+';
			count_3 -= 1;
		}
		else{
			string[i-1] = '\n';
			string[i] = '\0';
		}
	}


	printf("%s", string);
	free(string);
	return 0;
}


