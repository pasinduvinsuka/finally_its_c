/*
 This #include part will tell the C precprocessor to pull the contents of another file
 and insret it into the code right there.

 There is 2 stages to compilation:

 01: Preprocessor --> 
    Anything that starts with pound sign, hash symbol or octothorpe is something that
    the preprocessor operates on before the compiler even gets started.

 02: Compiler -->
    After C preprocessor has finished preprocessing everything, the results are ready
    for the compiler to take them and produce the assmebly code (machine code).
*/

#include <stdio.h> //This is known as the header file

int main(void){
    printf("Hello, world!\n");
}