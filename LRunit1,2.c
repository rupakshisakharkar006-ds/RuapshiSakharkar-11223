// 1. Write first C program and print name / age using printf statement
#include <stdio.h>
int main() {
    printf("hello world");
    printf("name : Ansh;\n");
    printf("age : 18;\n");
    return 0;
}


#include <stdio.h>   (Header files)
int main() {         (main function)
    printf("Hi");   (Body)

    return 0;        (return statement)
}





// 2. Sum & Largest of two numbers
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers:");
    
    scanf("%d %d", &a, &b);
    int sum = a+b;
    
     printf("Sum = %d\n", sum);

    if (a > b) 
        printf("largest = %d\n",a);
      else 
        printf("largest = %d\n",b);
    
        return 0;
}






// 3. Declare variables of int, float, char, double, scanf / printf with format specifiers, swap number
#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;
    
    printf("Enter an integer, float, character, and double:");
    scanf("%d %f %c %lf", &a, &b, &c, &d);
    
    printf("\nYou entered:\n");
    printf("Integer: %d\n",a);
    printf("Float: %.2f\n",b);
    printf("Character: %c\n",c);
    printf("Double: %.2lf\n",d);
    
    return 0;
}

// swap number
#include <stdio.h>
int main() {
    int a=5;
    int b=10;

    int extra;

    printf("Before swap- %d %d\n", a,b);

    extra =a;
    a=b;
    b=extra;

    printf("After swap- %d %d %d\n", a,b);

    return 0;
}






// 4. Odd / Even check if-else, max of three number( nested if), ternary operator
#include <stdio.h>
int main() {
    int num=10;
    scanf("%d",&num);

    if(num % 2==0) {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
}


// max of three numbers
#include <stdio.h>
int main() {
    int a=23;
    int b=24425;
    int c=123325;
    int maximum;
    if( a>b) {
        if (a>c) {
            maximum=a;
        }
        else {
            maximum=c;
        }
    }
    else {
        if (b>c) {
            maximum=b;
        }
        else {
            maximum=c;
        }
    }
    printf("maximum is %d",maximum);

    return 0;
}


// ternary operator
#include <stdio.h>
int main() {
    int num=10;
    (num %2==0)? printf("even"): printf("odd");
}






