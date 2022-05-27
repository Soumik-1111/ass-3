
#include <stdio.h>  
#include <conio.h>  
// void main()  
// {   
//     long int binary_num, decimal_num = 0, hexadecimalval = 0, base = 1, remainder;  
//     printf (" Enter a binary number with the combination of 0s and 1s \n");  
//     scanf (" %ld", &binary_num);    
//     while ( binary_num > 0)  
//     {  
//         remainder = binary_num % 10; 
//         decimal_num = decimal_num + remainder * base;  
//         binary_num = binary_num/ 10; 
//         base = base * 2;  
//     }
//     while ( binary_num != 0)
//     {
//         remainder = binary_num % 10;
//         hexadecimalval = hexadecimalval + remainder * base;
//         base = base * 2;
//        binary_num = binary_num / 10;
//     }

//     printf ( " The binary number is %ld \t", binary_num);
//     printf (" \n The decimal number is %ld \t", decimal_num);
//     printf("\n Equivalent hexadecimal value: %lX", hexadecimalval);
//     getch();  
// }  

int main()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return 0;
}