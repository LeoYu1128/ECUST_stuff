#include "header.h"

void player_info( char name[], int* candy_type_number_int, ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font, ALLEGRO_MOUSE_STATE Mouse_state)
{
    int finish = 0;
    char name_title[10] = "NAME:";
    char type_tilte[20] = "KINDS OF CANDY:";
    char candy_type_number_char[5];
    char button_confirm[10] = "CONFIRM";
    char button_exit[5] = "EXIT";

    al_draw_bitmap(background, 0, 0, 0);

    al_draw_text(font, al_map_rgb(255,255,255), display_w/2-100, 150, ALLEGRO_ALIGN_CENTRE, name_title);
    al_draw_text(font, al_map_rgb(255,255,255), display_w/2-100, 250, ALLEGRO_ALIGN_CENTRE, type_tilte);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2-100, 400, ALLEGRO_ALIGN_CENTRE, button_confirm);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2+100, 400, ALLEGRO_ALIGN_CENTRE, button_exit);

    al_flip_display();

    printf("Please enter your name :");
    scanf("%s", name);

    printf("How many kinds of candy(2~6) :");
    scanf("%i", candy_type_number_int);

    itoa(*candy_type_number_int, candy_type_number_char, 10);

    al_draw_text(font, al_map_rgb(255,255,255), display_w/2-100, 150, ALLEGRO_ALIGN_CENTRE, name_title);
    al_draw_text(font, al_map_rgb(255,255,255), display_w/2+50, 150, ALLEGRO_ALIGN_CENTRE, name);
    al_draw_text(font, al_map_rgb(255,255,255), display_w/2-100, 250, ALLEGRO_ALIGN_CENTRE, type_tilte);
    al_draw_text(font, al_map_rgb(255,255,255), display_w/2+100, 250, ALLEGRO_ALIGN_CENTRE, candy_type_number_char);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2-100, 400, ALLEGRO_ALIGN_CENTRE, button_confirm);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2+100, 400, ALLEGRO_ALIGN_CENTRE, button_exit);

    //al_flip_display();

    while(finish != 1 )
    {
        al_get_mouse_state(&Mouse_state);

        if (Mouse_state.buttons & 1||al_mouse_button_down(&Mouse_state,  1))
        {
            if ( Mouse_state.x > display_w/2-155 && Mouse_state.x < display_w/2-50 && Mouse_state.y > 400 && Mouse_state.y <450 )
            {
              printf("Start game!\n");
              finish = 1;
            }
            else if ( Mouse_state.x > display_w/2+70 && Mouse_state.x < display_w/2+120 && Mouse_state.y > 400 && Mouse_state.y <450 )
            {
              printf("Exit!\n");
              finish = 1;
            }
        }
        al_flip_display();
        al_rest(0.1);
    }
}
