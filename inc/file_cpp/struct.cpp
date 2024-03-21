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

void doiPokeMon(Pokemon &poke1, Pokemon &poke2){
    Pokemon poketg;
    poketg = poke1;
    poke1 = poke2;
    poke2 = poketg;
}

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
    pokedex[1].he = 2;
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
    pokedex[2].he = 3;
    pokedex[2].keodaan = 0;
    pokedex[2].cap = 1;
    pokedex[2].cohaykhong = false;
    pokedex[2].luongHPhientai = 50;
    pokedex[2].tenFileAnh = "res/Poke/007-Squirtle.png";

    //Cay dua
    pokedex[3].maxHP = 50;
    pokedex[3].atk = 20;
    pokedex[3].def = 20;
    pokedex[3].speed = 10;
    pokedex[3].he = 1;
    pokedex[3].keodaan = 0;
    pokedex[3].cap = 1;
    pokedex[3].cohaykhong = false;
    pokedex[3].luongHPhientai = 50;
    pokedex[3].tenFileAnh = "res/Poke/102-Exeggcute.png";
    
    //Cho lua
    pokedex[4].maxHP = 50;
    pokedex[4].atk = 20;
    pokedex[4].def = 20;
    pokedex[4].speed = 10;
    pokedex[4].he = 2;
    pokedex[4].keodaan = 0;
    pokedex[4].cap = 1;
    pokedex[4].cohaykhong = false;
    pokedex[4].luongHPhientai = 50;
    pokedex[4].tenFileAnh = "res/Poke/058-Growlithe.png";

    //Sao bien
    pokedex[5].maxHP = 50;
    pokedex[5].atk = 20;
    pokedex[5].def = 20;
    pokedex[5].speed = 10;
    pokedex[5].he = 3;
    pokedex[5].keodaan = 0;
    pokedex[5].cap = 1;
    pokedex[5].cohaykhong = false;
    pokedex[5].luongHPhientai = 50;
    pokedex[5].tenFileAnh = "res/Poke/120-Staryu.png";

    //Rua co
    pokedex[6].maxHP = 50;
    pokedex[6].atk = 20;
    pokedex[6].def = 20;
    pokedex[6].speed = 10;
    pokedex[6].he = 1;
    pokedex[6].keodaan = 0;
    pokedex[6].cap = 1;
    pokedex[6].cohaykhong = false;
    pokedex[6].luongHPhientai = 50;
    pokedex[6].tenFileAnh = "res/Poke/387-Turtwig.png";
    
    //Khi lua
    pokedex[7].maxHP = 50;
    pokedex[7].atk = 20;
    pokedex[7].def = 20;
    pokedex[7].speed = 10;
    pokedex[7].he = 2;
    pokedex[7].keodaan = 0;
    pokedex[7].cap = 1;
    pokedex[7].cohaykhong = false;
    pokedex[7].luongHPhientai = 50;
    pokedex[7].tenFileAnh = "res/Poke/390-Chimchar.png";

    //Canh cut
    pokedex[8].maxHP = 50;
    pokedex[8].atk = 20;
    pokedex[8].def = 20;
    pokedex[8].speed = 10;
    pokedex[8].he = 3;
    pokedex[8].keodaan = 0;
    pokedex[8].cap = 1;
    pokedex[8].cohaykhong = false;
    pokedex[8].luongHPhientai = 50;
    pokedex[8].tenFileAnh = "res/Poke/393-Piplup.png";

    //Soc co
    pokedex[9].maxHP = 50;
    pokedex[9].atk = 20;
    pokedex[9].def = 20;
    pokedex[9].speed = 10;
    pokedex[9].he = 1;
    pokedex[9].keodaan = 0;
    pokedex[9].cap = 1;
    pokedex[9].cohaykhong = false;
    pokedex[9].luongHPhientai = 50;
    pokedex[9].tenFileAnh = "res/Poke/650-Chespin.png";
    
    //Cao lua
    pokedex[10].maxHP = 50;
    pokedex[10].atk = 20;
    pokedex[10].def = 20;
    pokedex[10].speed = 10;
    pokedex[10].he = 2;
    pokedex[10].keodaan = 0;
    pokedex[10].cap = 1;
    pokedex[10].cohaykhong = false;
    pokedex[10].luongHPhientai = 50;
    pokedex[10].tenFileAnh = "res/Poke/653-Fennekin.png";

    //Ech nuoc
    pokedex[11].maxHP = 50;
    pokedex[11].atk = 20;
    pokedex[11].def = 20;
    pokedex[11].speed = 10;
    pokedex[11].he = 3;
    pokedex[11].keodaan = 0;
    pokedex[11].cap = 1;
    pokedex[11].cohaykhong = false;
    pokedex[11].luongHPhientai = 50;
    pokedex[11].tenFileAnh = "res/Poke/656-Froakie.png";

    //Huyen thoai co
    pokedex[12].maxHP = 50;
    pokedex[12].atk = 20;
    pokedex[12].def = 20;
    pokedex[12].speed = 10;
    pokedex[12].he = 1;
    pokedex[12].keodaan = 0;
    pokedex[12].cap = 1;
    pokedex[12].cohaykhong = false;
    pokedex[12].luongHPhientai = 50;
    pokedex[12].tenFileAnh = "res/Poke/384-Rayquaza.png";
    
    //Huyen thoai lua
    pokedex[13].maxHP = 50;
    pokedex[13].atk = 20;
    pokedex[13].def = 20;
    pokedex[13].speed = 10;
    pokedex[13].he = 2;
    pokedex[13].keodaan = 0;
    pokedex[13].cap = 1;
    pokedex[13].cohaykhong = false;
    pokedex[13].luongHPhientai = 50;
    pokedex[13].tenFileAnh = "res/Poke/383-Groudon.png";

    //Rua nuoc
    pokedex[14].maxHP = 50;
    pokedex[14].atk = 20;
    pokedex[14].def = 20;
    pokedex[14].speed = 10;
    pokedex[14].he = 3;
    pokedex[14].keodaan = 0;
    pokedex[14].cap = 1;
    pokedex[14].cohaykhong = false;
    pokedex[14].luongHPhientai = 50;
    pokedex[14].tenFileAnh = "res/Poke/382-Kyogre.png";
}
