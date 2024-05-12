#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void){
	
	uint8_t* vowels = "AOYEUI";
	uint8_t* formatted_string = NULL;
	uint8_t* string = NULL;
	uint8_t flag_vowel = 0;	
	uint8_t flag_capital = 0;
	uint8_t form_index = 0;

	string = malloc(101);
	formatted_string = malloc(201);
	scanf("%s", string);
	
	for(uint8_t i = 0; i < 101; i++){
		if (string[i] == '\0') break;
		
		flag_vowel = 0;
		flag_capital = 0;
		for(uint8_t j = 0; j < 6; j++){
			if(string[i] == vowels[j] || string [i] == vowels[j] + ' '){
				flag_vowel = 1;
				break;
			}
		}
		if(string[i] < 97) flag_capital = 1;
		
		if(flag_vowel == 0 && flag_capital == 1){
			formatted_string[form_index] = '.';
			formatted_string[form_index + 1] = string[i] + ' ';
			form_index += 2; 
		}
		else if(flag_vowel == 0 && flag_capital == 0){
			formatted_string[form_index] = '.';
			formatted_string[form_index + 1] = string[i];
			form_index += 2;
		}
		
	}
	formatted_string[form_index] = '\0';
	printf("%s\n", formatted_string);
	
	return 0;
}
