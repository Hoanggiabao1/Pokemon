#include <SDL.h>
#include <SDL_image.h>
#include <string>


SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

SDL_Texture* inAnhLen(std::string tenfile){
    SDL_Surface* surface = IMG_Load(tenfile.c_str());
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

void inTextureLenManHinh(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* texture){
    SDL_Rect destinationRect = {hoanhDoX, tungDoY, chieuDai, chieuCao};
    SDL_RenderCopy(renderer, texture, NULL, &destinationRect);
}

void inCaylenNgang(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* texture){
    for (int i = 0; i <= 880; i+=80){
        inTextureLenManHinh(hoanhDoX + i, tungDoY, chieuDai, chieuCao, texture);
        inTextureLenManHinh(hoanhDoX + i, tungDoY + 40, chieuDai, chieuCao, texture);
        inTextureLenManHinh(hoanhDoX + i + 40, tungDoY, chieuDai, chieuCao, texture);
        inTextureLenManHinh(hoanhDoX + i + 40, tungDoY + 40, chieuDai, chieuCao, texture);
    }
}

void inCayLenDoc(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* texture){
    for (int i = 0; i <=7920; i+=80){
        inTextureLenManHinh(hoanhDoX, tungDoY + i, chieuDai, chieuCao, texture);
        inTextureLenManHinh(hoanhDoX, tungDoY + 40 + i, chieuDai, chieuCao, texture);
        inTextureLenManHinh(hoanhDoX + 40, tungDoY + i, chieuDai, chieuCao, texture);
        inTextureLenManHinh(hoanhDoX + 40, tungDoY + i + 40, chieuDai, chieuCao, texture);
    }
}

void inCayNgangCong (int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* texture){
    for (int i = 0; i <= 880; i+=40){
        if (i <= 400 || i >= 520){
            inTextureLenManHinh(hoanhDoX + i, tungDoY, chieuDai, chieuCao, texture);
            inTextureLenManHinh(hoanhDoX + i, tungDoY + 40, chieuDai, chieuCao, texture);
            }
    }
}

void inCo(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, SDL_Texture* texture){
    for (int i = 0; i <= chieuCao - 40; i+=40){
        for (int j = 0; j <=chieuDai - 40; j+=40){
            inTextureLenManHinh(hoanhDoX + j, tungDoY + i, 40, 40, texture);
        }
    }
}

void inNha(int hoanhDoX, int tungDoY, int chieuDai, int chieuCao, std::string tenFileAnh){
    SDL_Texture* nha = inAnhLen(tenFileAnh.c_str());
    inTextureLenManHinh(hoanhDoX, tungDoY, chieuDai, chieuCao, nha);
    SDL_DestroyTexture(nha);
}

void inNhaLenManHinh(int x_bando, int y_bando){
    inNha(x_bando + 80, y_bando + 7440, 220, 200, "res/Nha/nhaminh.png");
    inNha(x_bando + 360, y_bando + 5760, 240, 160, "res/Nha/gym.png");
    inNha(x_bando + 120, y_bando + 3680, 240, 160, "res/Nha/gym.png");
    inNha(x_bando + 160, y_bando + 2400, 240, 160, "res/Nha/gym.png");
    inNha(x_bando + 600, y_bando + 7400, 200, 200, "res/Nha/nhaNPC2.png");
    inNha(x_bando + 600, y_bando + 7120, 200, 240, "res/Nha/nhaNPC1.png");
    inNha(x_bando + 160, y_bando + 5480, 200, 240, "res/Nha/nhaNPC5.png");
    inNha(x_bando + 600, y_bando + 5520, 160, 200, "res/Nha/nhaNPC2.png");
    inNha(x_bando + 400, y_bando + 5560, 160, 160, "res/Vatthe/nui1.png");
    inNha(x_bando + 600, y_bando + 3720, 200, 240, "res/Nha/nhaNPC1.png");
    inNha(x_bando + 600, y_bando + 3320, 200, 200, "res/Nha/nhaNPC4.png");
    inNha(x_bando + 160, y_bando + 3400, 200, 240, "res/Nha/nhaNPC6.png");
    for (int i = 0; i <= 600; i += 40){
        inNha(x_bando + 160 + i, y_bando + 5400, 40, 40, "res/Vatthe/hangraodoc.png");
        inNha(x_bando + 160 + i, y_bando + 5280, 40, 40, "res/Vatthe/hangraodoc.png");
    }
    for (int i = 0; i <= 580; i += 40){
        inNha(x_bando + 80 + i, y_bando + 2640, 40, 40, "res/Vatthe/hangraodoc.png");
    }
    for (int i = 40; i <= 240; i += 40){
        inNha(x_bando + 80, y_bando + 2620 + i, 10, 60, "res/Vatthe/hangraongang.png");
        inNha(x_bando + 670, y_bando + 2620 + i, 10, 60, "res/Vatthe/hangraongang.png");
    }
    for (int i = 0; i <= 580; i += 40){
        inNha(x_bando + 80 + i, y_bando + 2880, 40, 40, "res/Vatthe/hangraodoc.png");
    }
    inNha(x_bando + 160, y_bando + 2760, 200, 200, "res/Nha/nhaNPC3.png");
    inNha(x_bando + 600, y_bando + 2240, 200, 240, "res/Nha/nhaNPC2.png");

}

void inCayLenManHinh(int x_bando, int y_bando){
        SDL_Texture* cay = inAnhLen("res/Vatthe/cay.png");
        inCaylenNgang(x_bando, y_bando + 7900, 40, 60, cay);
        inCaylenNgang(x_bando, y_bando - 20, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 1100, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 2060, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 3180, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 4060, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 5100, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 5980, 40, 60, cay);
        inCayNgangCong(x_bando, y_bando + 7020, 40, 60, cay);
        inCayLenDoc(x_bando, y_bando - 20, 40, 60, cay);
        inCayLenDoc(x_bando + 880, y_bando - 20, 40, 60, cay);
        for (int i = 0; i <= 280; i+= 40){
            if(i <= 200){
                inTextureLenManHinh(x_bando + 400, y_bando + 7380 + i, 40, 60, cay);
            }
            if(i <= 120){
                inTextureLenManHinh(x_bando + 280 + i, y_bando + 7580, 40, 60, cay);
            }
            inTextureLenManHinh(x_bando + 80 + i, y_bando + 7380, 40, 60, cay);
        }
        SDL_DestroyTexture(cay);
}

void inCoLenManHinh(int x_bando, int y_bando){
    SDL_Texture* co = inAnhLen("res/Vatthe/grass.png");
    inCo(x_bando + 120, y_bando + 6120, 280, 880, co);
    inCo(x_bando + 560, y_bando + 6120, 280, 880, co);
    inCo(x_bando + 120, y_bando + 4200, 280, 880, co);
    inCo(x_bando + 560, y_bando + 4200, 280, 880, co);
    inCo(x_bando + 120, y_bando + 1240, 280, 800, co);
    inCo(x_bando + 560, y_bando + 1240, 280, 800, co);
    inCo(x_bando + 160, y_bando + 5320, 660, 80, co);
    inCo(x_bando + 120, y_bando + 7760, 160, 120, co);
    SDL_DestroyTexture(co);
}

bool vaChamVien(int x_bando, int y_bando){
    return (y_bando > -6720 && y_bando < -6600  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -5680 && y_bando < -5560  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -4800 && y_bando < -4680  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -3760 && y_bando < -3640  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -2880 && y_bando < -2760  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -1760 && y_bando < -1640  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -800 && y_bando < -680  && (x_bando > -40 || x_bando < -80))
        || (y_bando > -7240 && y_bando < -6960 && x_bando > -40 )
        || (y_bando > -5520 && y_bando < -5320  && x_bando < 80 && x_bando > -200)
        || (y_bando > -3440 && y_bando < -3240  && x_bando < 320 && x_bando > 40)
        || (y_bando > -2160 && y_bando < -1960  && x_bando < 280 && x_bando > 0)
        || (y_bando > -7480 && y_bando < -7320 && x_bando < 0 && x_bando > -440)
        || (y_bando > -7200 && y_bando < -6960 && x_bando < -160 && x_bando > -400)
        || (y_bando > -6920 && y_bando < -6680 && x_bando < -280 && x_bando > -400)
        || (y_bando > -6840 && y_bando < -6680 && x_bando < -160 && x_bando > -400)
        || (y_bando > -5320 && y_bando < -5040 && x_bando < 280 && x_bando > 40)
        || (y_bando > -5320 && y_bando < -5120 && x_bando < 40 && x_bando > -160)
        || (y_bando > -5320 && y_bando < -5080 && x_bando < -160 && x_bando > -360)
        || (y_bando > -5040 && y_bando < -4960 && x_bando < 280 && x_bando > -400)
        || (y_bando > -4920 && y_bando < -4840 && x_bando < 280 && x_bando > -400)
        || y_bando < -7480 || y_bando > 320 || x_bando > 320 || x_bando < -440;

}

void inNhanVat(int i, int j){
    std::string hoatAnh[4][4] ={
        {"res/Nhanvat/dilen/1.png",     "res/Nhanvat/dilen/2.png",      "res/Nhanvat/dilen/3.png",      "res/Nhanvat/dilen/4.png"},
        {"res/Nhanvat/dixuong/1.png",   "res/Nhanvat/dixuong/2.png",    "res/Nhanvat/dixuong/3.png",    "res/Nhanvat/dixuong/4.png"},
        {"res/Nhanvat/sangphai/1.png",  "res/Nhanvat/sangphai/2.png",   "res/Nhanvat/sangphai/3.png",   "res/Nhanvat/sangphai/4.png"},
        {"res/Nhanvat/sangtrai/1.png",  "res/Nhanvat/sangtrai/2.png",   "res/Nhanvat/sangtrai/3.png",   "res/Nhanvat/sangtrai/4.png"}
    };
    SDL_Texture* nhanVat = inAnhLen(hoatAnh[i][j]);
    inTextureLenManHinh(400, 400, 40, 40, nhanVat);
    SDL_DestroyTexture(nhanVat);
}

void inMapChinh(int x_bando, int y_bando, int i, int j){
    SDL_Texture* banDo = inAnhLen("res/Map/map2.jpg");
    inTextureLenManHinh(x_bando, y_bando, 960, 8000, banDo);
    inCoLenManHinh(x_bando, y_bando);
    inNhaLenManHinh(x_bando, y_bando);
    inNhanVat(i, j);
    inCayLenManHinh(x_bando, y_bando);
    SDL_DestroyTexture(banDo);
}

void vongLapGame(){
    int x_bando = 200;
    int y_bando = -7240;
    int i = 0;
    int j = 0;
    bool quit = false;
    SDL_Event e;
    while (!quit) {
        SDL_RenderClear(renderer);
        inMapChinh(x_bando, y_bando, i, j);
        SDL_RenderPresent(renderer);
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_ESCAPE:
                        quit = true;
                        break;
                    case SDLK_a:
                        i = 3;
                        j += 1;
                        if (j == 4){j = 0;}
                        x_bando += 20;
                        if(vaChamVien(x_bando, y_bando)){
                            x_bando -=20;
                        }
                        break;
                    case SDLK_s:
                        i = 1;
                        j += 1;
                        if (j == 4){j = 0;}
                        y_bando -= 20;
                        if(vaChamVien(x_bando, y_bando) ){
                            y_bando +=20;
                        }
                        break;
                    case SDLK_d:
                        i = 2;
                        j += 1;
                        if (j == 4){j = 0;}
                        x_bando -= 20;
                        if(vaChamVien(x_bando, y_bando)){
                            x_bando += 20;
                        }
                        break;
                    case SDLK_w:
                        i = 0;
                        j += 1;
                        if (j == 4){j = 0;}
                        y_bando += 20;
                        if(vaChamVien(x_bando, y_bando)){
                            y_bando -= 20;
                        }
                        break;
                    default:
                        break;
                }
        }
        }
    }
    
}