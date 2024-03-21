#include "file_cpp/hamchinh.cpp"
#include "file_cpp/mapchinh.cpp"
#include "file_cpp/title.cpp"
#include "file_cpp/battle.cpp"
#include "file_cpp/tuido.cpp"

void vongLapGame(){
    khoiTaoPokedex();
    SDL_Event e;
    bool quit = false;
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
                tic = 0;
            }
        }
    }
    while (!quit) {
        SDL_RenderClear(renderer);
        if(!battle){
            inMapChinh(x_bando, y_bando, huongdi, tuthe, me, boss, lan, voDich, doiloithoai);
            inTuiDo();
            }
        if (battle){
            SDL_Delay(1000);
            inBattlePoke(randomPoke, nemBong, x_bong, y_bong, bongDenPoke, battle, inPoke, tic);
        }
        SDL_RenderPresent(renderer);
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                if (dichuyen){
                    diChuyenTrenBanDo(e, x_bando, y_bando, huongdi, tuthe, battle, dichuyen, randomPoke);
                }
                if (e.key.keysym.sym == SDLK_e){
                    kichhoat(me, boss, dichuyen, x_bando, y_bando);
                }
            }
            if (e.type == SDL_MOUSEBUTTONDOWN){
                int x_chuot, y_chuot;
                SDL_GetMouseState(&x_chuot, &y_chuot);
                xuLiLoiThoai(me, boss, dichuyen, lan, voDich, doiloithoai);
                xuLiBatPoke (battle, nemBong, x_chuot, y_chuot, dichuyen, tiLeBat);
            }
        }
    }
}
