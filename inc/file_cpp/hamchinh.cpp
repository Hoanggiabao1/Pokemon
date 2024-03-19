#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <string>
#include <iostream>

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
std::string pixel = "res/font/Pixeled.ttf";
std::string arial = "res/font/arial.ttf";

SDL_Texture* inAnhLen(std::string tenfile){
    SDL_Surface* surface = IMG_Load(tenfile.c_str());
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

SDL_Texture* dongChu(std::string noidung, int coChu, std::string fontChu){
    TTF_Font* font = TTF_OpenFont(fontChu.c_str(), coChu);
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

void inHopThoai(std::string loiThoai){
    SDL_Texture* loiNoi = dongChu(loiThoai, 24, arial);
    SDL_Surface* hopThoai = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_Surface* hopThoaiLon = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(hopThoai, NULL, SDL_MapRGB(hopThoai->format, 0, 102, 51));
    SDL_FillRect(hopThoaiLon, NULL, SDL_MapRGB(hopThoai->format, 204, 0, 0));
    SDL_Texture* textureHopThoai = SDL_CreateTextureFromSurface(renderer, hopThoai);
    SDL_Texture* textureHopThoaiLon = SDL_CreateTextureFromSurface(renderer, hopThoaiLon);
    SDL_FreeSurface(hopThoai);
    SDL_FreeSurface(hopThoaiLon);
    inTextureLenManHinh(90, 590, 820, 120, textureHopThoaiLon);
    inTextureLenManHinh(100, 600, 800, 100, textureHopThoai);
    inTextureLenManHinh(150, 638, 500, 24, loiNoi);
    SDL_DestroyTexture(loiNoi);
    SDL_DestroyTexture(textureHopThoai);
    SDL_DestroyTexture(textureHopThoaiLon);
}