
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

void inNPC(int hoanhDoX, int tungDoY, std::string tenFileAnh){
    SDL_Texture* nhanVatPhu = inAnhLen(tenFileAnh.c_str());
    inTextureLenManHinh(hoanhDoX, tungDoY, 40, 40, nhanVatPhu);
    SDL_DestroyTexture(nhanVatPhu);
}

void inNPCLenManHinh(int x_bando, int y_bando){
    inNPC(x_bando + 240, y_bando + 7600, "res/NPC/me.png");
    inNPC(x_bando + 460, y_bando + 540, "res/NPC/trumcuoi.png");
}

void inVatLenManHinh(int x_bando, int y_bando){
    inTextureLenManHinh(x_bando + 80, y_bando + 7440, 220, 200, nhaMinh);
    inTextureLenManHinh(x_bando + 360, y_bando + 5760, 240, 160, gym);
    inTextureLenManHinh(x_bando + 120, y_bando + 3680, 240, 160, gym);
    inTextureLenManHinh(x_bando + 160, y_bando + 2400, 240, 160, gym);
    inTextureLenManHinh(x_bando + 600, y_bando + 7400, 200, 200, nhaNPC2);
    inTextureLenManHinh(x_bando + 600, y_bando + 7120, 200, 240, nhaNPC1);
    inTextureLenManHinh(x_bando + 160, y_bando + 5480, 200, 240, nhaNPC5);
    inTextureLenManHinh(x_bando + 600, y_bando + 5520, 160, 200, nhaNPC2);
    inTextureLenManHinh(x_bando + 400, y_bando + 5560, 160, 160, nui);
    inTextureLenManHinh(x_bando + 600, y_bando + 3720, 200, 240, nhaNPC1);
    inTextureLenManHinh(x_bando + 600, y_bando + 3320, 200, 200, nhaNPC4);
    inTextureLenManHinh(x_bando + 160, y_bando + 3400, 200, 240, nhaNPC6);
    for (int i = 0; i <= 600; i += 40){
        inTextureLenManHinh(x_bando + 160 + i, y_bando + 5400, 40, 40, hangRaoDoc);
        inTextureLenManHinh(x_bando + 160 + i, y_bando + 5280, 40, 40, hangRaoDoc);
    }
    for (int i = 0; i <= 580; i += 40){
        inTextureLenManHinh(x_bando + 80 + i, y_bando + 2640, 40, 40, hangRaoDoc);
    }
    for (int i = 40; i <= 240; i += 40){
        inTextureLenManHinh(x_bando + 80, y_bando + 2620 + i, 10, 60, hangRaoNgang);
        inTextureLenManHinh(x_bando + 670, y_bando + 2620 + i, 10, 60, hangRaoNgang);
    }
    for (int i = 0; i <= 580; i += 40){
        inTextureLenManHinh(x_bando + 80 + i, y_bando + 2880, 40, 40, hangRaoDoc);
    }
    inTextureLenManHinh(x_bando + 160, y_bando + 2760, 200, 200, nhaNPC3);
    inTextureLenManHinh(x_bando + 600, y_bando + 2240, 200, 240, nhaNPC2);

}

void inCayLenManHinh(int x_bando, int y_bando){
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
        inTextureLenManHinh(x_bando + 124, y_bando + 2640, 40, 60, cay);
        inTextureLenManHinh(x_bando + 300, y_bando + 2660, 40, 60, cay);
        inTextureLenManHinh(x_bando + 380, y_bando + 2800, 40, 60, cay);
}

