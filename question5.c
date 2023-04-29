// Input Format:
// The first line contains an integer, n.
// The next line contains n space-separated integers.

// Print the sum of the integers in the array.

#include<stdio.h>
 int main()
 {
     int arr[1000], num, i, sum = 0;
     scanf("%d", &num);
        // printf("%d\n", num);
     for(i=0;i<num;i++)
     {
          scanf("%d", &arr[i]);
     }
     for(i=0;i<num;i++)
     {
          // printf("%d ", sum+arr[i]);
          sum = sum+arr[i];
     }
     printf("%d", sum);
    return 0;
 }