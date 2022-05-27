#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,i,r=1;
 printf("Enter a number:");
 scanf("%f",&a);
 printf("Enter the power:");
 scanf("%f",&b);
 for(i=1;i<=b;i++)
 {
  r*=a;
 }
 printf("Result:%f",r);
 getch();
}