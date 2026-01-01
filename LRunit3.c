// 1.print number 1 -10 using loop
#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++){
        printf("%d\n",i);
    }
    return 0;
}


// 2.Sum of n Natural number

#include <stdio.h>

int main(){
int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}   


// 3.Break and Continue in loops

#include <stdio.h>

int main(){
    for(int i = 1; i <= 5; i++){
        if(i == 3)
         continue;
         
        printf("%d ", i);
    }

    return 0;
}


// 4. 1 star and 1 number pattern

#include <stdio.h>

int main(){
    int i, j;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= 4; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main(){
    int i, j;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}


