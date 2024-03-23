
void inNenTuiDo(){
    inTextureLenManHinh(800, 0, 480, 800, textureNenLon);
    inTextureLenManHinh(810, 10, 460, 780, textureNenNho);
    inTextureLenManHinh(940, 20, 220, 40, tieude);
}

void inChoPoke(){
    //in o trong
    for (int i = 0; i < 4; i++){
        inTextureLenManHinh(845 + i*105, 76, 70, 33, textureOTrong);
    }
    //Bong va so luong
    SDL_Texture* soLuongBong = dongChu("X " + std::to_string(bongPoke), 33, arial);
    inTextureLenManHinh(845, 76, 35, 33, anhBong);
    inTextureLenManHinh(880, 76, 35, 33, soLuongBong);
    SDL_DestroyTexture(soLuongBong);
    //Keo co va so luong
    SDL_Texture* soLuongCo = dongChu("X " + std::to_string(keoCo), 33, arial);
    inTextureLenManHinh(950, 76, 35, 33, anhKeoCo);
    inTextureLenManHinh(985, 76, 35, 33, soLuongCo);
    SDL_DestroyTexture(soLuongCo);
    //Keo lua va so luong
    SDL_Texture* soLuongLua = dongChu("X " + std::to_string(keoLua), 33, arial);
    inTextureLenManHinh(1055, 76, 35, 33, anhKeoLua);
    inTextureLenManHinh(1090, 76, 35, 33, soLuongLua);
    SDL_DestroyTexture(soLuongLua);
    //Keo nuoc va so luong
    SDL_Texture* soLuongNuoc = dongChu("X " + std::to_string(keoNuoc), 33, arial);
    inTextureLenManHinh(1160, 76, 35, 33, anhKeoNuoc);
    inTextureLenManHinh(1195, 76, 35, 33, soLuongNuoc);
    SDL_DestroyTexture(soLuongNuoc);

    //in Pokemon
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
                    inTextureLenManHinh(916 + j*138, 125 + i*135, 20, 20, iconHeCo);
                    break;
                case 2:
                    inTextureLenManHinh(916 + j*138, 125 + i*135, 20, 20, iconHeLua);
                    break;
                case 3:
                    inTextureLenManHinh(916 + j*138, 125 + i*135, 20, 20, iconHeNuoc);
                    break;
                }
            }
        }
    }
}

void inTuiDo(){
    inNenTuiDo();
    inChoPoke();
}