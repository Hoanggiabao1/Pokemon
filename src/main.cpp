#include <windows.h>
#include <string>
#include <SDL_image.h>
#include <SDL.h>
#include "file_cpp/mapchinh.cpp"

const int chieuDai = 1600;
const int chieuRong = 800; //(chieu cao)

bool init()
{
    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ){
        return false;
    }
    else{
        window = SDL_CreateWindow( "Pokemon", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, chieuDai, chieuRong, SDL_WINDOW_SHOWN );
        if( window == NULL ){
            return false;
        }

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if (renderer == NULL) {
        return false;
        }
    }
    return true;
}

void ketThuc()
{   
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow( window );
    SDL_Quit();
}

int main(int argc, char* argv[]){

    if (!init()){
        return 1;
    }
    vongLapGame();
    SDL_UpdateWindowSurface( window );
    ketThuc();
    return 0;
}