#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N 1000

int main(){
    // let dy/dx = 2x + 5; at x = 0, y0 = 5
    // for x, 0 to 5
    int a = 0, b = 5;
    float y[N],x=0;
    y[0] = 5;
    float h = (float)(b-a)/N;
    printf("%f\n",h);
    for (int i = 0; i < N; i++)
    {
        y[i+1] = y[i] + (h*((2*x)+5));
        x = x+h;
    }

    printf("%f\n",y[N]);


}