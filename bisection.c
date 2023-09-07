#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    // change your function y accordingly and its first derivative also 
    // f(x) = y = x^3 - 12

double y(double );

int main(){
    
    double x1,x2,xm;
 
    do
    {
        printf("enter two values containing the solution : ");
        scanf("%lf %lf",&x1,&x2);
    } while (y(x1)*y(x2)>0);
    
    xm = (x1+x2)/2.00 ;

    while (fabs(x2-x1)>0.000000001)
    {
        if (y(x1)*y(xm)>0){
            x1 = xm;
            xm = (x1+x2)/2.00;
        }else if (y(x2)*y(xm)>0){
            x2 = xm ;
            xm = (x1+x2)/2.00;
        }
        // for visualising the algo 
        printf("x1 = %.16f xm = %.16f x2 = %.16f \n",x1,xm,x2);


    }

    printf("the root of the equation between the specified domain is = %.16f \n",xm);
    printf("f(x) at that root = %.16f \n",y(xm));

    return 0;
}


double y(double a){
    double x = a;
    return x*x*x - 12;
}

