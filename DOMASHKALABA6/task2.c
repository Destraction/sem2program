#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char * argv [])
{
    const short N = 4;
    int mas[N][N];
    int i;
    int p;
    int pp;
    int j;
    int z;
    scanf("%d", &z);
    

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            mas[i][j] = rand()%100;
            if (z==mas[i][j]){
                printf("%d\n",i);
                printf("%d\n",j);
            }
        }
    }
 
    //---------------------------------------
 
    for(p = 0; p < N; p++)
    {
        for(pp = 0; pp < N; pp++)
        {
            printf("%d\t", mas[p][pp]);
        }
 
        printf("\n");
    }
    return 0;
    }
