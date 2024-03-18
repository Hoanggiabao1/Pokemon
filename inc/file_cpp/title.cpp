

void inTitle(){
    SDL_Texture* anhNen = inAnhLen("res/Map/title.jpg");
    inTextureLenManHinh(200, 0, 1200, 800, anhNen);
    SDL_Texture* chuViet = dongChu("NHAN VAO DAY", 40, pixel);
    static int thoiGian = 0;
    thoiGian += 1;
    int tanso = 100;
    if (thoiGian > tanso){
        inTextureLenManHinh(560, 600, 500, 40, chuViet);
        }
    if (thoiGian == tanso * 2){
        thoiGian = 0;
    }
    SDL_DestroyTexture (anhNen);
    SDL_DestroyTexture (chuViet);
}