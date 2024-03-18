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
    while (!quit) {
        SDL_RenderClear(renderer);
        inMapChinh(x_bando, y_bando, huongdi, tuthe);
        if(me){
            loiThoaiMe(lan, doiloithoai);
        }
        SDL_RenderPresent(renderer);
        dichuyen = !me;
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                if (dichuyen){
                    diChuyenTrenBanDo(e, x_bando, y_bando, huongdi, tuthe);
                }
                if (e.key.keysym.sym == SDLK_j /*&& x_bando == 160 && y_bando == -7240*/){
                    me = true;
                }
            }
            if (me){
                if (e.type == SDL_MOUSEBUTTONDOWN){
                    doiloithoai += 1;
                    if (doiloithoai == 6 && lan == 0){
                        lan += 1;
                        doiloithoai = 0;
                        me = false;
                        dichuyen = true;
                    }
                    if (doiloithoai == 1 && lan == 1){
                        SDL_Delay(3000);
                    }
                    if (doiloithoai == 2 && lan == 1){
                        doiloithoai = 0;
                        me = false;
                        dichuyen = true;
                    }

                }
            }
        }
    }
    std::cout<<x_bando<<" "<<y_bando<<" ";
    std::cout<<doiloithoai;
}
