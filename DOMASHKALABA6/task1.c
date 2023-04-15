#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
    char arr[]={'H','e','l','l','l','l','o'};
    int i=1;
    int k=1;
    int kmax=1;
    char d;
    printf("%c", "Введите символ, повторения которого вы хотите найти \n");
    scanf("%c",&d);
    for (;i<9;i++){
        if (arr[i-1]==d & arr[i]=='l'){
            k=k+1;
            if (k>=kmax){
                kmax=k;

            }   
            } else{
                k=1;
            }

        }
    printf("%d", kmax);
    }
