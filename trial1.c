#include<stdio.h>
#include<math.h>
// function f(x) = x^3 - a 

int main(){
	double x,h,y,y1;
	int a,count;
	printf("Enter a value x^3 - a , = ");
	scanf("%d",&a);
	printf("enter nearest guess = ");
	scanf("%lf",&x);
	
	y = (x*x*x) - a;
	y1 = 3*x*x ;
	h = -y/y1;
	while(h>0.00000001 || h < -0.00000001)
	{
		y = (x*x*x) - a;
		y1 = 3*x*x ;
		h = (double)-y/y1;
		x = x + h ;
		count++;
		// printf("%f\n",x);
	
	}
	printf("the final answer is %.10lf\n",x);
	printf("the no of count is %d\n",count);
	
	return 0;
}
