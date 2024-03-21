void inNenTuiDo(){
    SDL_Surface* nenLon = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_Surface* nenNho = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(nenNho, NULL, SDL_MapRGB(nenNho->format, 0, 102, 51));
    SDL_FillRect(nenLon, NULL, SDL_MapRGB(nenLon->format, 204, 0, 0));
    SDL_Texture* textureNenNho = SDL_CreateTextureFromSurface(renderer, nenNho);
    SDL_Texture* textureNenLon = SDL_CreateTextureFromSurface(renderer, nenLon);
    SDL_FreeSurface(nenNho);
    SDL_FreeSurface(nenLon);
    inTextureLenManHinh(800, 0, 480, 800, textureNenLon);
    inTextureLenManHinh(810, 10, 460, 780, textureNenNho);
    SDL_Texture* tieude = dongChu("TUI DO", 60, pixel);
    inTextureLenManHinh(875, 20, 330, 60, tieude);
    SDL_DestroyTexture(textureNenNho);
    SDL_DestroyTexture(textureNenLon);
    SDL_DestroyTexture(tieude);
}

void inChoPoke(){
    SDL_Surface* oTrong = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(oTrong, NULL, SDL_MapRGB(oTrong->format, 128, 128, 128));
    SDL_Texture* textureOTrong = SDL_CreateTextureFromSurface(renderer, oTrong);
    SDL_FreeSurface(oTrong);
    for (int i = 0; i < 675; i += 135){
        for (int j = 0; j < 414; j+= 138){
            inTextureLenManHinh(856 + j, 125 + i, 92, 90, textureOTrong);
        }
    }
    SDL_DestroyTexture(textureOTrong);
}

void inTuiDo(){
    inNenTuiDo();
    inChoPoke();
}