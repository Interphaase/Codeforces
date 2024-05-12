#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
	
	uint32_t no_games;
	uint32_t anton_wins = 0, danik_wins = 0;
	uint8_t* game_history = NULL;
	
	scanf("%d", &no_games);
	game_history = malloc(no_games+1);
	scanf("%s", game_history);
	
	for(uint32_t i = 0; i <= no_games; i++){
		if(game_history[i] == '\0') break;
		
		if(game_history[i] == 'A') anton_wins++;
		else if (game_history[i] == 'D') danik_wins++;
	}
	
	if(anton_wins > danik_wins) printf("Anton\n");
	else if (danik_wins > anton_wins) printf("Danik\n");
	else printf("Friendship\n");
		
	free(game_history);
	return 0;
}
