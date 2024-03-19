#include <windows.h>
#include <string>
#include <SDL_image.h>
#include <SDL.h>
#include "file_cpp/vonglapgame.cpp"

const int chieuDai = 1280;
const int chieuRong = 800; //(chieu cao)

bool init()
{
    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ){
        return false;
    }
    if (TTF_Init() < 0){
        return false;
    }
    window = SDL_CreateWindow( "Pokemon", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, chieuDai, chieuRong, SDL_WINDOW_SHOWN );
    if( window == NULL ){
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        return false;
    }

    int imgFlags = IMG_INIT_JPG | IMG_INIT_PNG;
    if (!(IMG_Init(imgFlags) & imgFlags)){
        return false;
    }
    return true;
}

void ketThuc()
{   
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow( window );
    IMG_Quit();
    TTF_Quit();
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