#include "alphabet_sort.h"

#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void swap_strings(char** str1, char** str2) {
    char* tmp = *str2;
    *str2 = *str1;
    *str1 = tmp;
}

void alphabet_sort(const char** input, const size_t len, char** output) {
    // Initialize output string array
    for (int i = 0; i < len; i++) {
        output[i] = (char*)input[i];
    }

    // Perform bubble sort
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (strcmp(output[i], output[j]) > 0) {
                swap_strings(&output[i], &output[j]);
            }
        }
    }
}
