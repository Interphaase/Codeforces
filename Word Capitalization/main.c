#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
	uint8_t* string = NULL;
	string = malloc(1001);
	scanf("%s", string);

	if(string[0] >= 'a'){
		string[0] -= ' ';
	}

	printf("%s\n", string);
	free(string);
	return 0;
}
