#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

void get_str_len(uint8_t* word, uint8_t* word_len){
	
	*word_len = 0;
	for(uint8_t i = 0; i < 101; i++){
		if(word[i] == '\0') break;
		*word_len += 1;
	}
	return;
}

void reverse_string(uint8_t* word, uint8_t word_len, uint8_t* output){
	
	for(uint8_t i = 0; i < word_len; i++){
	
		output[word_len-1-i] = word[i];	
	}
	output[word_len] = '\0';
	return;
}



int main(void){
	
	uint8_t* word = NULL, *word_reversed = NULL;
	uint8_t* word_rev_check = NULL;
	uint8_t word_len = 0;	

	word = malloc(101);
	word_reversed = malloc(101);
	
	scanf("%s", word);
	scanf("%s", word_reversed);

	get_str_len(word, &word_len);

	word_rev_check = malloc(word_len+1);
	reverse_string(word, word_len, word_rev_check);		

	for(uint8_t i = 0; i < word_len; i++){
		if(word_reversed[i] != word_rev_check[i]){
			printf("NO\n");
			free(word_rev_check);
			free(word);
			free(word_reversed);			
			return 0;
		}
	}

	printf("YES\n");	
	free(word_rev_check);
	free(word);
	free(word_reversed);
	return 0;
}
