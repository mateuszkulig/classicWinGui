/**
 * @file cwg.h
 * @brief Main library module declarations.
 */

#ifndef CWG_H
#define CWG_H

#include "error/error.h"
// All of classicWinGui headers
#include "display/display.h"

/**
 * @brief Initialize library and its backend.
 * 
 * @return cwgError cwgOK on success, error enum value otherwise.
 */
cwgError cwgInit();

#endif  // CWG_H
