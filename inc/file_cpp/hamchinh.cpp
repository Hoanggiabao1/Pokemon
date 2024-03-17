#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <string>
#include <iostream>

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

SDL_Texture* inAnhLen(std::string tenfile){
    SDL_Surface* surface = IMG_Load(tenfile.c_str());
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

SDL_Texture* dongChu(std::string noidung){
    TTF_Font* font = TTF_OpenFont("res/font/arial.ttf", 40);
    SDL_Color mauChu = {255, 255, 255}; //mau trang
    SDL_Surface* textSurface = TTF_RenderText_Solid(font, noidung.c_str(), mauChu);
    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
    SDL_FreeSurface(textSurface);
    return textTexture;
}

void inTextureLenManHinh(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* texture){
    SDL_Rect destinationRect = {hoanhDoX, tungDoY, chieuDai, chieuCao};
    SDL_RenderCopy(renderer, texture, NULL, &destinationRect);
}
