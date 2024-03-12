#include <windows.h>
#include <string>
#include <SDL_image.h>
#include <SDL.h>

SDL_Renderer* renderer= NULL;
SDL_Window* cuaSo = NULL;

SDL_Texture* textureAnh (std::string tenFileAnh){
    SDL_Surface* anh = IMG_Load(tenFileAnh.c_str());
    SDL_Texture* textureChuaAnh = SDL_CreateTextureFromSurface(renderer, anh);
    SDL_FreeSurface(anh);
    return textureChuaAnh;
}

void inAnh(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* textureCanIn){
    SDL_Rect thongSoTexture = {hoanhDoX, tungDoY, chieuDai, chieuCao};
    SDL_RenderCopy(renderer, textureCanIn, NULL, &thongSoTexture);
    }
