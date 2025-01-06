#include "header.h"

int game_leave( char name[],int* point_int, ALLEGRO_DISPLAY* display, ALLEGRO_BITMAP* background, ALLEGRO_FONT *font, ALLEGRO_MOUSE_STATE Mouse_state)
{
    int finish = 0;
    char name_title[10] = "NAME:";
    char total_score[15]="TOTAL SCORE:";
    char point_char[10];
    char ask[35]="DO YOU WANT TO SAVE THIS RECORD?";
    char button_yes[5] = "YES";
    char button_no[5] = "NO";
    itoa(*point_int, point_char, 10);

    al_draw_bitmap(background, 0, 0, 0);

    al_draw_text(font, al_map_rgb(255,255,255), display_w/2-100, 150, ALLEGRO_ALIGN_CENTRE, name_title);
    al_draw_text(font, al_map_rgb(255,255,255), display_w/2+50, 150, ALLEGRO_ALIGN_CENTRE, name);
    al_draw_text(font, al_map_rgb(255,255,255), display_w/2-100, 220, ALLEGRO_ALIGN_CENTRE, total_score);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2-100, 300, ALLEGRO_ALIGN_CENTRE, point_char);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2, 325, ALLEGRO_ALIGN_CENTRE, ask);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2-100, 400, ALLEGRO_ALIGN_CENTRE, button_yes);
    al_draw_text(font, al_map_rgb(204,51,0), display_w/2+100, 400, ALLEGRO_ALIGN_CENTRE, button_no);

    al_flip_display();



    while(finish == 0 )
    {
        al_get_mouse_state(&Mouse_state);

        if (Mouse_state.buttons & 1||al_mouse_button_down(&Mouse_state,  1))
        {
            if ( Mouse_state.x > display_w/2-125 && Mouse_state.x < display_w/2-85 && Mouse_state.y > 400 && Mouse_state.y <450 )
            {
                printf("Save the record!\n");
                finish = 1;
            }
            else if ( Mouse_state.x > display_w/2+70 && Mouse_state.x < display_w/2+130 && Mouse_state.y > 400 && Mouse_state.y <450 )
            {
                printf("Exit!\n");
                finish = 2;
            }
        }
        al_flip_display();
        al_rest(0.1);
    }
    if(finish==1)
        return 0;
    else
        return 1;
}
