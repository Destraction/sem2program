#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float vomega, va;
    float mu, omegae, i, rp, ra, ra1;
    ra1 = 45000;
    printf("%f\n", ra1);
    ra = 10; 
    mu = 398600.4;
    printf("%f\n", mu);
    omegae =  7.2921159 * pow(10,-5);
    printf("%f\n", omegae);
    i=63.4;
    i=(i*3.14)/180;
    printf("%f\n", i);
    rp=(pow(omegae,2) * pow(ra1,4) *  pow(cos(i),2))/((2 * mu) - pow(omegae,2) * pow(ra1,3) * pow(cos(i),2));
    printf("%f\n",rp);
    printf("%f\n", cos(i));
    FILE* file = fopen("hometask.txt", "wt");
    ra=10;
    while(ra<=60000){
        va=pow((2*mu*rp)/(ra*(ra+rp)),0.5);
        vomega = omegae*ra*cos(i);
        ra+=10;
        if(va<=vomega){
            ra = 60001;
            break;
        }
        fprintf(file, "%f\t", va);
        fprintf(file, "%f\t", vomega);
    }
    fclose(file);
    return 0;

}
