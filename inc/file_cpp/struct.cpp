struct Chieu
{   
    std::string ten;
    int dame;
    int he;
};

Chieu cao = {"cao", 5, 0};
Chieu roimay = {"roi may", 10, 1};

struct Pokemon
{
    int maxHP;
    int atk;
    int def;
    int speed;
    int he;
    Chieu hocduoc[3];
    int keodaan;
    int cap;
    bool cohaykhong;
    int luongHPhientai;
    std::string tenFileAnh;
};

Pokemon pokedex[15];


void khoiTaoPokedex() {
    //Ech co
    pokedex[0].maxHP = 50;
    pokedex[0].atk = 20;
    pokedex[0].def = 20;
    pokedex[0].speed = 10;
    pokedex[0].he = 1;
    pokedex[0].keodaan = 0;
    pokedex[0].cap = 1;
    pokedex[0].cohaykhong = false;
    pokedex[0].luongHPhientai = 50;
    pokedex[0].tenFileAnh = "res/Poke/001-Bulbasaur.png";
    
    //Khung long lua
    pokedex[1].maxHP = 50;
    pokedex[1].atk = 20;
    pokedex[1].def = 20;
    pokedex[1].speed = 10;
    pokedex[1].he = 1;
    pokedex[1].keodaan = 0;
    pokedex[1].cap = 1;
    pokedex[1].cohaykhong = false;
    pokedex[1].luongHPhientai = 50;
    pokedex[1].tenFileAnh = "res/Poke/004-Charmander.png";

    //Rua nuoc
    pokedex[2].maxHP = 50;
    pokedex[2].atk = 20;
    pokedex[2].def = 20;
    pokedex[2].speed = 10;
    pokedex[2].he = 1;
    pokedex[2].keodaan = 0;
    pokedex[2].cap = 1;
    pokedex[2].cohaykhong = false;
    pokedex[2].luongHPhientai = 50;
    pokedex[2].tenFileAnh = "res/Poke/007-Squirtle.png";
}
