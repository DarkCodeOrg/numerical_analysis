#include<stdio.h>
#include<math.h>
#include<stdlib.h>


// function f(x) = x^3 - a 
int abst(double );
int main(){
	double x,h,y,y1,q;
	int a,count;
	printf("Enter a value x^3 - a , = ");
	scanf("%d",&a);
	printf("enter nearest guess = ");
	scanf("%lf",&x);
	double p = pow(a,1.0/3.0);
	
	
	y = (x*x*x) - a;
	y1 = 3*x*x ;
	h = -y/y1;
	while(fabs(h)>0.000000001)
	{	
		q = x;
		y = (x*x*x) - a;
		y1 = 3*x*x ;
		h = (double)-y/y1;
		x = x + h ;

		count++;
		
		printf("%d count : absolute error is %.20f\t",count,fabs(x-q));
		printf("relative error is %.20f\n",fabs((x-q)/q));
	
	}
	
	printf("the final answer is %.20lf\n",x);
	printf("the no of count is %d\n",count);
	printf("actual value is %.20f\n",p);
	printf("final absolute error = %.20f\n",fabs(x-p));
	printf("the final relative error = %.20f\n",fabs((x - p)/(p)));
	return 0;
}

int abst(double u){
	if(u < 0){
		return -u;
	}else{
		return u;
	}
}
