#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct vector{
int32_t x;
int32_t y;
int32_t z;
}__attribute__((__packed__)) vector; 



int main(void){

	vector* f = NULL;
	uint32_t vector_count;

	f = malloc(2*sizeof(vector));
	f[1].x = 0;
	f[1].y = 0;
	f[1].z = 0;

	scanf("%d", &vector_count);
	for(uint8_t i = 0; i < vector_count; i++){
		scanf("%d %d %d", &f[0].x, &f[0].y, &f[0].z);
		f[1].x += f[0].x;
		f[1].y += f[0].y;
		f[1].z += f[0].z;
	}
	(f[1].x == 0 && f[1].y == 0 && f[1].z == 0)? printf("YES\n") : printf("NO\n");



	free(f);
	return 0;
}
