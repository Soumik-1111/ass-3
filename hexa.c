#include<stdio.h>

int main(){
    int n,bin=0,rem1,rem2,i=1,m,x;
    char hexnum;

    printf("Enter any decimal number between 0 to 16\n");
    scanf("%d",&n);
    x=n;
    m=n;
    while (n!=0)
    {
        rem2=n%16;
        if(rem2<10){
            rem2=rem2+48;
        }else
        rem2=rem2+55;
        hexnum=rem2;
        n=n/16;
    }
    
    while (m!=0)
    {
        rem1=m%2;
        m=m/2;
        bin=bin+(rem1*i);
        i=i*10;
    }
    printf("The given decimal number %d in binary is : %d and in hex code is : %c",x,bin,hexnum);

    return 0;
    
}