void inCoLenManHinh(int x_bando, int y_bando){
    inCo(x_bando + 120, y_bando + 6120, 280, 880, co);
    inCo(x_bando + 560, y_bando + 6120, 280, 880, co);
    inCo(x_bando + 120, y_bando + 4200, 280, 880, co);
    inCo(x_bando + 560, y_bando + 4200, 280, 880, co);
    inCo(x_bando + 120, y_bando + 1240, 280, 800, co);
    inCo(x_bando + 560, y_bando + 1240, 280, 800, co);
    inCo(x_bando + 160, y_bando + 5320, 660, 80, co);
    inCo(x_bando + 120, y_bando + 7760, 160, 120, co);
    inCo(x_bando + 520, y_bando + 2680, 120, 200, co);
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
        || (y_bando > -5520 && y_bando < -5320 && x_bando < 80 && x_bando > -200)
        || (y_bando > -3440 && y_bando < -3240 && x_bando < 320 && x_bando > 40)
        || (y_bando > -2160 && y_bando < -1960 && x_bando < 280 && x_bando > 0)
        || (y_bando > -7480 && y_bando < -7320 && x_bando < 0 && x_bando > -440)
        || (y_bando > -7200 && y_bando < -6960 && x_bando < -160 && x_bando > -400)
        || (y_bando > -6920 && y_bando < -6680 && x_bando < -280 && x_bando > -400)
        || (y_bando > -6840 && y_bando < -6680 && x_bando < -160 && x_bando > -400)
        || (y_bando > -5320 && y_bando < -5040 && x_bando < 280 && x_bando > 40)
        || (y_bando > -5320 && y_bando < -5120 && x_bando < 40 && x_bando > -160)
        || (y_bando > -5320 && y_bando < -5080 && x_bando < -160 && x_bando > -360)
        || (y_bando > -5040 && y_bando < -4960 && x_bando < 280 && x_bando > -400)
        || (y_bando > -4920 && y_bando < -4840 && x_bando < 280 && x_bando > -400)
        || (y_bando > -3440 && y_bando < -3300 && x_bando < -160 && x_bando > -400)
        || (y_bando > -3520 && y_bando < -3280 && x_bando < -260 && x_bando > -400)
        || (y_bando > -3240 && y_bando < -2960 && x_bando < 280 && x_bando > 40)
        || (y_bando > -3120 && y_bando < -2880 && x_bando < -160 && x_bando > -400)
        || (y_bando > -2520 && y_bando < -2200 && x_bando < 340 && x_bando > -280)
        || (y_bando > -2560 && y_bando < -2520 && x_bando < 280 && x_bando > 40)
        || (y_bando > -2080 && y_bando < -1800 && x_bando < -160 && x_bando > -400)
        || (y_bando > -180 && y_bando < -100 && x_bando < -20 && x_bando > -100)
        || y_bando < -7480 || y_bando > 320 || x_bando > 320 || x_bando < -440;

}

void inVatnVat(int huongdi, int tuthe){
    std::string hoatAnh[4][4] ={
        {"res/Nhanvat/dilen/1.png",     "res/Nhanvat/dilen/2.png",      "res/Nhanvat/dilen/3.png",      "res/Nhanvat/dilen/4.png"},
        {"res/Nhanvat/dixuong/1.png",   "res/Nhanvat/dixuong/2.png",    "res/Nhanvat/dixuong/3.png",    "res/Nhanvat/dixuong/4.png"},
        {"res/Nhanvat/sangphai/1.png",  "res/Nhanvat/sangphai/2.png",   "res/Nhanvat/sangphai/3.png",   "res/Nhanvat/sangphai/4.png"},
        {"res/Nhanvat/sangtrai/1.png",  "res/Nhanvat/sangtrai/2.png",   "res/Nhanvat/sangtrai/3.png",   "res/Nhanvat/sangtrai/4.png"}
    };
    SDL_Texture* nhanVat = inAnhLen(hoatAnh[huongdi][tuthe]);
    inTextureLenManHinh(400, 400, 40, 40, nhanVat);
    SDL_DestroyTexture(nhanVat);
}

bool trenCo(int x_bando, int y_bando){
    return (y_bando > -6600 && y_bando < -5680 && x_bando > 0 && x_bando < 320)
        || (y_bando > -7480 && y_bando < -7320 && x_bando > 120 && x_bando < 320)
        || (y_bando > -6600 && y_bando < -5680 && x_bando > -440 && x_bando < -120)
        || (y_bando > -5000 && y_bando < -4880 && x_bando > -400 && x_bando < 280)
        || (y_bando > -4680 && y_bando < -3760 && x_bando > 0 && x_bando < 320)
        || (y_bando > -4680 && y_bando < -3760 && x_bando > -440 && x_bando < -120)
        || (y_bando > -1640 && y_bando < -800 && x_bando > 0 && x_bando < 320)
        || (y_bando > -1640 && y_bando < -800 && x_bando > -440 && x_bando < -120);
        
}

