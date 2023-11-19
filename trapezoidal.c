#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 1000

double f(double );
int main(){
    double sum,x[N],h,I;
    printf("enter the domain : \n");
    scanf("%f %f",&x[0],&x[N-1]);

    h = (x[N-1] - x[0])/N;
    printf("%f \n",h);  // debug 
    printf("%f \n",f(x[N-1]));  // debug 
    printf("%f \n",f(x[0]));  // debug 
    // h = 0.001;
    sum = 0;

    
    for (int i = 1; i <= N-1; i++)
    {
        sum += f(x[0]+(i*h));
    }
    printf("%f \n",sum);  // debug 
    I = (f(x[0])+f(x[N-1])+(2*sum))*h*(0.5);

    printf("This is the integral : %f\n",I);

    

    return 0;
}

double f(double x){

    return sin(x);
    //return sin(x);
}