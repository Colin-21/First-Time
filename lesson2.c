#include <stdio.h>
#include <stdlib.h>

int lesson2()
{
    //data types
    int d = 1234;
    double a = 1.234;  //use this
    float b = 1.234;
    char c = 'd';
    char s[] = "String";  // psudo string
    bool e = true; // true of flse

    //printf
    printf("Text"); // simple print text
    printf("Text\"and more text"); //  add \ before quote to remove effect of quote
    printf("%d", d); // %d add integer in its place, var or not
    printf("%d", 500); // %d add integer in its place, var or num
    printf("%s", s); // %s add str in its place, var or ""
    printf("%s", "works"); // %s add str in its place, var or ""
    printf("%c", c); // %c add char in its place, var or ''
    printf("%c", 'w'); // %c add char in its place, var or ''
    printf("This is an int: %d \n this is a Str: %s \n This is a Char")
}

