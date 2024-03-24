#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_timer.h>
#include <string>
#include <iostream>

//map chinh
int buocdi = 0;
int buoc = 0;
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
SDL_Texture* banDo = NULL;
SDL_Texture* co = NULL;
SDL_Texture* cay = NULL;
SDL_Texture* gym = NULL;
SDL_Texture* nhaNPC1 = NULL;
SDL_Texture* nhaNPC2 = NULL;
SDL_Texture* nhaNPC3 = NULL;
SDL_Texture* nhaNPC4 = NULL;
SDL_Texture* nhaNPC5 = NULL;
SDL_Texture* nhaNPC6 = NULL;
SDL_Texture* nhaMinh = NULL;
SDL_Texture* nui = NULL;
SDL_Texture* hangRaoNgang = NULL;
SDL_Texture* hangRaoDoc = NULL;

//battle
bool battleNPC = false;
bool battle = false;
int randomPoke = 0;
bool nemBong = false;
int x_bong = 400;
int y_bong = 400;
bool bongDenPoke = false;
bool inPoke = true;
int tiLeBat;
SDL_Texture* mapBatPoke = NULL;
SDL_Texture* luaChon1 = NULL;
SDL_Texture* luaChon2 = NULL;
SDL_Texture* hopLuaChon = NULL;
SDL_Texture* thanhCong = NULL;
SDL_Texture* thatBai = NULL;



//title
int tic = 0;
bool title = true;
SDL_Texture* anhTitle = NULL;
SDL_Texture* nhanVao = NULL;

//nhan vat
int keoCo = 0;
int keoLua = 0;
int keoNuoc = 0;
int bongPoke = 50;
int soPoke = 0;

//tui do
SDL_Surface* nenLon = NULL;
SDL_Surface* nenNho = NULL;
SDL_Texture* textureNenNho = NULL;
SDL_Texture* textureNenLon = NULL;
SDL_Texture* tieude = NULL;
SDL_Surface* oTrong = NULL;
SDL_Texture* textureOTrong = NULL;
SDL_Texture* iconHeCo = NULL;
SDL_Texture* iconHeLua = NULL;
SDL_Texture* iconHeNuoc = NULL;
SDL_Texture* anhBong = NULL;
SDL_Texture* anhKeoCo = NULL;
SDL_Texture* anhKeoLua = NULL;
SDL_Texture* anhKeoNuoc = NULL;
SDL_Texture* nhanVatBattle = NULL;
SDL_Texture* conTro = NULL;
bool controkeo = false;
int vatpham;
bool controhangpoke = false;
bool controcotpoke = false;
int hangPoke;
int cotPoke;


