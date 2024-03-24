
void inTitle(){
    inTextureLenManHinh(0, 0, 1280, 800, anhTitle);
    static int thoiGian = 0;
    thoiGian += 1;
    int tanso = 100;
    if (thoiGian > tanso){
        inTextureLenManHinh(400, 600, 500, 40, nhanVao);
        }
    if (thoiGian == tanso * 2){
        thoiGian = 0;
    }
}