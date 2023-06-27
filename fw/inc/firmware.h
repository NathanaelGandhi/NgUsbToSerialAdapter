/**
 * @file firmware.h
 * @author Nathanael Gandhi
 * @brief Header file for application firmware("FW").
 */

#ifndef FW_FIRMWARE_H
#define FW_FIRMWARE_H

#ifdef __cplusplus
extern "C" {  // force C linkage
#endif

//##############################################################################
// Includes
//##############################################################################

//##############################################################################
// Function Prototypes
//##############################################################################
/**
 * @brief Firmware setup function
 */
void fw_setup(void);

#ifdef __cplusplus
}  // end forced C linkage
#endif

#endif