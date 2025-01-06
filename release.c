#include "header.h"

void release( ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font )
{
    //release memories
    al_uninstall_keyboard();
    al_destroy_display(display);
    al_destroy_bitmap(background);
    al_destroy_font(font);
}
