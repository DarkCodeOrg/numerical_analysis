#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
    float j = 1.000;
    double k = 1.0000;
    for (int i = 1; i < 100000; i++){
        j += 1.00;
        k += 1.00;
    }
    float l = (100000-j)/100000 ;
    double m = (100000-k)/100000 ;
    printf("the final value single precision = %.10f\n",j);
    printf("the single precision relative error is %.10f\n",l);
    printf("the final value double precision = %.20lf\n",k);
    printf("the double precision relative error is %.20lf\n",m);

    return 0;
}