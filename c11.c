#include <stdio.h>
int main()
{
    float comp_s,eng_s,maths_s,sum;
    FILE *fp;
    fp=fopen("c11'.txt","r");
    printf("\t\t\t成績報表\t\n\n");
    printf("|      計算機:      英語:      高數:      總分:\n");
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
