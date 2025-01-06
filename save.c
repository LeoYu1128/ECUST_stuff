#include "header.h"

void save( int candyType, char *fileName, char name[], int score )
{
    FILE* fptr;
    time_t current;
    time(&current);

    fptr = fopen(fileName,"a");

    if(fptr!=NULL)
    {
        fprintf(fptr, "Name : %s , ", name);
        fprintf(fptr, "%i kinds of candy , ", candyType);
        fprintf(fptr, "score : %i , ", score);
        fprintf(fptr, "time : %s", ctime(&current));

        fclose(fptr);
        printf("Saved successfully\n");
    }
    else
        printf("Failed to open save file!\n");

}

