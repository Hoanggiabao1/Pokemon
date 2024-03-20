#include "file_cpp/struct.cpp"

bool battle = false;
int randomPoke = 0;
bool nemBong = false;
int x_bong = 400;
int y_bong = 400;
bool bongDenPoke = false;
bool inPoke = true;
int tiLeBat;

void xuLiBatPoke(bool &battle, bool &nemBong, int x_chuot, int y_chuot, bool &dichuyen, int &tiLeBat){
    if(battle){
        if (x_chuot >= 200 && x_chuot <= 600 && y_chuot >= 660 && y_chuot <= 740 && !nemBong){
            battle = false;
            dichuyen = true;
        }
        if (x_chuot >= 680 && x_chuot <= 1080 && y_chuot >= 660 && y_chuot <= 740 && !nemBong){
            nemBong = true;
            tiLeBat = rand()%100;
        }
}
}

void inLuaChon(){
    SDL_Texture* luaChon1 = dongChu("Chay", 40, arial);
    SDL_Texture* luaChon2 = dongChu("Nem bong", 40, arial);
    SDL_Surface* mauXanhLa = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(mauXanhLa, NULL, SDL_MapRGB(mauXanhLa->format, 0, 102, 51));
    SDL_Texture* hopLuaChon = SDL_CreateTextureFromSurface(renderer, mauXanhLa);
    SDL_FreeSurface(mauXanhLa);
    if(!nemBong){
        inTextureLenManHinh(200, 660, 400, 80, hopLuaChon);
        inTextureLenManHinh(300, 680, 120, 40, luaChon1);
        inTextureLenManHinh(680, 660, 400, 80, hopLuaChon);
        inTextureLenManHinh(720, 680, 300, 40, luaChon2);
    }
}

void inBongPoke(int &x_bong, int &y_bong, bool &bongDenPoke, bool &inPoke){
    inVat(x_bong, y_bong, 80, 80, "res/Vatpham/bong.png");
    if(x_bong < 750){
        x_bong += 50;
    }
    if (y_bong > 250){
        y_bong -= 50;
    }
    if (x_bong == 700 && y_bong == 250){
        inPoke = false;
    }
    if (x_bong >= 750 && y_bong <=250){
        bongDenPoke = true;
    }
}

void batPokeDcKo(int &x_bong, int &y_bong, bool &bongDenPoke, bool &nemBong, bool &battle, Pokemon &pokedex, bool &inPoke, int &tic){
     if (bongDenPoke){
        SDL_Texture* thanhCong = dongChu("THANH CONG!", 40, pixel);
        SDL_Texture* thatBai = dongChu("THAT BAI!", 40, pixel);
        tic += 1;
        if (tiLeBat > 50){
            if (tic >= 3){
                inPoke = true;
                nemBong = false;
            }
            if (tic >= 5){
                tic = 0;
                inTextureLenManHinh(700, 190, 320, 40, thatBai);
                bongDenPoke = false;
                x_bong = 400;
                y_bong = 400;
            }
        } else {
            if (tic >= 5){
                inTextureLenManHinh(700, 190, 320, 40, thanhCong);
            }
            if (tic >= 8){
                tic = 0;
                bongDenPoke = false;
                nemBong = false;
                battle = false;
                pokedex.cohaykhong = true;
                x_bong = 400;
                y_bong = 400;
                dichuyen = true;
                inPoke = true;
            }
        }
        SDL_DestroyTexture( thanhCong );
        SDL_DestroyTexture( thatBai );
    }
}

void inBattlePoke(int random, bool &nemBong, int &x_bong, int &y_bong, bool &bongDenPoke, bool &battle, bool &inPoke, int &tic){
    inVat(0, 0, 1280, 600, "res/Map/battle.jpg");
    if (inPoke){
        inVat(750, 250, 200, 200, pokedex[random].tenFileAnh);
    }
    batPokeDcKo(x_bong, y_bong, bongDenPoke, nemBong, battle, pokedex[random], inPoke, tic);
    if (nemBong){
        inBongPoke(x_bong, y_bong, bongDenPoke, inPoke);
    }else {
        inLuaChon();
    }
    inVat(150, 250, 450, 450, "res/Nhanvat/trongbattle.png");
}