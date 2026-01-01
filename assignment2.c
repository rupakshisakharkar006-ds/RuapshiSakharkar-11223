#include <stdio.h>
int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    if(B >=3 * A)
      printf("Rain");
    else
       printf("Dry");

    return 0;
}




#include <stdio.h>
int main() {
    int X;
    scanf("%d", &X);

    int third_set = X + 10 +10; // or X +20
    printf("%d", third_set);

    return 0;
}




#include <stdio.h>
int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int amount_to_pay = A - B;

    if(amount_to_pay < 0)
       amount_to_pay =0;

    printf("%d\n", amount_to_pay);

    return 0;
}


#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int total_leaves;
    if(N==1)
      total_leaves = 4;
    else
       total_leaves = 4 + (N - 1) + 3;
    printf("%d", total_leaves);

    return 0;
}



#include <stdio.h>
int main() {
    int L;
    scanf("%d", &L);

    switch (L) {
        case 1:
             printf("5");
             break
        case 2:
            printf("10");
            break;
        case 3:
            printf("15");
            break;
        case 4:
            printf("20");
            break;
        default:
             printf("Invalid Level!");
    }
    return 0;
}
