#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>

#define display_w 1024
#define display_h 576

#define ROW 9
#define COL 9

typedef struct candy
{
    int color; //因為這次糖果數量由玩家設定，所以我就簡單點，直接以整數作為糖果的色號。 ex. 如果要5顆糖果，那就是1,2,3,4,5五顆糖果。由generateCandy產生。
    int point; //該糖果可以得幾分，會是scoreUnit*(Weight)，至於全重要多少，可以隨機產生，或是用某個公式規定。
    int cleanType; //判定消除的依據。

} candy;

typedef struct user
{
    char name[20];
    int candy_type_number;
}user;

typedef struct saveform
{
    char *time; //存檔的時間。
    char *player; //玩家名稱。
    int point; //玩家總得分。

} saveform;


void load_ttf( ALLEGRO_FONT *font );
void player_info( char name[], int* candy_type_number_int, ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font, ALLEGRO_MOUSE_STATE Mouse_state);
void game( ALLEGRO_BITMAP* candy_red, ALLEGRO_BITMAP* candy_orange, ALLEGRO_BITMAP* candy_green, ALLEGRO_BITMAP* candy_blue, ALLEGRO_BITMAP* candy_yellow, ALLEGRO_BITMAP* candy_purple, ALLEGRO_BITMAP* background, ALLEGRO_KEYBOARD_STATE *keyboard_state );
void save( int candyType, char *fileName, char name[], int score );
void release( ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font );
int game_leave( char name[], ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font, ALLEGRO_MOUSE_STATE Mouse_state);

#endif // HEADER_H_INCLUDED
