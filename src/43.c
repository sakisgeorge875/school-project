#include <stdio.h>

void print_int(int n) {
    printf("%d", n);
}

int main() {
    int i = 0;
    while (i <= 10) {
        print_int(i++);
    }
    return 0;
}
