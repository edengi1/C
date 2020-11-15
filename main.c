#include <stdio.h>
#include "myMath.h"
int main(){
double x;
double res1, res2, res3;
printf ("plese insert a real number\n");
scanf("%lf",&x);
res1 = add(Exponent(x),Power(x,3)); 
res1= sub(res1,2); 
printf("The value of f(X) = e^x+x^3 -2 at the point %0.4lf is %0.4lf \n"  ,x, res1  );
res2= add(mul(3,x),mul(2,Power(x,2))); // 3x+2x^2
printf("The value of f(X) = 3x+2X^2 at the point %0.4lf is: %0.4lf \n"  ,x, res2  );
res3 = mul(4,Power(x,3));
res3=  div(res3,5);
res3= sub(res3,mul(2,x));// (4x^3)/5-2x
printf("The value of f(X) = (4x^3)/5-2x at the point %0.4lf  is: %0.4lf \n"  ,x, res3  );
}