void khoiTaoGame(){
    //mapchinh
    co = inAnhLen("res/Vatthe/grass.png");
    banDo = inAnhLen("res/Map/map2.jpg");
    cay = inAnhLen("res/Vatthe/cay.png");
    gym = inAnhLen("res/Nha/gym.png");
    nhaNPC1 = inAnhLen("res/Nha/nhaNPC1.png");
    nhaNPC2 = inAnhLen("res/Nha/nhaNPC2.png");
    nhaNPC3 = inAnhLen("res/Nha/nhaNPC3.png");
    nhaNPC4 = inAnhLen("res/Nha/nhaNPC4.png");
    nhaNPC5 = inAnhLen("res/Nha/nhaNPC5.png");
    nhaNPC6 = inAnhLen("res/Nha/nhaNPC6.png");
    nhaMinh = inAnhLen("res/Nha/nhaminh.png");
    nui = inAnhLen("res/Vatthe/nui1.png");
    hangRaoDoc = inAnhLen("res/Vatthe/hangraodoc.png");
    hangRaoNgang = inAnhLen("res/Vatthe/hangraongang.png");

    //tui do
    nenLon = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    nenNho = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(nenNho, NULL, SDL_MapRGB(nenNho->format, 0, 102, 51));
    SDL_FillRect(nenLon, NULL, SDL_MapRGB(nenLon->format, 204, 0, 0));
    textureNenNho = SDL_CreateTextureFromSurface(renderer, nenNho);
    textureNenLon = SDL_CreateTextureFromSurface(renderer, nenLon);
    tieude = dongChu("TUI DO", 40, pixel);
    SDL_FreeSurface(nenNho);
    SDL_FreeSurface(nenLon);

    oTrong = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(oTrong, NULL, SDL_MapRGB(oTrong->format, 128, 128, 128));
    textureOTrong = SDL_CreateTextureFromSurface(renderer, oTrong);
    SDL_FreeSurface(oTrong);

    iconHeCo = inAnhLen("res/Vatpham/heco.png");
    iconHeLua = inAnhLen("res/Vatpham/helua.png");
    iconHeNuoc = inAnhLen("res/Vatpham/henuoc.png");

    anhBong = inAnhLen("res/Vatpham/bong.png");
    anhKeoCo = inAnhLen("res/Vatpham/keoco.png");
    anhKeoLua = inAnhLen("res/Vatpham/keolua.png");
    anhKeoNuoc = inAnhLen("res/Vatpham/keonuoc.png");

    SDL_Surface* mauVang = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(mauVang, NULL, SDL_MapRGB(mauVang->format, 255, 255, 0));
    conTro = SDL_CreateTextureFromSurface(renderer, mauVang);
    SDL_FreeSurface(mauVang);

    //battle
    luaChon1 = dongChu("Chay", 40, arial);
    luaChon2 = dongChu("Nem bong", 40, arial);
    SDL_Surface* mauXanhLa = SDL_CreateRGBSurface(0, 400, 300, 32, 0, 0, 0, 0);
    SDL_FillRect(mauXanhLa, NULL, SDL_MapRGB(mauXanhLa->format, 0, 102, 51));
    hopLuaChon = SDL_CreateTextureFromSurface(renderer, mauXanhLa);
    SDL_FreeSurface(mauXanhLa);

    thanhCong = dongChu("THANH CONG!", 40, pixel);
    thatBai = dongChu("THAT BAI!", 40, pixel);

    mapBatPoke = inAnhLen("res/Map/battle.jpg");
    nhanVatBattle = inAnhLen("res/Nhanvat/trongbattle.png");
    
    //title
    anhTitle = inAnhLen("res/Map/title.jpg");
    nhanVao = dongChu("NHAN VAO DAY", 40, pixel);

}

void ketThucGame(){
    //mapchinh
    SDL_DestroyTexture(co);
    SDL_DestroyTexture(banDo);
    SDL_DestroyTexture(cay);
    SDL_DestroyTexture(gym);
    SDL_DestroyTexture(nhaNPC1);
    SDL_DestroyTexture(nhaNPC2);
    SDL_DestroyTexture(nhaNPC3);
    SDL_DestroyTexture(nhaNPC4);
    SDL_DestroyTexture(nhaNPC5);
    SDL_DestroyTexture(nhaNPC6);
    SDL_DestroyTexture(nhaMinh);
    SDL_DestroyTexture(nui);
    SDL_DestroyTexture(hangRaoDoc);
    SDL_DestroyTexture(hangRaoNgang);

    //tui do
    SDL_DestroyTexture(textureNenNho);
    SDL_DestroyTexture(textureNenLon);
    SDL_DestroyTexture(tieude);

    SDL_DestroyTexture(textureOTrong);

    SDL_DestroyTexture(iconHeCo);
    SDL_DestroyTexture(iconHeLua);
    SDL_DestroyTexture(iconHeNuoc);

    SDL_DestroyTexture(anhBong);
    SDL_DestroyTexture(anhKeoCo);
    SDL_DestroyTexture(anhKeoLua);
    SDL_DestroyTexture(anhKeoNuoc);

    SDL_DestroyTexture(conTro);

    //battle
    SDL_DestroyTexture(luaChon1);
    SDL_DestroyTexture(luaChon2);
    SDL_DestroyTexture(hopLuaChon);

    SDL_DestroyTexture(thanhCong);
    SDL_DestroyTexture(thatBai);

    SDL_DestroyTexture(mapBatPoke);
    SDL_DestroyTexture(nhanVatBattle);

    //title
    SDL_DestroyTexture (anhTitle);
    SDL_DestroyTexture (nhanVao);

}
