#include <SDL.h>

int main(int argc, char* argv[]){
    
    if(SDL_Init(SDL_INIT_EVERYTHING) == -1){
        return 1;
    }

    SDL_Delay(3000);

    SDL_Quit();

    return 0;
}