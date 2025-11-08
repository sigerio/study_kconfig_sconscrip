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



#if CONFIG_WILL_BE_OPEN_WHEN_A_IS_SELECTED
    #if CONFIG_SELECT_A_TO_MAKE_B_ON
        printf("open a will make b is also on.\n");
    #endif
#endif


#if CONFIG_WILL_BE_NOTE_WHEN_C_IS_SELECTED
    #if CONFIG_SELECT_C_TO_MAKE_NOTE_TO_OPEN_D
        printf("not D when C is selected\n");
    #endif
#endif


    printf("=== Feature Status ===\n");

    // Bool feature
#ifdef CONFIG_USE_BOOL_FEATURE
    printf("✅ Bool Feature: BUILT-IN\n");
#else
    printf("❌ Bool Feature: DISABLED\n");
#endif

    // Tristate feature
#ifdef CONFIG_USE_TRISTATE_FEATURE
    #ifdef CONFIG_USE_TRISTATE_FEATURE_MODULE
        printf("📦 Tristate Feature: MODULE (would be .ko in Linux)\n");
    #else
        printf("✅ Tristate Feature: BUILT-IN\n");
    #endif
#else
    printf("❌ Tristate Feature: DISABLED\n");
#endif



    return 0;
}