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
        ||y_bando < -7480 || y_bando > 320 || x_bando > 320 || x_bando < -440;

}

void inMapChinh(int x_bando, int y_bando, int i, int j){
    std::string hoatAnh[4][4] ={
        {"res/Nhanvat/dilen/1.png", "res/Nhanvat/dilen/2.png", "res/Nhanvat/dilen/3.png", "res/Nhanvat/dilen/4.png"},
        {"res/Nhanvat/dixuong/1.png", "res/Nhanvat/dixuong/2.png", "res/Nhanvat/dixuong/3.png", "res/Nhanvat/dixuong/4.png"},
        {"res/Nhanvat/sangphai/1.png", "res/Nhanvat/sangphai/2.png", "res/Nhanvat/sangphai/3.png", "res/Nhanvat/sangphai/4.png"},
        {"res/Nhanvat/sangtrai/1.png", "res/Nhanvat/sangtrai/2.png", "res/Nhanvat/sangtrai/3.png", "res/Nhanvat/sangtrai/4.png"}
    };
    SDL_Texture* banDo = inAnhLen("res/Map/map2.jpg");
    SDL_Texture* nhanVat = inAnhLen(hoatAnh[i][j]);
    inTextureLenManHinh(x_bando, y_bando, 960, 8000, banDo);
    inCoLenManHinh(x_bando, y_bando);
    inTextureLenManHinh(400, 400, 40, 40, nhanVat);
    inCayLenManHinh(x_bando, y_bando);
    SDL_DestroyTexture(banDo);
    SDL_DestroyTexture(nhanVat);
}

void vongLapGame(){
    int x_bando = 200;
    int y_bando = -7220;
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