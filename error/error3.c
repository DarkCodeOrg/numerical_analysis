#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265359

int main(){
    float j = 0;
    double k = 0;
    float a = 0;
    double b = 0;
    double exact = (PI * PI)/6;
   
    for (int i = 1; i <= 9999; i++){
        j += 1.0/(i*i);
        k += 1.0/(i*i);
    }
    float l =fabs(exact-j)/exact ;
    double m = fabs(exact-k)/exact ;
    for (int i = 9999; i >= 1; i--){
        a += 1.0/(i*i);
        b += 1.0/(i*i);
    }
    float c = fabs(exact-a)/exact ;
    double d = fabs(exact-b)/exact ;
printf("1 to 9999\n");  

    printf("the final value single precision = %.10f\n",j);
    printf("the single precision relative error is %.10f\n",l);
    printf("the final value double precision = %.20lf\n",k);
    printf("the double precision relative error is %.20lf\n",m);

printf("9999 to 1\n");

    printf("the final value single precision = %.10f\n",a);
    printf("the single precision relative error is %.10f\n",c);
    printf("the final value double precision = %.20lf\n",b);
    printf("the double precision relative error is %.20lf\n",d);

    return 0;
}