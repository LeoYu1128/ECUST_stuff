#include <stdio.h>
int main()
{
    float comp_s,eng_s,maths_s,sum;
    FILE *fp;
    fp=fopen("c11'.txt","r");
    printf("\t\t\t���Z����\t\n\n");
    printf("|      �p���:      �^�y:      ����:      �`��:\n");
    printf("--------------------------------------------------\n");
    while(fscanf(fp,"%f,%f,%f",&comp_s,&eng_s,&maths_s)!=-1)
    {
        sum=comp_s+eng_s+maths_s;
        printf("|%12.1f:%12.1f:%12.1f:%12.1f\n",comp_s,eng_s,maths_s,sum);
        printf("   ---------------------------------------------\n");
    }
    fclose(fp);
    return 0;
}
