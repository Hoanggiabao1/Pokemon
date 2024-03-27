#include "file_cpp/hamchinh.cpp"
#include "file_cpp/khoitao.cpp"
#include "file_cpp/mapchinh.cpp"
#include "file_cpp/title.cpp"
#include "file_cpp/battle.cpp"
#include "file_cpp/tuido.cpp"

void vongLapGame(){
    khoiTaoPokedex(pokedex);
    khoiTaoPokedex(pokeNguoiChoi);
    khoiTaoGame();
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        SDL_RenderClear(renderer);
        if (title){
            inTitle();
        }
        if(!battle && !battleNPC && !title){
            inMapChinh(x_bando, y_bando, huongdi, tuthe, me, boss, lan, voDich, doiloithoai);
            inTuiDo();
            }
        if (battle){
            inBattlePoke(randomPoke, nemBong, x_bong, y_bong, bongDenPoke, battle, inPoke, tic);
        }
        if (battleNPC){
            inBattleNPC();
        }
        SDL_RenderPresent(renderer);
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                if (dichuyen && !battle){
                    diChuyenTrenBanDo(e, x_bando, y_bando, huongdi, tuthe, battle, dichuyen, randomPoke);
                }
                if (e.key.keysym.sym == SDLK_e){
                    kichhoat(me, boss, dichuyen, x_bando, y_bando);
                    xuLiLoiThoai(me, boss, dichuyen, lan, voDich, doiloithoai);
                }
            }
            if (e.type == SDL_MOUSEBUTTONDOWN){
                int x_chuot, y_chuot;
                if (title){
                    title = false;
                }
                SDL_GetMouseState(&x_chuot, &y_chuot);
                xuLiConTro(x_chuot, y_chuot);
                xuLiBatPoke (battle, nemBong, x_chuot, y_chuot, dichuyen, tiLeBat);
                if (battleNPC){
                    battleNPC = false;
                }
            }
        }
    }
    ketThucGame();
}
