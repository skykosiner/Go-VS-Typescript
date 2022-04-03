#include <stdio.h>
#include <string.h>

int main() {
    char x[] = "Hello World";
    int i;

    for (i = 0; i < strlen(x); i++) {
        printf("%d\n", i);
    };

    return 0;
};
