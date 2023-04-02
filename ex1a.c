#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
int Bissectrissa(double, double);
int Vertical(double, double);
int Horizontal(double, double);
int main () {
    double x;
    double y;
    //Рисунок А
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    printf( "%d", Bissectrissa(x,y) || Vertical(x,y) && Horizontal(x,y));
    return 0;
}

int Bissectrissa(double x, double y) {
    int res = -1;
    res=(y<=-x);
    return res;
}
int Vertical(double x, double y) {
    int res = -1;
    res = (x>3);
    return res;
}
int Horisontal( double x, double y) {
     int res = -1;
     res = y>3;
    return res;
}
/*
на вход (double x, double y)
на выход int res;
3 функции
Bissectrissa(double x, double y)
Vertical(double x, double y)
Horisontal( double x, double y)*/