// 1. Function that returns the square of a number

#include <stdio.h>

int square(int x) {
    return x * x;
}
int main() {
    int result = square(5);
    printf("Square of 5 is: %d", result);

    return 0;
}


// 2. return vs printf in function

#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    printf("Sum inside function = %d\n", sum);
    return sum;
}

int main() {
    int result = add(6, 6);
    printf("Sum in main = %d", result);
    
    return 0;
}




// 3.Function for prime number check and factorial of a number

#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    
    printf("Factorial of %d is %lld\n", num, factorial(num));

    return 0;
}




// 4. Swap two numbers using pass by reference in function

#include <stdio.h>

void swap(int *a, int *b) {
    int extra;
    extra = *a;
    *a = *b;
    *b = extra;
}

int main() {
    int a = 5;
    int b = 10;

    swap (&a, &b);
    printf("%d %d", a, b);

    return 0;
}

