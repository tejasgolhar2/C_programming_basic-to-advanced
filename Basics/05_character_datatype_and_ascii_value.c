#include<stdio.h>
#include<ncurses.h>
#include<limits.h>

int main()
{
    char a;
    //unsigned char f;
    char b = CHAR_MIN;
    char c = CHAR_MAX;
    unsigned char d = 0;  // minimum unsigned value is Zero
    unsigned char e = UCHAR_MAX;

    printf("\nEnter a signed character below: ");
    scanf("%c", &a);
    //printf("Enter any unsigned character below: ");
    //scanf("%c", &f);
    printf("\nThe ASCII value of character you have entered is %d\n", a);
    // printf("The ASCII value of character you have entered is %d\n", f);
    printf("The minimum value for a variable of type 'char' is %d\n", b);
    printf("The maximum value for a variable of type 'char' is %d\n", c);
    printf("The minimum value for a variable of type 'unsigned char' is %d\n", d);
    printf("The maximum value for a variable of type 'unsigned char' is %d\n", e);
    return 0;
}