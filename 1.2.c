/*
* Q. Write code to reverse a C-style string
* [Prav] Er, guess will have to write this one in C
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s string", argv[0]);
        return 1;
    }

    int len = strlen(argv[1]);
    for(int i=0; i < len / 2; i++) {
        char t = argv[1][i];
        argv[1][i] = argv[1][len - i - 1];
        argv[1][len - i - 1] = t;
    }
    printf("Reversed string: %s\n", argv[1]);
    return 0;
}