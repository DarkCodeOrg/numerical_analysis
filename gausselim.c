#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int n;
    printf("enter the n for nxn matrix : ");
    scanf("%d",&n);

    float a[n][n+1],temp=0;
    double x[n],c,d=0;
    
    // matrix input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf(" enter a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
        
    }
    
    // pivoting

    for (int i = 0; i < n; i++){
        for (int j = 1+i; j < n; j++){
            if (a[j][0] > a[i][0]){
                for (int k = 0; k < n+1; k++){
                    temp = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = temp;
                }
            }   
        }
    }

    // triangularisation 
    for (int i = 0; i <= n-2; i++)
    {
        for (int k = 1+i; k <= n-1; k++)
        {
            c = a[k][i]/a[i][i];
            for (int j = 0; j <= n; j++)
            {
                a[k][j] = a[k][j] - c*a[i][j];
            }   
        }
    }
    // testing printing

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf("%f \t",a[i][j]);
        }
        printf("\n");
    }
    
    // solution back calculation
    
    x[n-1] = a[n-1][n]/a[n-1][n-1] ;

    for (int i = n-2; i >= 0; i--)
    {
        d = 0;
        for (int j = i+1; j <= n-1; j++)
        {
            d += a[i][j]*x[j];
        }
        x[i] = (a[i][n] - d)/a[i][i] ;
    
    }
    
    printf("hence the solutions are : ");
    for (int i = 0; i < n; i++){
        printf("%.10f \t",x[i]);
    }
    printf("\n");



    return 0;
}


