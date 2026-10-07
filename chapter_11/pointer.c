#include <stdio.h>



int main(){

    int a[5] = {11,22,33,44,55};
    int *p = a;
    
    // this will print the address of the first element
    printf("address to the first element of the array %p\n",p); 

    //dereference of the integer pointer p, this will print first element 11
    printf("%i\n",*p); 
    printf("%i\n",*(p+0)); //we can do the same above as in here too

    // this will print the second element 22
    printf("%i\n", *(p+1)); 


    //we can utilize the above in a for loop too as below
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d\n",*(p + i));
    }
}