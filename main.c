#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "alphabet_sort.h"

bool compare_string_array(char** output, const char** test_vector, const size_t len) {
    for (int i = 0; i < len; i++) {
        if (strcmp(test_vector[i], output[i]) != 0) return false;
    }
    return true;
}

bool perform_tests() {
    bool result = true;

    const char* input_a[8] = {"beta", "charlie", "zulu", "alpha", "harper", "pixel", "binny", "charlie"};
    const char* test_a[8] = {"alpha", "beta", "binny", "charlie", "charlie", "harper", "pixel", "zulu"};
    char* output_a[8];

    alphabet_sort(input_a, 8, output_a);
    result &= compare_string_array(output_a, test_a, 8);

    return result;
}

int main() {
    if (perform_tests()) {
        puts("Tests passed!");
    } else {
        puts("Tests failed...");
    }
    return 0;
}
