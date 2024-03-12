#include <windows.h>
#include <string>
#include <SDL_image.h>
#include <SDL.h>
#include "file_cpp/mapchinh.cpp"

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
    }
    return true;
}

void ketThuc()
{   
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow( cuaSo );
    cuaSo = NULL;
    SDL_Quit();
}

int main(int argc, char* argv[]){

    if (!init()){
        return 1;
    }
    
    renderer = SDL_CreateRenderer(cuaSo, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        return false;
    }

    SDL_Texture* mapDemo = textureAnh("res/Map/map2.jpg");
    if (mapDemo == NULL){
        return 1;
    }

    SDL_Texture* nhanVat = textureAnh("res/Nhanvat/dilen/1.png");
    if (nhanVat == NULL){
        return 1;
    }

    inAnh(200, -7020, 960, 8000, mapDemo);

    inAnh(400, 620, 40, 40, nhanVat);

    SDL_RenderPresent(renderer);
    SDL_UpdateWindowSurface( cuaSo );
    SDL_Delay(3000);
    SDL_DestroyTexture(mapDemo);
    SDL_DestroyTexture(nhanVat);
    ketThuc();

    return 0;
}