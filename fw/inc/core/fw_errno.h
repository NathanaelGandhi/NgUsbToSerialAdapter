/**
 * @file fw_errno.h
 * @author Nathanael Gandhi
 * @brief Application firmware error numbers
 */

#ifndef FW_INC_FW_ERRNO_H
#define FW_INC_FW_ERRNO_H

#ifdef __cplusplus
extern "C" {  // force C linkage
#endif

//##############################################################################
// Includes
//##############################################################################

//##############################################################################
// Preprocessor Directives
//##############################################################################
/**
 * @brief Used to indicate error free operation.
 */
#define FW_SUCCESS 0

/**
 * @brief Used for errors that indicate a failure or problem that should be
 * addressed but does not halt the system.
 */
#define FW_FATAL -1

/**
 * @brief Used for critical errors that indicate a severe failure, potentially
 * causing the system to stop or crash.
 */
#define FW_ERROR -2

#ifdef __cplusplus
}  // end forced C linkage
#endif

#endif