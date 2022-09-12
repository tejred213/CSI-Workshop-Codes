#include <stdio.h>
#include <stdlib.h>
int main()
{
    // integer input 
    int testinteger;
    printf("Enter an integer :");
    scanf("%d", &testinteger);
    printf("Number = %d\n\n", testinteger);

    //float and double input
    float testfloat;
    double testdouble; 
    printf("enter a float :");
    scanf("%f",&testfloat);
    printf("Number = %f\n\n",testfloat);
    printf("enter a double :");
    scanf("%lf",&testdouble);
    printf("Number = %lf\n\n",testdouble);

    fflush(stdin);
    //charcter input
    char chr;
    printf("Enter a character:");
    scanf("%c",&chr);
    printf("You entered a character= %c\n\n",chr);

    #include <stdio.h>
    /* The code below will print the words Hello World!
    to the screen and its amazing*/
    printf("hello world \n");

    //this is bye comment
    printf("bye world");
    return 0;
}