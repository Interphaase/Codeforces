#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int main(void){
	uint32_t distance;
	uint32_t steps = 0;
	scanf("%d", &distance);


	steps += (distance-(distance%5))/5;
	if(distance % 5 > 0) steps++;

	printf("%d\n", steps);

	return 0;
}
