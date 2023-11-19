#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
    float j = .00001;
    double k = .00001;
    for (int i = 1; i < 100000; i++){
        j += 0.00001;
        k += 0.00001;
    }
    float l = (1-j)/1 ;
    double m = (1-k)/1 ;
    printf("the final value single precision = %.10f\n",j);
    printf("the single precision relative error is %.10f\n",l);
    printf("the final value double precision = %.20lf\n",k);
    printf("the double precision relative error is %.20lf\n",m);

    return 0;
}