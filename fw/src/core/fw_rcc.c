//##############################################################################
// Includes
//##############################################################################
#include "core/fw_rcc.h"

#include <libopencm3/stm32/rcc.h>
#include <stdint.h>

//##############################################################################
// Function Definitions
//##############################################################################
void fw_rcc_setup(void) {
// Note: Phase Locked Loop (PLL)
#ifdef STM32F4
    rcc_clock_setup_pll(&rcc_hsi_configs[RCC_CLOCK_3V3_84MHZ]);
#endif
#ifdef STM32L4
    // rcc_clock_setup_pll(&rcc_hsi16_configs[RCC_CLOCK_]);
#endif
}

void fw_rcc_periph_clock_enable(uint32_t reg_bit) {
#if defined(STM32F4) || defined(STM32L4)
    rcc_periph_clock_enable((enum rcc_periph_clken)reg_bit);
#endif
}