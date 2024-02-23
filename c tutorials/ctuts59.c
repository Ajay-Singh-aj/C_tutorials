/*
this is tutorial for knowing the directives.
1.#include directive:
a.this preprocessor fetch the content of some other file to be included in the present file
b.most files are end with .h ,represent header files.
ex: stdio.h me jo bhi func hai woh use kar paate hai #include ki wajah se .it fetch the all contents from file.
if we program in ctuts45 and add #include "ctuts29.c" then it means we can use all contents of ctuts29 in ctuts45.

2.#define directive:
a.used to define a variable globally.
b.used in debugging.
c.we can also create macros(it act like a func. and faster)
 */

#include<stdio.h>
#define PI 3.14
#define SQUARE(r) r*r  //this mean if we put square(r) in a programe it will do r*r.
int main()
{
    float var=PI;
    int r=4;
    printf("the value of PI is %f\n",var);
    printf("the area of the circle is %f\n",var * SQUARE(r));
    return 0;
}