// write a program in c language 

//For each integer  in the interval  (given as input) :
// If 1<=n<=9 then print the English representation of it in lowercase. That is "one" for 1 , "two" for 2, and so on.
// Else if  n>9 and it is an even number, then print "even".
// Else if  n>9 and it is an odd number, then print "odd". 

#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    for (int n = start; n <= end; n++) {
        if (1 <= n && n <= 9) {
            char* numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("%s\n", numbers[n-1]);
        } else if (n > 9 && n % 2 == 0) {
            printf("even\n");
        } else if (n > 9 && n % 2 != 0) {
            printf("odd\n");
        }
    }
    return 0;
}