int buocdi = 0;
void diChuyenTrenBanDo(SDL_Event e, int &x_bando, int &y_bando, int &huongdi, int &tuthe, bool &battle, bool &dichuyen, int &random){
    switch (e.key.keysym.sym) {
        case SDLK_a:
            huongdi = 3;
            tuthe += 1;
            if (tuthe == 4){tuthe = 0;}
            x_bando += 20;
            if(vaChamVien(x_bando, y_bando)){
                x_bando -=20;
            }
            if (trenCo(x_bando, y_bando)){
                buocdi +=1;
            }
            break;
        case SDLK_s:
            huongdi = 1;
            tuthe += 1;
            if (tuthe == 4){tuthe = 0;}
            y_bando -= 20;
            if(vaChamVien(x_bando, y_bando)){
                y_bando +=20;
            }
            if (trenCo(x_bando, y_bando)){
                buocdi +=1;
            }
            break;
        case SDLK_d:
            huongdi = 2;
            tuthe += 1;
            if (tuthe == 4){tuthe = 0;}
            x_bando -= 20;
            if(vaChamVien(x_bando, y_bando)){
                x_bando += 20;
            }
            if (trenCo(x_bando, y_bando)){
                buocdi +=1;
            }
            break;
        case SDLK_w:
            huongdi = 0;
            tuthe += 1;
            if (tuthe == 4){tuthe = 0;}
            y_bando += 20;
            if(vaChamVien(x_bando, y_bando)){
                y_bando -= 20;
            }
            if (trenCo(x_bando, y_bando)){
                buocdi +=1;
            }
            break;
        default:
            break;
        }
    if (buocdi == 3){
        int tile = rand()%100 + 1;
        if (tile > 50){
            battle = true;
            dichuyen = false;
            if (y_bando > -1680){
                random = rand()%15;
            } else if (y_bando > -4720){
                random = rand()%12;
            } else if (y_bando > -5580){
                random = rand()%9;
            } else if (y_bando > -6640){
                random = rand()%6;
            } else {
                random = rand()%3;
            }
        }
        buocdi = 0;
    }
}

void loiThoaiMe(int lan, int doiloithoai){
    std::string loiThoai[3][100] = {
        {   
            "Hay bat dau cuoc hanh trinh bat Poke cua minh", 
            "Di vao nhung bui co kia de bat Poke", 
            "Day la 50 bong Poke khoi dau cua con",
            "Ben phai la tui do se cho biet cac Poke va item so huu",
            "Neu Pokemon con it HP hay quay ve day de hoi mau",
            "Chuc may man!"
        }, 
        {   
            "Doi 1 chut de hoi mau",
            "Da hoi mau xong",
        },
        {
            "Con da la nha Vo dich",
            "Chuc mung",
        }
        };
   inHopThoai(loiThoai[lan][doiloithoai]);
}

void loiThoaiBoss(int voDich, int doiloithoai){
    std::string loiThoai[2][100] = {
        {
            "Nguoi da vuot ngan chong gai de den day",
            "Hay quyet dau de tim ra nha vo dich"
        },
        {
            "Nguoi da thang roi!",
            "Hay day nhoc, ta rat kham phuc",
            "Tu gio danh hieu nha vo dich la cua nguoi"
        }
    };
    inHopThoai(loiThoai[voDich][doiloithoai]);
}

void kichhoat(bool &me, bool &boss, bool &dichuyen, int x_bando, int y_bando){
    if (x_bando == 160 && y_bando == -7240){
        me = true;
        dichuyen = false;
    }
    if (x_bando == -60 && y_bando == -180){
        boss = true;
        dichuyen = false;
    }
}

void xuLiLoiThoai(bool &me, bool &boss, bool &dichuyen, int &lan, int voDich, int &doiloithoai){
    if (me){
        dichuyen = false;
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

    if (boss){
        dichuyen = false;
        doiloithoai += 1;
        if (doiloithoai == 2 && voDich == 0){
            doiloithoai = 0;
            boss = false;
            dichuyen = true;
        }
        if (doiloithoai == 3 && voDich == 1){
            doiloithoai = 0;
            boss = false;
            dichuyen = true;
        }
    }
}

void inMapChinh(int x_bando, int y_bando, int huongdi, int tuthe, bool me, bool boss, int lan, int voDich, int doiloithoai){
    inTextureLenManHinh(x_bando, y_bando, 960, 8000, banDo);
    inCoLenManHinh(x_bando, y_bando);
    inVatLenManHinh(x_bando, y_bando);
    inVatnVat(huongdi, tuthe);
    inNPCLenManHinh(x_bando, y_bando);
    inCayLenManHinh(x_bando, y_bando);
    if(me){
        loiThoaiMe(lan, doiloithoai);
    }
    if (boss){
        loiThoaiBoss(voDich, doiloithoai);
    }
}