/**
 * @file backend.h
 * @brief Declarations of wrappers that backend should implement.
 */

#ifndef BACKEND_H
#define BACKEND_H

#include "error/error.h"
#include "stdbool.h"

/**
 * @brief Struct defining what features are supported natively by backend.
 * 
 */
typedef struct {
    const bool createWindow;
} cwgBackendFeatures;

/**
 * @brief Struct representing interface for backend-specific impelentations of functions used by library.
 * 
 */
typedef struct {
    const cwgBackendFeatures    features;           // Feature structure.
    cwgError                    (*initialize)();    // Intitialize backend.
    cwgError                    (*createWindow)();  // Create a window.
    cwgError                    (*update)();        // React to actions and redraw.
} cwgBackendApi;

/**
 * @brief Returns the backend API. 
 * 
 * @return cwgBackendApi Interface with filled wrapper function pointers.
 */
cwgBackendApi cwgGetBackend();

#endif  // BACKEND_H
