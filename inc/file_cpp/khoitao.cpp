#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_timer.h>
#include <string>
#include <iostream>

//map chinh
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

//battle
bool battle = false;
int randomPoke = 0;
bool nemBong = false;
int x_bong = 400;
int y_bong = 400;
bool bongDenPoke = false;
bool inPoke = true;
int tiLeBat;

//title
int tic = 0;
bool title = true;

//nhan vat
int keoCo = 0;
int keoLua = 0;
int keoNuoc = 0;
int bongPoke = 50;
