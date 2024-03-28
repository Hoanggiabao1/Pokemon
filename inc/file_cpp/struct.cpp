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
    int idPoke;
    int cap;
    bool cohaykhong;
    int luongHPhientai;
    std::string tenFileAnh;
};

Pokemon pokedex[15];
Pokemon pokeNguoiChoi[15];

void doiPokeMon(Pokemon &poke1, Pokemon &poke2){
    Pokemon poketg;
    poketg = poke1;
    poke1 = poke2;
    poke2 = poketg;
}

void khoiTaoPokedex(Pokemon pokedex[]) {
    //Ech co
    pokedex[0].maxHP = 50;
    pokedex[0].atk = 20;
    pokedex[0].def = 20;
    pokedex[0].speed = 10;
    pokedex[0].he = 1;
    pokedex[0].idPoke = 0;
    pokedex[0].cap = 1;
    pokedex[0].cohaykhong = true;
    pokedex[0].luongHPhientai = 50;
    pokedex[0].tenFileAnh = "res/Poke/001-Bulbasaur.png";
    
    //Khung long lua
    pokedex[1].maxHP = 30;
    pokedex[1].atk = 40;
    pokedex[1].def = 10;
    pokedex[1].speed = 20;
    pokedex[1].he = 2;
    pokedex[1].idPoke = 1;
    pokedex[1].cap = 1;
    pokedex[1].cohaykhong = true;
    pokedex[1].luongHPhientai = 50;
    pokedex[1].tenFileAnh = "res/Poke/004-Charmander.png";

    //Rua nuoc
    pokedex[2].maxHP = 50;
    pokedex[2].atk = 10;
    pokedex[2].def = 30;
    pokedex[2].speed = 10;
    pokedex[2].he = 3;
    pokedex[2].idPoke = 2;
    pokedex[2].cap = 1;
    pokedex[2].cohaykhong = true;
    pokedex[2].luongHPhientai = 50;
    pokedex[2].tenFileAnh = "res/Poke/007-Squirtle.png";

    //Cay dua
    pokedex[3].maxHP = 30;
    pokedex[3].atk = 20;
    pokedex[3].def = 20;
    pokedex[3].speed = 5;
    pokedex[3].he = 1;
    pokedex[3].idPoke = 3;
    pokedex[3].cap = 1;
    pokedex[3].cohaykhong = true;
    pokedex[3].luongHPhientai = 50;
    pokedex[3].tenFileAnh = "res/Poke/102-Exeggcute.png";
    
    //Cho lua
    pokedex[4].maxHP = 20;
    pokedex[4].atk = 20;
    pokedex[4].def = 10;
    pokedex[4].speed = 25;
    pokedex[4].he = 2;
    pokedex[4].idPoke = 4;
    pokedex[4].cap = 1;
    pokedex[4].cohaykhong = true;
    pokedex[4].luongHPhientai = 50;
    pokedex[4].tenFileAnh = "res/Poke/058-Growlithe.png";

    //Sao bien
    pokedex[5].maxHP = 15;
    pokedex[5].atk = 15;
    pokedex[5].def = 15;
    pokedex[5].speed = 30;
    pokedex[5].he = 3;
    pokedex[5].idPoke = 5;
    pokedex[5].cap = 1;
    pokedex[5].cohaykhong = true;
    pokedex[5].luongHPhientai = 50;
    pokedex[5].tenFileAnh = "res/Poke/120-Staryu.png";

    //Rua co
    pokedex[6].maxHP = 60;
    pokedex[6].atk = 5;
    pokedex[6].def = 30;
    pokedex[6].speed = 5;
    pokedex[6].he = 1;
    pokedex[6].idPoke = 6;
    pokedex[6].cap = 1;
    pokedex[6].cohaykhong = true;
    pokedex[6].luongHPhientai = 50;
    pokedex[6].tenFileAnh = "res/Poke/387-Turtwig.png";
    
    //Khi lua
    pokedex[7].maxHP = 20;
    pokedex[7].atk = 35;
    pokedex[7].def = 10;
    pokedex[7].speed = 35;
    pokedex[7].he = 2;
    pokedex[7].idPoke = 7;
    pokedex[7].cap = 1;
    pokedex[7].cohaykhong = true;
    pokedex[7].luongHPhientai = 50;
    pokedex[7].tenFileAnh = "res/Poke/390-Chimchar.png";

    //Canh cut
    pokedex[8].maxHP = 30;
    pokedex[8].atk = 30;
    pokedex[8].def = 30;
    pokedex[8].speed = 10;
    pokedex[8].he = 3;
    pokedex[8].idPoke = 8;
    pokedex[8].cap = 1;
    pokedex[8].cohaykhong = true;
    pokedex[8].luongHPhientai = 50;
    pokedex[8].tenFileAnh = "res/Poke/393-Piplup.png";

    //Soc co
    pokedex[9].maxHP = 25;
    pokedex[9].atk = 30;
    pokedex[9].def = 30;
    pokedex[9].speed = 15;
    pokedex[9].he = 1;
    pokedex[9].idPoke = 9;
    pokedex[9].cap = 1;
    pokedex[9].cohaykhong = true;
    pokedex[9].luongHPhientai = 50;
    pokedex[9].tenFileAnh = "res/Poke/650-Chespin.png";
    
    //Cao lua
    pokedex[10].maxHP = 10;
    pokedex[10].atk = 35;
    pokedex[10].def = 10;
    pokedex[10].speed = 45;
    pokedex[10].he = 2;
    pokedex[10].idPoke = 10;
    pokedex[10].cap = 1;
    pokedex[10].cohaykhong = true;
    pokedex[10].luongHPhientai = 50;
    pokedex[10].tenFileAnh = "res/Poke/653-Fennekin.png";

    //Ech nuoc
    pokedex[11].maxHP = 15;
    pokedex[11].atk = 40;
    pokedex[11].def = 15;
    pokedex[11].speed = 30;
    pokedex[11].he = 3;
    pokedex[11].idPoke = 11;
    pokedex[11].cap = 1;
    pokedex[11].cohaykhong = true;
    pokedex[11].luongHPhientai = 50;
    pokedex[11].tenFileAnh = "res/Poke/656-Froakie.png";

    //Huyen thoai co
    pokedex[12].maxHP = 100;
    pokedex[12].atk = 100;
    pokedex[12].def = 50;
    pokedex[12].speed = 100;
    pokedex[12].he = 1;
    pokedex[12].idPoke = 12;
    pokedex[12].cap = 15;
    pokedex[12].cohaykhong = true;
    pokedex[12].luongHPhientai = 50;
    pokedex[12].tenFileAnh = "res/Poke/384-Rayquaza.png";
    
    //Huyen thoai lua
    pokedex[13].maxHP = 80;
    pokedex[13].atk = 120;
    pokedex[13].def = 80;
    pokedex[13].speed = 70;
    pokedex[13].he = 2;
    pokedex[13].idPoke = 13;
    pokedex[13].cap = 15;
    pokedex[13].cohaykhong = true;
    pokedex[13].luongHPhientai = 50;
    pokedex[13].tenFileAnh = "res/Poke/383-Groudon.png";

    //Huyen thoai nuoc
    pokedex[14].maxHP = 120;
    pokedex[14].atk = 120;
    pokedex[14].def = 100;
    pokedex[14].speed = 10;
    pokedex[14].he = 3;
    pokedex[14].idPoke = 14;
    pokedex[14].cap = 15;
    pokedex[14].cohaykhong = true;
    pokedex[14].luongHPhientai = 50;
    pokedex[14].tenFileAnh = "res/Poke/382-Kyogre.png";
}

