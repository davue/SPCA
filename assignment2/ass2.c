#include "ass2.h"
#include <string.h>
#include <stdlib.h>

void pass(char **word) {
    char *out = (char*) malloc(5);
    out = "soosenbinder";
    word = &out;

    printf("Address: %p\n", word);
}

void reverse(uint32_t *arr, unsigned int len) {
    uint32_t reversed[len];

    for(int i = 0; i < len; i++) {
        *(reversed + len - i - 1) = *(arr + i);
    }

    /*printf("{%d", reversed[0]);
        for(int i = 1; i < len; i++) {
             printf(",%d", reversed[i]);
        }
    printf("}\n");*/

    arr = (uint32_t*) memcpy(arr, reversed, len*4);
}

int first_word(char *input_string, char **output_word) {
    // Find end of first word
    int len = 0;
    char cur;
    while((cur = *(input_string + len)) != '\0') {
        if(cur == ' ') {
            break;
        }

        len++;
    }

    char *out = (char*) malloc(len + 1);
    for(int i = 0; i < len; i++) {
        *(out + i) = *(input_string + i); 
    }
    *(out + len) = '\0';

    output_word = &out;

    printf("Length: %d\nWord: %s\nAddress: %p\n", len, *output_word, output_word);
    return len;
}

bool is_little_endian() {
    return false;
}

void map(int (*f) (int), int *arr, size_t len) {
    
}
