#include "ass2.h"

void test_reverse();
void test_first_word();

void test_passing() {
    char *word = NULL;
    char **point = &word;
    pass(point);
    printf("Address: %p\n", point - 4);
    printf("Word: %s\n", *(point - 4));
}

int main() {
    //test_reverse();   
    //test_first_word();
    test_passing();
}

void test_reverse() {
    printf("---- Testing reverse ----\n");
    
    unsigned int len = 5;
    uint32_t arr[] = {1,2,3,4,5};

    printf("Original: {%d", arr[0]);
    for(int i = 1; i < len; i++) {
        printf(",%d", arr[i]);
    }
    printf("}\n");


    reverse(arr, len);

    printf("Reversed: {%d", arr[0]);
    for(int i = 1; i < len; i++) {
        printf(",%d", arr[i]);
    }
    printf("}\n");

    printf("\n");
}

void test_first_word() {
    printf("---- Testing first_word ----\n");

    char *input = "soos saas sees";
    char **output = NULL;
    
    int len = first_word(input, output);
    printf("\nLenght: %d\n", len);
    printf("Address: %p\n", *output);
    printf("Word: %s\n", *output);
}

int comp(int a) {
    if (a <= 0) return 0;
    else return 1;
}
