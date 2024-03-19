#include "file_cpp/hamchinh.cpp"
#include "file_cpp/mapchinh.cpp"
#include "file_cpp/title.cpp"

void vongLapGame(){
    SDL_Event e;
    bool title = true;
    bool quit = false;
    int tic = 0;
    while (title){
        SDL_RenderClear(renderer);
        inTitle();
        SDL_RenderPresent(renderer);
        tic += 1;
        if (tic == 4000){
            title = false;
            quit = true;
        }
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
                title = false;
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                title = false;
            }
        }
    }
    int x_bando = 200;
    int y_bando = -7240;
    int huongdi = 0;
    int tuthe = 0;
    bool dichuyen = true;
    bool me = false;
    int lan = 0;
    int doiloithoai = 0;
    int voDich = 0;
    bool boss = false;
    bool battle = false;
    while (!quit) {
        SDL_RenderClear(renderer);
        if(!battle){
            inMapChinh(x_bando, y_bando, huongdi, tuthe, me, boss, lan, voDich, doiloithoai);
            }
        SDL_RenderPresent(renderer);
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                if (dichuyen){
                    diChuyenTrenBanDo(e, x_bando, y_bando, huongdi, tuthe, battle);
                }
                if (e.key.keysym.sym == SDLK_j){
                    kichhoat(me, boss, dichuyen, x_bando, y_bando);
                }
            }
            if (e.type == SDL_MOUSEBUTTONDOWN){
                xuLiLoiThoai(me, boss, dichuyen, lan, voDich, doiloithoai);
            }
        }
    }
}
