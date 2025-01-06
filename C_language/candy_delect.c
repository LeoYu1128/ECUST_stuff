#include "header.h"

void delect(candy array[][COL],ALLEGRO_BITMAP* candy_red, ALLEGRO_BITMAP* candy_orange, ALLEGRO_BITMAP* candy_green, ALLEGRO_BITMAP* candy_blue, ALLEGRO_BITMAP* candy_yellow, ALLEGRO_BITMAP* candy_purple, ALLEGRO_BITMAP* background )
{
    int  i = 0, j = 0;

    candy_red = al_load_bitmap("./red.png");
    candy_orange = al_load_bitmap("./orange.png");
    candy_green = al_load_bitmap("./green.png");
    candy_blue = al_load_bitmap("./blue.png");
    candy_yellow = al_load_bitmap("./yellow.png");
    candy_purple = al_load_bitmap("./purple.png");
    background = al_load_bitmap("./background_game.jpg");

    al_draw_bitmap(background, 0, 0, 0);

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; )
        {
            if(array.cleanType!=99)
            {
                switch(candy.color)
                {
                case 0 :
                    al_draw_bitmap(candy_red, (display_w/2-275)+50*(j+1), (display_h/2-275)+50*(i+1), 0);
                    j++;
                    break;
                case 1 :
                    al_draw_bitmap(candy_orange, (display_w/2-275)+50*(j+1), (display_h/2-275)+50*(i+1), 0);
                    j++;
                    break;
                case 2 :
                    al_draw_bitmap(candy_green, (display_w/2-275)+50*(j+1), (display_h/2-275)+50*(i+1), 0);
                    j++;
                    break;
                case 3 :
                    al_draw_bitmap(candy_blue, (display_w/2-275)+50*(j+1), (display_h/2-275)+50*(i+1), 0);
                    j++;
                    break;
                case 4 :
                    al_draw_bitmap(candy_yellow, (display_w/2-275)+50*(j+1), (display_h/2-275)+50*(i+1), 0);
                    j++;
                    break;
                case 5 :
                    al_draw_bitmap(candy_purple, (display_w/2-275)+50*(j+1), (display_h/2-275)+50*(i+1), 0);
                    j++
                    break;
                }
            }
            else
                j++;
        }
