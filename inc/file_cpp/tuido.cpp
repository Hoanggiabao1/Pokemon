
void inNenTuiDo(){
    SDL_Surface* nenLon = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_Surface* nenNho = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(nenNho, NULL, SDL_MapRGB(nenNho->format, 0, 102, 51));
    SDL_FillRect(nenLon, NULL, SDL_MapRGB(nenLon->format, 204, 0, 0));
    SDL_Texture* textureNenNho = SDL_CreateTextureFromSurface(renderer, nenNho);
    SDL_Texture* textureNenLon = SDL_CreateTextureFromSurface(renderer, nenLon);
    SDL_Texture* tieude = dongChu("TUI DO", 40, pixel);
    SDL_FreeSurface(nenNho);
    SDL_FreeSurface(nenLon);
    inTextureLenManHinh(800, 0, 480, 800, textureNenLon);
    inTextureLenManHinh(810, 10, 460, 780, textureNenNho);
    inTextureLenManHinh(940, 20, 220, 40, tieude);
    SDL_DestroyTexture(textureNenNho);
    SDL_DestroyTexture(textureNenLon);
    SDL_DestroyTexture(tieude);
}

void inChoPoke(){
    SDL_Surface* oTrong = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(oTrong, NULL, SDL_MapRGB(oTrong->format, 128, 128, 128));
    SDL_Texture* textureOTrong = SDL_CreateTextureFromSurface(renderer, oTrong);
    SDL_FreeSurface(oTrong);
    for (int i = 0; i < 4; i++){
        inTextureLenManHinh(845 + i*105, 76, 70, 33, textureOTrong);
    }
    SDL_Texture* soLuong = NULL;
    inVat(845, 76, 35, 33, "res/Vatpham/bong.png");
    soLuong = dongChu("X " + std::to_string(bongPoke), 33, arial);
    inTextureLenManHinh(880, 76, 35, 33, soLuong);
    inVat(950, 76, 35, 33, "res/Vatpham/keoco.png");
    soLuong = dongChu("X " + std::to_string(keoCo), 33, arial);
    inTextureLenManHinh(985, 76, 35, 33, soLuong);
    inVat(1055, 76, 35, 33, "res/Vatpham/keolua.png");
    soLuong = dongChu("X " + std::to_string(keoLua), 33, arial);
    inTextureLenManHinh(1090, 76, 35, 33, soLuong);
    inVat(1160, 76, 35, 33, "res/Vatpham/keonuoc.png");
    soLuong = dongChu("X " + std::to_string(keoNuoc), 33, arial);
    inTextureLenManHinh(1195, 76, 35, 33, soLuong);
    SDL_DestroyTexture(soLuong);
    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 3; j++){
            inTextureLenManHinh(856 + j*138, 125 + i*135, 92, 90, textureOTrong);
            if (pokedex[i*3+j].cohaykhong){
                inVat(856 + j*138, 125 + i*135, 80, 80, pokedex[i*3+j].tenFileAnh);
                SDL_Texture* level = dongChu("Level " + std::to_string(pokedex[i*3+j].cap), 10, arial);
                inTextureLenManHinh(856 + j*138, 185 + i*135, 80, 20, level);
                SDL_DestroyTexture(level);
                switch (pokedex[i*3+j].he){
                case 1:
                    inVat(916 + j*138, 125 + i*135, 20, 20, "res/Vatpham/heco.png");
                    break;
                case 2:
                    inVat(916 + j*138, 125 + i*135, 20, 20, "res/Vatpham/helua.png");
                    break;
                case 3:
                    inVat(916 + j*138, 125 + i*135, 20, 20, "res/Vatpham/henuoc.png");
                    break;
                }
            }
        }
    }
    SDL_DestroyTexture(textureOTrong);
}

void inTuiDo(){
    inNenTuiDo();
    inChoPoke();
}