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
    int color; //�]���o���}�G�ƶq�Ѫ��a�]�w�A�ҥH�ڴN²���I�A�����H��Ƨ@���}�G���⸹�C ex. �p�G�n5���}�G�A���N�O1,2,3,4,5�����}�G�C��generateCandy���͡C
    int point; //�ӿ}�G�i�H�o�X���A�|�OscoreUnit*(Weight)�A�ܩ�����n�h�֡A�i�H�H�����͡A�άO�άY�Ӥ����W�w�C
    int cleanType; //�P�w�������̾ڡC

} candy;

typedef struct user
{
    char name[20];
    int candy_type_number;
}user;

typedef struct saveform
{
    char *time; //�s�ɪ��ɶ��C
    char *player; //���a�W�١C
    int point; //���a�`�o���C

} saveform;


void load_ttf( ALLEGRO_FONT *font );
void player_info( char name[], int* candy_type_number_int, ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font, ALLEGRO_MOUSE_STATE Mouse_state);
void game( ALLEGRO_BITMAP* candy_red, ALLEGRO_BITMAP* candy_orange, ALLEGRO_BITMAP* candy_green, ALLEGRO_BITMAP* candy_blue, ALLEGRO_BITMAP* candy_yellow, ALLEGRO_BITMAP* candy_purple, ALLEGRO_BITMAP* background, ALLEGRO_KEYBOARD_STATE *keyboard_state );
void save( int candyType, char *fileName, char name[], int score );
void release( ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font );
int game_leave( char name[], ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font, ALLEGRO_MOUSE_STATE Mouse_state);

#endif // HEADER_H_INCLUDED
