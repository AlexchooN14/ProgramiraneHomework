#include <iostream>
#include <stdio.h>
using namespace std;

int print_array(int *a, int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }
return 0;
}

int reverse(int *a, int size){
    //1 and 4 --> a = 1; b = 4; t = a; a = b; b = t;
    //2 and 3 --> a = 2; b = 3; t = a; a = b; b = t;
    int i;
    for(i = 0; i < (size/2); i++){
        int *b = &a[size - 1 - i]; //*b = 4
        int t = *(a + i); //t = 1
        *(a + i) = *b; //a[0] = 4
        *b = t; //a[3] = 1
    }
    return 0;
}


int main()
{
    int a[] = {1, 2, 3, 4};
    int b = sizeof(a)/sizeof(int);
    int *c = &a[0];
    reverse(c, b);
    print_array(c, b);

}
