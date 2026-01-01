// 1. print the multiplication table of n from 1 to 10

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}




// 2. To count how many divisor n has

#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    printf("Total divisors = %d\n", count);

    return 0;
}




// 3. Calculate the sum of all positive divisors of n

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            sum+= i;
        }
    }
    printf("Sum of Divisor - %d\n", sum);

    return 0;
}