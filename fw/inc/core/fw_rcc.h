/**
 * @file fw_rcc.h
 * @author Nathanael Gandhi
 * @brief Header file for Reset and Clock Control (RCC).
 */

#ifndef FW_INC_RCC_H
#define FW_INC_RCC_H

#ifdef __cplusplus
extern "C" {  // force C linkage
#endif

//##############################################################################
// Includes
//##############################################################################
#include <stdint.h>

//##############################################################################
// Function Prototypes
//##############################################################################
/**
 * @brief RCC setup function
 */
void fw_rcc_setup(void);

/**
 * @brief Enable Peripheral Clock on particular peripheral in running mode.
 */
void fw_rcc_periph_clock_enable(uint32_t reg_bit);

#ifdef __cplusplus
}  // end forced C linkage
#endif

#endif