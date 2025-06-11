/**
 * @file cwg.c
 * @brief Main library module implementation
 */

#include "cwg.h"
#include "backend/backend.h"


cwgError cwgInit() {
    const cwgBackendApi backend = cwgGetBackend();
    
    return backend.initialize();
}
