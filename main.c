#include <stdio.h>
#include "myMath.h"

int main(){
    double x;
    printf("Pleas insert a real number: \n");
    scanf("%lf", &x);
    double y = sub(add(Exp((int)x),Pow(x,3)),2);
    double f = add(mul(3,x),mul(2, Pow(x,2)));
    double g = sub(div(mul(4,Pow(x,3)),5),mul(2,x)); 
    printf("The value of F(x) = e^x+x^3-2 at the point %lf is: %0.4lf \n", x,y);
    printf("The value of F(x) = 3x+2x^2 at the point %lf is: %0.4lf \n", x,f);
    printf("The value of F(x) = ((4x^3)/5)-2x at the point %lf is: %0.4lf \n", x,g);

return 0;
}
