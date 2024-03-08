#include <windows.h>
#include <string>
#include <SDL_image.h>
#include <SDL.h>

SDL_Window* cuaSo = NULL;
SDL_Surface* manHinh = NULL;

const int chieuDai = 1920;
const int chieuRong = 1080; //(chieu cao)

bool init()
{
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 ){
        return false;
    }
    else{
        cuaSo = SDL_CreateWindow( "Pokemon", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, chieuDai, chieuRong, SDL_WINDOW_SHOWN );
        if( cuaSo == NULL ){
            return false;
        }
        else{
            manHinh = SDL_GetWindowSurface( cuaSo );
        }
    }
    return true;
}

void ketThuc()
{
    SDL_DestroyWindow( cuaSo );
    cuaSo = NULL;
    SDL_Quit();
}

int main(int argc, char* argv[]){

    if (!init()){
        return 1;
    }
    
    SDL_UpdateWindowSurface( cuaSo );
    SDL_Delay(3000);
    ketThuc();

    return 0;
}