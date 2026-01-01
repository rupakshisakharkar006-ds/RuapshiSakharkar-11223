#include <stdio.h>
int main() {
    int P, N;
    float D, total;

    scanf("%d %d %d", &P, &N, &D);

    float price = P * N;
    total = price - (price * D / 100);

    printf("*** DIWALI FIREWORKS ***\n");
    printf("Item Price:\t%d rupees\n", P);
    printf("Quantity:\t%d\n", N);
    printf("Discount:\t%.2f%%\n", D);
    printf("Total:\t%.2f rupees\n\a", total);

    return 0;

}


#include <stdio.h>
int main() {
    char ch;
    int days;
    float rate, fine;

    scanf("%c %d %f", &ch, &days, &rate);
    fine = days * rate;
    printf("Library Receipt\v");
    printf("Member Initial:%c\v", ch);
    printf("Days:%05d\v", days);
    printf("Fine:%.2f INR\n", fine);

    return 0;
}



#include <stdio.h>
int main() {
  printf("Welcome to  the Magicla Escape Show \n\n");
  printf("\\t -> This lines is tabbed!\t(Example)\n");
  printf("\\n -> This text appears on a new line.\nNext line here!\n");
  printf("\\\\ -> Prints a single backlash: \\\n");
  printf("\\\" -> Prints double quotes: \"Hello\"\n");
  printf("\\' -> Prints single quotes: 'C'\n");
  printf("\\a -> You might hear a beep sound! \a\n");
  printf("\\b -> Backspace in action: ABC\bD\n");
  printf("\\r -> Carriage Return test\rNow at start!\n");
  printf("\\f -> From feed moves to next page (not always visible)\f");
  printf("\\v -> Vertical tab below \n\vMagic Below!\n");
  printf("\\? -> Prints a question mark safely: \\?\n\n");
  printf("Thanku you for watching the Escape Show!\n");
  
  return 0;
}




#include <stdio.h>
int main() {
    float x;
    scanf("%f", &x);

    printf("Welcome to the Floating Fortune Teller\n\n");
    printf("%%f       -> %f\n", x);
    printf("%%.1f     -> %.1f\n", x);
    printf("%%.2f     -> %.2f\n", x);
    printf("%%.3f     -> %.3f\n", x);
    printf("%%6.2f    -> %6.2f\n", x);
    printf("%%8.3f    -> %8.3f\n", x);
    printf("%%10.4f   -> %10.4f\n", x);
    printf("%%e       -> %e\n", x);
    printf("%%E       -> %E\n", x);
    printf("%%g       -> %g\n", x);
    printf("%%G       -> %G\n", x);

    printf("\n Each format changes how the float is displaye! \n");

    return 0;
}



#include <stdio.h>      // Preprocessor directive - includes standard I/O library
// main() - starting point of program execution
int main() {
    printf("Hello, World!\n");          // printf() -  used to display output on screen

    return 0;              // return 0 - - indicates successful program termination
}

