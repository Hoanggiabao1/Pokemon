#include "file_cpp/struct.cpp"

Pokemon nhanPoke(Pokemon poke[], int random){
    khoiTaoPokedex();
    return poke[random];
}

void inBattlePoke(int random){
    SDL_Texture* backGround = inAnhLen("res/Map/battle.jpg");
    inTextureLenManHinh(0, 0, 1280, 600, backGround);
    SDL_Texture* pokemon = inAnhLen(nhanPoke(pokedex, random).tenFileAnh);
    if (pokemon == NULL){
        std::cout<<"Loi day "<<SDL_GetError();
    }
    inTextureLenManHinh(750, 230, 200, 200, pokemon);
    SDL_DestroyTexture(pokemon);
    SDL_DestroyTexture(backGround);
}