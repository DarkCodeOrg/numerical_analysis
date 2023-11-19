#include<stdio.h>
#include<math.h>
#include<stdlib.h>


float fn(float );
float newtonraphson(double );


int main(){
	// f(x) = x^3 + (4*x^2) - 10
    double x1,x2,xm;
    int count = 1;
    

    printf("enter x1 and x2 = \n");
    scanf("%lf %lf",&x1,&x2);
    if (fn(x1)*fn(x2) > 0)
    {
        printf("please enter different x1 and x2 = \n");
        scanf("%lf %lf",&x1,&x2);
    }else{
        xm = (x1 + x2)/2 ;
    }


    while (fabs(x1 - x2)>0.0000001)
    {
        count++;
      if (fn(x1)*fn(xm)< 0){
            x2 = xm ;
            xm = (x1 + x2)/2 ;
            
        }else{
            x1 = xm ;
            xm = (x1 + x2)/2 ;
        }  

        printf("this is %d iteration and values are x1 xm x2 = %lf %lf %lf \n",count,x1,xm,x2);
    }
    
    printf("the root is %.20f \n",xm);
    printf("%.20f \n",fn(xm));

    printf("the value using newton raphson is %.20f \n",newtonraphson(1.00));

    return 0;
}


float fn(float x){
    return (x*x*x) + (4*x*x) - 10;
}

float newtonraphson(double a){

    double y,y1,h,q,x;
    int count;
    x = a;

    y = (x*x*x) + 4*x*x - 10;
	y1 = 3*x*x + 8*x;
	h = -y/y1;
	while(fabs(h)>0.000000001)
	{	
		// q = x;
		y = (x*x*x) + (4*x*x) - 10;
		y1 = (3*x*x) + (8*x);
		h = (double)-y/y1;
		x = x + h ;

		count++;
		
		printf("%d count \n",count);
		// printf("relative error is %.20f\n",fabs((x-q)/q));
	
	}

    return x;
}
