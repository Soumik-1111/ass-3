// Program to print the sum of the series 1+2*1+3*2+---n terms.
/*
#include<stdio.h>
int main()
{
	int s=1;
	int n,i;
	printf("\n Enter the number of terms \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=s+(i+1)*i;
	}
	printf("\n the sum of the series is=%d \n",s);
	return 0;
}*/
// program to print the sum of the pattern 1+2^2/2+3^3/3+--- up to n terms.

/*#include<stdio.h>
#include<math.h>
int main()
{
	int s=0;
	int i,n;
	printf("\n Enter the number of terms \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+pow(i,i)/i;
	}
	printf("\n The sum of the series is=%d \n",s);
	return 0;
}*/
// Program to print the sum of the series 1-1/3+1/5-1/7---n terms.
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float s=0;
	printf("\n Enter the number of terms \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=s+pow(-1,i)*(1)/(2*i+1);	
	}
	printf("\n The sum of the series is=%f ",s);
	return 0;
}
*/

// Program to calculate the sum of the series x-x^3/3!+x^5/5!--- n terms.
// #include<stdio.h>
// #include<math.h>
// int fact(int);

// int fact(int a)
// {
//    int j;
//    int f=1;
//    for(j=1;j<=a;j++)
//    {
//    	f=f*j;
//    }
//    return(f);	
// }

// int main()
// {
// 	float x,s=0;
// 	int n,i;
// 	printf("\n Enter the number of terms \n");
// 	scanf("%d",&n);
	
// 	printf("\n Enter the value of x(in degrees ) the series x-x^3/3!+x^5/5!-- nterms \n ");
// 	scanf("%f",&x);
// 	x=(3.1412*x)/(180);
// 	printf("%f",x);
// 	for(i=0;i<n;i++)
// 	{
// 		s=s+pow(-1,i)*(pow(x,2*i+1))/(fact(2*i+1));
// 	}
// 	printf("\n The sum of the series=%f",s);
// 	return 0;
	
// }

//To display the sine series 1-x3/3! + x5/5! – x7/7! + …………………………. xn/n!
#include <stdio.h>
int main( )
{
int i, n;
float x, sum, t;
printf(" Enter the value for x : \n");
scanf("%f",&x);
printf(" Enter the value for n : \n");
scanf("%d",&n);
x=x*3.14159/180;
t=x;
sum=x;
/* Loop to calculate the value of Sine */
for(i=1;i<=n;i++)
{
t=(t*(-1)*x*x)/(2*i*(2*i+1));
sum=sum+t;
}
printf(" The value is %.4f",sum);
return 0;
}