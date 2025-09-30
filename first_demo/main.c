#include <stdio.h>
#include "config.h"

int main() {

#ifdef CONFIG_WHAT_HAPPEN
    printf("what happen?\n");
#endif

#ifdef CONFIG_WHAT_IS_DEPEND
    printf("what is depend?\n");
#endif

#ifdef CONFIG_WHAT_IS_HEX
    pritnf("hex is %04x\n",CONFIG_WHAT_IS_HEX);
#endif


#ifdef CONFIG_SAY_HELLO
    for (int i = 0; i < CONFIG_MAX_COUNT; i++) {
        printf("%s (loop %d)\n", CONFIG_CUSTOM_MSG, i + 1);
    }
#else
    printf("Silent mode.\n");
#endif



#ifdef CONFIG_WILL_BE_OPEN_WHEN_A_IS_SELECTED
    #ifdef CONFIG_SELECT_A_TO_MAKE_B_ON
        printf("open a will make b is also on.\n");
    #endif
#endif
    return 0;
}