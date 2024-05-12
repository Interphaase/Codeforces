#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(void){
	
	uint32_t n, m, a;
	scanf("%d %d %d", &n, &m, &a);
	
	uint64_t tile_count_n = 1;
	uint64_t tile_count_m = 1;
	uint64_t tile_count;

	if (n % a == 0){
		 tile_count_n = n / a;
	}
	else{
 		tile_count_n = n / a + 1;
	}
	if(m % a == 0){
 		tile_count_m = m / a;
	}
	else
	{
		tile_count_m = m / a + 1;
	}
	
	tile_count = tile_count_n * tile_count_m;
	printf("%llu\n", tile_count);
	
	
	return 0;
}
