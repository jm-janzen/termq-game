#include <stdio.h>
#include <menu.h>

int main() {
    printf("main\n");

    if (init() == 0) {
        printf("good\n");
    } else {
        printf("bad\n");
    }
}
