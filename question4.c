#include<stdio.h>

int main()
{
     int row, col, num;
     printf("Enter number from to be print: ");
     scanf("%d", &num);
     printf("Enter your row no: \n");
     scanf("%d", &row);
     printf("Enter your coloumn no: \n");
     scanf("%d", &col);
     
     for(int i=0;i<row;i++)
     {
          printf("%d ",num);
          for(int j=0;j<=i;j++)
          {
               printf("%d ", num);
               
          }
          printf("\n");
     }
     

}