#include "myMath.h"
#define exp 2.718281828
double Power (double x, int y){
    double t=1;
    if (y>0){
    while (y>0){
        t=t*x;
        y=y-1;
        }
    }
    if (y<0){ 
        y=y*-1;
        while (y>0){
            t=t*(1/x);
            y=y-1;
        } 
    }
    return t;
}

double Exponent (int x){
    return Power(exp,x);
    
}
