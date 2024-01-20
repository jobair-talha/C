#include <stdio.h>

int main() {
    char c[] = "new sentence";
    int i = 0;

    while (c[i] != '\0') {
        printf("%c\n", c[i]);
        i++;
    }

    return 0;
}
