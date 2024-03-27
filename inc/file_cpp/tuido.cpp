
void inNenTuiDo(){
    inTextureLenManHinh(800, 0, 480, 800, textureNenLon);
    inTextureLenManHinh(810, 10, 460, 780, textureNenNho);
    inTextureLenManHinh(940, 20, 220, 40, tieude);
}

void inChoPoke(){
    for (int i = 0; i < 4; i++){
        inTextureLenManHinh(845 + i*105, 76, 70, 33, textureOTrong);
    }
    SDL_Texture* soLuongBong = dongChu("X " + std::to_string(bongPoke), 33, arial);
    inTextureLenManHinh(845, 76, 35, 33, anhBong);
    inTextureLenManHinh(880, 76, 35, 33, soLuongBong);
    SDL_DestroyTexture(soLuongBong);
    SDL_Texture* soLuongCo = dongChu("X " + std::to_string(keoCo), 33, arial);
    inTextureLenManHinh(950, 76, 35, 33, anhKeoCo);
    inTextureLenManHinh(985, 76, 35, 33, soLuongCo);
    SDL_DestroyTexture(soLuongCo);
    SDL_Texture* soLuongLua = dongChu("X " + std::to_string(keoLua), 33, arial);
    inTextureLenManHinh(1055, 76, 35, 33, anhKeoLua);
    inTextureLenManHinh(1090, 76, 35, 33, soLuongLua);
    SDL_DestroyTexture(soLuongLua);
    SDL_Texture* soLuongNuoc = dongChu("X " + std::to_string(keoNuoc), 33, arial);
    inTextureLenManHinh(1160, 76, 35, 33, anhKeoNuoc);
    inTextureLenManHinh(1195, 76, 35, 33, soLuongNuoc);
    SDL_DestroyTexture(soLuongNuoc);
    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 3; j++){
            inTextureLenManHinh(856 + j*138, 125 + i*135, 92, 90, textureOTrong);
            if (pokeNguoiChoi[i*3+j].cohaykhong){
                inVat(856 + j*138, 125 + i*135, 80, 80, pokeNguoiChoi[i*3+j].tenFileAnh);
                SDL_Texture* level = dongChu("Level " + std::to_string(pokeNguoiChoi[i*3+j].cap), 10, arial);
                inTextureLenManHinh(856 + j*138, 185 + i*135, 80, 20, level);
                SDL_DestroyTexture(level);
                switch (pokeNguoiChoi[i*3+j].he){
                case 1:
                    inTextureLenManHinh(916 + j*138, 125 + i*135, 20, 20, iconHeCo);
                    break;
                case 2:
                    inTextureLenManHinh(916 + j*138, 125 + i*135, 20, 20, iconHeLua);
                    break;
                case 3:
                    inTextureLenManHinh(916 + j*138, 125 + i*135, 20, 20, iconHeNuoc);
                    break;
                }
            }
        }
    }
}

void xuLiConTro(int x_chuot, int y_chuot){
    if (!battle){
        if(y_chuot >= 76 && y_chuot <= 109){
            if (x_chuot >= 845 && x_chuot <= 915){
                controkeo = true;
                vatpham = 0;
            } else if(x_chuot >= 950 && x_chuot <= 1020){
                controkeo = true;
                vatpham = 1;
            } else if(x_chuot >= 1055 && x_chuot <= 1125){
                controkeo = true;
                vatpham = 2;
            } else if(x_chuot >= 1160 && x_chuot <= 1230){
                controkeo = true;
                vatpham = 3;
            }
        }

        if (y_chuot >= 125 && y_chuot <= 755 && x_chuot >= 856 && x_chuot <= 1224){
            if (x_chuot >= 856 && x_chuot <= 948){
                controcotpoke = true;
                cotPoke = 0;
            } else if(x_chuot >= 994 && x_chuot <= 1086){
                controcotpoke = true;
                cotPoke = 1;
            } else if(x_chuot >= 1132 && x_chuot <= 1224){
                controcotpoke = true;
                cotPoke = 2;
            }

            if (y_chuot >= 125 && y_chuot <= 215){
                controhangpoke = true;
                hangPoke = 0;
            } else if (y_chuot >= 260 && y_chuot <= 350){
                controhangpoke = true;
                hangPoke = 1;
            } else if (y_chuot >= 395 && y_chuot <= 485){
                controhangpoke = true;
                hangPoke = 2;
            } else if (y_chuot >= 530 && y_chuot <= 620){
                controhangpoke = true;
                hangPoke = 3;
            } else if (y_chuot >= 665 && y_chuot <= 755){
                controhangpoke = true;
                hangPoke = 4;
            }
        }
    }
}

void anKeo(){
    if (controhangpoke && controcotpoke && controkeo){
        if (vatpham == 1 && cotPoke == 0){
            if (keoCo > 0 && pokeNguoiChoi[hangPoke*3 + cotPoke].cap < 15 && pokeNguoiChoi[hangPoke*3 + cotPoke].cohaykhong){
                keoCo -= 1;
                pokeNguoiChoi[hangPoke*3 + cotPoke].cap += 1;
            }
        }
        if (vatpham == 2 && cotPoke == 1){
            if(keoLua > 0 && pokeNguoiChoi[hangPoke*3 + cotPoke].cap < 15 && pokeNguoiChoi[hangPoke*3 + cotPoke].cohaykhong){
                keoLua -= 1;
                pokeNguoiChoi[hangPoke*3 + cotPoke].cap += 1;
            }
        }
        if (vatpham == 3 && cotPoke == 2){
            if(keoNuoc > 0 && pokeNguoiChoi[hangPoke*3 + cotPoke].cap < 15 && pokeNguoiChoi[hangPoke*3 + cotPoke].cohaykhong){
                keoNuoc -= 1;
                pokeNguoiChoi[hangPoke*3 + cotPoke].cap += 1;
            }
        }
        controhangpoke = false;
        controcotpoke = false;
        controkeo = false;
        tienHoa(pokeNguoiChoi);
    }
}

void inTuiDo(){
    inNenTuiDo();
    if (controkeo){
        inTextureLenManHinh(840 + vatpham*105 , 71, 80, 43, conTro);
    }
    if (controhangpoke && controcotpoke){
        inTextureLenManHinh(851 + cotPoke*138, 120 + hangPoke* 135, 102, 100, conTro);
    }
    anKeo();
    inChoPoke();
}