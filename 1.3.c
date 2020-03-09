/* 
* Design an algorithm and write code to remove the duplicate characters 
* in a string without using any additional buffer NOTE: One or two 
* additional variables are fine An extra copy of the array is not
*
* [Prav] - Looks like another case for using C instead of dart. 
*/


#include <stdio.h>
#include <string.h>

// My first instinct is to use heapsort and use the comparison to
// detect if two characters are the same. Here, I use bubblesort
// as an alternative as it's quicker to implement.
int detectDuplicate(char *str) {
    int len = strlen(str);
    for(int i=0; i < len - 1; i++) {
        for(int j=i+1; j < len; j++) {
            if(str[i] > str[j]) {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            } 
        }
    }
    for(int i=0; i < len - 1; i++) {
        if (str[i] == str[i+1]) {
            
        }
    }
    printf("%s", str);
    return 0;
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s string", argv[0]);
        return 1;
    }
    printf("Duplicate Found: %i\n", detectDuplicate(argv[1]));
    return 0;
}

