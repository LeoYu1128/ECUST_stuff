#include<stdio.h>
#define N 5
int main()
{
    int tempn;
    char name[5]={'A','B','C','D','E'};
    char no[5]={'1','2','3','4','5'};
    int score[5];
    int i,j;
    printf("Input five scores:\n");
    scanf("%f",&score[i]);
    for(i=0;i<N-1;i++)
        for(j=0;j<N-1-i;j++)
        if(score[j]>score[j+1])
    {
        int temps=score[j];
        score[j]=score[j+1];
        score[j+1]=temps;
        strcpy(tempn,no[j]);
        strcpy(no[j],no[j+1]);
        strcpy(no[j+1],tempn);
        strcpy(tempn,name[j]);
        strcpy(name[j],name[j+1]);
        strcpy(name[j+1],tempn);
    }
    for(i=0;i<N;i++)
    printf("%f",score[i]);
    printf("%d",name[i]);
    printf("%d",no[i]);
}
