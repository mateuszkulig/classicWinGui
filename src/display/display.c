/**
 * @file display.c
 * @brief Draw area creation and modification
 */

#include "backend/backend.h"


cwgError cwgCreateWindow() {
    const cwgBackendApi backend = cwgGetBackend();

    return backend.createWindow();
}


cwgError cwgUpdate() {
    const cwgBackendApi backend = cwgGetBackend();

    return backend.update();
}
