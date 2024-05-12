#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int main(void){

    uint16_t stops;
    uint16_t pass_in = 0, pass_out = 0;
    uint16_t tram_pass = 0;
    uint16_t max = 0;

    scanf("%" SCNu16, &stops);
    for(uint16_t i = 0; i < stops; i++){
        scanf("%" SCNu16 " %" SCNu16, &pass_out, &pass_in);
        tram_pass += pass_in - pass_out;
        if(tram_pass > max) max = tram_pass;
    }

    printf("%" PRIu16 "\n", max);
    return 0;
}