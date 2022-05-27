#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5,sum=0;
float per;
char grade;
for(int i=1;i<=10;i++){
    printf("enter 5 subjects marks of student %d out of 100 \n", i);
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum= m1+m2+m3+m4+m5;
per= sum/5;
if(per>=90)
    grade='O';
else if(per>=80 && per<90)
    grade='A';
else if(per>=70 && per<80)
    grade='B';
else if(per>=60 && per<70)
    grade='C';
else if(per>=50 && per<60)
    grade='D';
else if(per>=35 && per<50)
    grade='E';
else
    grade='F';
printf("The percentage of student is %0.2f and grade is %c \n", per,grade);
}
getch();
}