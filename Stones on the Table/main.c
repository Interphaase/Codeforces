#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int main(void){
	
	uint8_t str_len;
	uint8_t* stones = NULL;
	uint8_t* segregated = NULL;	
	uint8_t take_nmbr = 0;

	scanf("%d", &str_len);
	stones = malloc(str_len+1);
	segregated = malloc(str_len+1);
	scanf("%s", stones);
	

	segregated[0] = stones[0];	

	for(uint8_t i = 1; i < str_len; i++){
		if(stones[i] != segregated[i-1-take_nmbr]){
			segregated[i-take_nmbr] = stones[i];
		}
		else{
			take_nmbr++;
		}
	}
	segregated[str_len-take_nmbr] = '\0';
	printf("%d\n", take_nmbr);
	
	return 0;
}
