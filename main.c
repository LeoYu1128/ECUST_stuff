#include "header.h"

int main(void)
{
    //variables
    user player_file;
    saveform player_record;
    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_BITMAP* background = NULL;
    ALLEGRO_BITMAP* candy_red = NULL;
    ALLEGRO_BITMAP* candy_orange = NULL;
    ALLEGRO_BITMAP* candy_green = NULL;
    ALLEGRO_BITMAP* candy_blue = NULL;
    ALLEGRO_BITMAP* candy_yellow = NULL;
    ALLEGRO_BITMAP* candy_purple = NULL;
    ALLEGRO_FONT *font = NULL;
    ALLEGRO_MOUSE_STATE Mouse_state;
    ALLEGRO_KEYBOARD_STATE keyboard_state;
    int bottun= 0;
    int mode=0;

    //initialization
    al_init();
    al_init_image_addon();
    al_install_keyboard();
    al_init_font_addon();
    al_init_ttf_addon();
    al_install_mouse();
    srand(time(0));

    //load
    display = al_create_display( display_w, display_h );
    background = al_load_bitmap("./background.jpg");
    font = al_load_font("Amatic-Bold.ttf",50,0 );

    player_info( player_file.name, &player_file.candy_type_number, display, background, font, Mouse_state );

    game( candy_red, candy_orange, candy_green, candy_blue, candy_yellow, candy_purple, background, &keyboard_state );

    bottun = al_show_native_message_box( NULL, NULL, "Do you want to save?", NULL, NULL, ALLEGRO_MESSAGEBOX_YES_NO );

    candy_delect(candy, candy_red, candy_orange, candy_green, candy_blue, candy_yellow, candy_purple, background );

    mode=game_leave( player_file.name, &player_record.point, display, background, font,  Mouse_state);

    if( bottun == 1 )
        save( player_file.candy_type_number, "score.txt", player_file.name, 100 );

    release(display, background, font);

    return 0;
}


