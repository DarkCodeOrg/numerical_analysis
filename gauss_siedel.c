#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TOL 0.000001
#define MAX 100


int main(){
    int n;
    printf("enter the n for nxn matrix : ");
    scanf("%d",&n);

    float a[n][n],b[n],x[n];
    int i=0,j=0,k=0;
    float sum = 0;

     // matrix input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {   
            if (j < n)
            {
                printf(" enter a[%d][%d] = ",i,j);
                scanf("%f",&a[i][j]);
            }else{
                printf("enter b[%d] = ",i);
                scanf("%f",&b[i]);
            }
        }
        
    }

    // initial guess 
    for (int i = 0; i < n; i++){
        x[i] = 0;
    }


    // gauss_seidel iterations
    while (k < MAX)
    {
        for ( i = 0; i < n; i++)
        {   
            sum = 0;
            x[i] = b[i]/a[i][i];
            for ( j = 0; j < n; j++)
            {
                if (i != j)
                {
                    sum += a[i][j]*x[j];
                }
                
            }

            x[i] = x[i] - (sum/a[i][i]);
            
        }

        printf("%d iteration : x1 = %f , x2 = %f , x3 = %f \n",k,x[0],x[1],x[2]);
        
        k++;
    }
    
    
    


    return 0;
}