// 3. sum of individual digit of a number.

#include<stdio.h>
int main()
{
     // int num, rem, sum=0;
     // printf("Enter your number\n");
     // scanf("%d", &num);
     // while(num>0)
     // {
     //      rem = num%10;
     //      sum = sum+rem;
     //      num = num/10;
     // }
     // printf(" %d", sum);
     
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
for(int i=0;i<=n;i++)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   

     
