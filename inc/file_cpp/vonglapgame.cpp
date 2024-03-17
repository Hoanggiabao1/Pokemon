#include "file_cpp/hamchinh.cpp"
#include "file_cpp/mapchinh.cpp"
#include "file_cpp/title.cpp"

void vongLapGame(){
    SDL_Event e;
    bool title = true;
    bool quit = false;
    int x_bando = 200;
    int y_bando = -7240;
    int huongdi = 0;
    int tuthe = 0;
    int tic = 0;
    while (!quit) {
        SDL_RenderClear(renderer);
        if (title){
            inTitle();
            tic += 1;
            if (tic == 4000){
                quit = true;
            }
        }
        if(!title){
            inMapChinh(x_bando, y_bando, huongdi, tuthe);
            }
        SDL_RenderPresent(renderer);
            while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                if (!title){
                    diChuyenTrenBanDo(e, x_bando, y_bando, huongdi, tuthe);
                }
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                        title = false;
                }
            }
    
        }
    }