#include "file_cpp/struct.cpp"

void xuLiBatPoke(bool &battle, bool &nemBong, int x_chuot, int y_chuot, bool &dichuyen, int &tiLeBat){
    if(battle){
        if (x_chuot >= 200 && x_chuot <= 600 && y_chuot >= 660 && y_chuot <= 740 && !nemBong){
            battle = false;
            dichuyen = true;
        }
        if (x_chuot >= 680 && x_chuot <= 1080 && y_chuot >= 660 && y_chuot <= 740 && !nemBong){
            if (bongPoke > 0){
                nemBong = true;
                bongPoke -= 1;
                tiLeBat = rand()%100;
            } else{
                battle = false;
                dichuyen = true;
            }
        }
    }
}

void inLuaChon(){
    if(!nemBong){
        inTextureLenManHinh(200, 660, 400, 80, hopLuaChon);
        inTextureLenManHinh(300, 680, 120, 40, luaChon1);
        inTextureLenManHinh(680, 660, 400, 80, hopLuaChon);
        inTextureLenManHinh(720, 680, 300, 40, luaChon2);
    }
}

void inBongPoke(int &x_bong, int &y_bong, bool &bongDenPoke, bool &inPoke){
    inTextureLenManHinh(x_bong, y_bong, 80, 80, anhBong);
    if(x_bong < 750){
        x_bong += 1;
    }
    if (y_bong > 150 && x_bong < 650){
        y_bong -= 1;
    }
    if (y_bong >= 150 && x_bong >= 650 && y_bong < 250){
        y_bong +=1;
    }
    if (x_bong >= 730 && y_bong >= 230){
        inPoke = false;
    }
    if (x_bong == 750 && y_bong == 250){
        bongDenPoke = true;
    }
}

void batPokeDcKo(int &x_bong, int &y_bong, bool &bongDenPoke, bool &nemBong, bool &battle, Pokemon &pokedex, bool &inPoke, int &tic){
     if (bongDenPoke){
        tic += 1;
        if (tiLeBat > 50){
            if (tic >= 3000){
                inPoke = true;
                inTextureLenManHinh(700, 190, 320, 40, thatBai);
                x_bong = 350;
                y_bong = 350;
            }
            if (tic >= 4000){
                nemBong = false;
                tic = 0;
                bongDenPoke = false;
            }
        } else {
            if (tic >= 4000){
                inTextureLenManHinh(700, 190, 320, 40, thanhCong);
            }
            if (tic >= 5000){
                tic = 0;
                bongDenPoke = false;
                nemBong = false;
                battle = false;
                if (!pokedex.cohaykhong){
                    pokedex.cohaykhong = true;
                    soPoke += 1;
                } else{
                    switch (pokedex.he){
                    case 1:
                        keoCo = keoCo + rand()%3 + 1;
                        break;
                    case 2:
                        keoLua = keoLua + rand()%3 + 1;
                        break;
                    case 3:
                        keoNuoc = keoNuoc + rand()%3 + 1;
                        break;
                    }
                }
                x_bong = 350;
                y_bong = 350;
                dichuyen = true;
                inPoke = true;
            }
        }
    }
}

void inBattlePoke(int random, bool &nemBong, int &x_bong, int &y_bong, bool &bongDenPoke, bool &battle, bool &inPoke, int &tic){
    inTextureLenManHinh(0, 0, 1280, 600, mapBatPoke);
    if (inPoke){
        inVat(750, 250, 200, 200, pokedex[random].tenFileAnh);
    }
    batPokeDcKo(x_bong, y_bong, bongDenPoke, nemBong, battle, pokeNguoiChoi[random], inPoke, tic);
    if (nemBong){
        inBongPoke(x_bong, y_bong, bongDenPoke, inPoke);
    }else {
        inLuaChon();
    }
    inTextureLenManHinh(600, 620, 40, 40, anhBong);
    SDL_Texture* soLuong = dongChu("X " + std::to_string(bongPoke), 33, arial);
    inTextureLenManHinh(640, 620, 40, 40, soLuong);
    SDL_DestroyTexture(soLuong);
    inTextureLenManHinh(150, 250, 450, 450, nhanVatBattle);
}

void inChonPoke(){
    inTextureLenManHinh(0, 0, 1280, 800, textureNenLon);
    inTextureLenManHinh(10, 10, 1260, 780, textureNenNho);
    inTextureLenManHinh(300, 0, 680, 80, tieuDePoke);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            inTextureLenManHinh(80 + 240*j, 120 + 220*i, 160, 160, textureOTrong);
            if (pokeNguoiChoi[i + 3*j].cohaykhong){
                inVat(80 + 240*j, 120 + 220*i, 120, 120, pokeNguoiChoi[i + 3*j].tenFileAnh);
                SDL_Texture* level = dongChu("Level " + std::to_string(pokeNguoiChoi[i + 3*j].cap), 40, arial);
                inTextureLenManHinh(80 + 240*j, 240 + 220*i, 160, 40, level);
                SDL_DestroyTexture(level);
                switch (pokeNguoiChoi[i+j*3].he){
                case 1:
                    inTextureLenManHinh(200 + 240*j, 120 + 220*i, 40, 40, iconHeCo);
                    break;
                case 2:
                    inTextureLenManHinh(200 + 240*j, 120 + 220*i, 40, 40, iconHeLua);
                    break;
                case 3:
                    inTextureLenManHinh(200 + 240*j, 120 + 220*i, 40, 40, iconHeNuoc);
                    break;
                }
            }
        }
    }
}

void inBattleNPC(){
    if(chonPoke){
        inChonPoke();
        inTextureLenManHinh(1090, 730, 180, 60, textureOTrong);
        inTextureLenManHinh(1100, 740, 160, 40, luaChon1);
        inTextureLenManHinh(900, 730, 180, 60, textureOTrong);
        inTextureLenManHinh(910, 740, 160, 40, vaoTran);
    }
    if (!chonPoke){
        inTextureLenManHinh(0, 0, 1280, 800, mapDanhNPC);
    }
}