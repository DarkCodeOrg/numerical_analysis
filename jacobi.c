#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TOL 0.000001
#define MAX 1000


int main(){
    int n;
    printf("enter the n for nxn matrix : ");
    scanf("%d",&n);

    float a[n][n],b[n],temp;
    double x[n],xnew[n],sum=0,err=0;
    
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

//pivoting
for (int i = 0; i < n; i++){
        for (int j = 1+i; j < n; j++){
            if (a[j][0] > a[i][0]){
                for (int k = 0; k < n+1; k++){
                    if (k < n)
                    {
                        temp = a[i][k];
                        a[i][k] = a[j][k];
                        a[j][k] = temp;
                    }else{   
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                    
                }
            }   
        }
    }
    
// initial guess 
for (int i = 0; i < n; i++){
    x[i] = 0;
}

// jacobi iteration 
for (int k = 0; k < MAX; k++){

    err = 0;
    
    for (int i = 0; i < n; i++){

        sum = 0;

        for (int j = 0; j < n; j++){
            if (j != i){
                sum += a[i][j]*x[j];
            }
        }

        xnew[i] = (b[i] - sum)/a[i][i] ;
        printf("it no = %d , x[%d] = %f\t",k,i,xnew[i]); // debugging purpose
    }
    
    printf("\n"); // formatting , debug

    for (int l = 0; l < n; l++){
        err += fabs(xnew[l] - x[l]);
    }

    if (err < TOL){
        break;
    }

    for (int m = 0; m < n; m++){
        x[m] = xnew[m];
    }
 
}

// solution 
    printf("hence the solutions are : ");
    for (int i = 0; i < n; i++){
        printf("%.10f \t",x[i]);
    }
    printf("\n");


    return 0;
}


