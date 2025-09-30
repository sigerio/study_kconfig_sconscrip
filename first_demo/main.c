#include <stdio.h>
#include "config.h"

int main() {
#ifdef CONFIG_SAY_HELLO
    for (int i = 0; i < CONFIG_MAX_COUNT; i++) {
        printf("%s (loop %d)\n", CONFIG_CUSTOM_MSG, i + 1);
    }
#else
    printf("Silent mode.\n");
#endif
    return 0;
}