void doiAnhCap1(Pokemon &poke){
    switch (poke.idPoke)
    {
    case 0:
        poke.tenFileAnh = "res/Poke/002-Ivysaur.png";
        break;
    case 1:
        poke.tenFileAnh = "res/Poke/005-Charmeleon.png";
        break;
    case 2:
        poke.tenFileAnh = "res/Poke/008-Wartortle.png";
        break;
    case 3:
        poke.tenFileAnh = "res/Poke/103-Exeggutor.png";
        break;
    case 4:
        poke.tenFileAnh = "res/Poke/059-Arcanine.png";
        break;
    case 5:
        poke.tenFileAnh = "res/Poke/121-Starmie.png";
        break;
    case 6:
        poke.tenFileAnh = "res/Poke/388-Grotle.png";
        break;
    case 7:
        poke.tenFileAnh = "res/Poke/391-Monferno.png";
        break;
    case 8:
        poke.tenFileAnh = "res/Poke/394-Prinplup.png";
        break;
    case 9:
        poke.tenFileAnh = "res/Poke/651-Quilladin.png";
        break;
    case 10:
        poke.tenFileAnh = "res/Poke/654-Braixen.png";
        break;
    case 11:
        poke.tenFileAnh = "res/Poke/657-Frogadier.png";
        break;
    }
}

void doiAnhCap2(Pokemon &poke){
    switch (poke.idPoke)
    {
    case 0:
        poke.tenFileAnh = "res/Poke/003-Venusaur.png";
        break;
    case 1:
        poke.tenFileAnh = "res/Poke/006-Charizard.png";
        break;
    case 2:
        poke.tenFileAnh = "res/Poke/009-Blastoise.png";
        break;
    case 6:
        poke.tenFileAnh = "res/Poke/389-Torterra.png";
        break;
    case 7:
        poke.tenFileAnh = "res/Poke/392-Infernape.png";
        break;
    case 8:
        poke.tenFileAnh = "res/Poke/395-Empoleon.png";
        break;
    case 9:
        poke.tenFileAnh = "res/Poke/652-Chesnaught.png";
        break;
    case 10:
        poke.tenFileAnh = "res/Poke/655-Delphox.png";
        break;
    case 11:
        poke.tenFileAnh = "res/Poke/658-Greninja.png";
        break;
    }
}

void tienHoa(Pokemon pokedex[]){
    for (int i = 0; i < 12; i++){
        if (pokedex[i].cap == 5){
            doiAnhCap1(pokedex[i]);
        }
        if (pokedex[i].cap == 10){
            doiAnhCap2(pokedex[i]);
        }
    }
    
}