#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int n;
    
    printf("enter the no of data entries n = ");
    scanf("%d",&n);
    float b[n][n],x[n],fx[n];

    for (int i = 0; i < n; i++)
    {
        b[i][i] = 0;
    }
    // input 
    


    for (int i = 0; i < n; i++)
    {
        b[0][i] = fx[i];
    }
    
    
    for (int i = 1; i < n; i++)
    {
       for (int j = 0; j < n - i; j++)
       {
            b[i][j] = (b[i+j][j-1] - b[i][j-1])/(x[i+j] - x[i]);
       } 
    }
    


    


    return 0;
}