#include<stdio.h>
int main () 
{
int num, reminder;
printf("Enter the Number :");
scanf("%d", &num);
int smallest=num%10; 
while (num > 0)
    {
reminder=num%10;
if(smallest>remider)
 {
       smallest=reminder;
 }
num=num/10;
    }
printf("The Smallest Digit is :%d \n", smallest); 
return 0;
}
