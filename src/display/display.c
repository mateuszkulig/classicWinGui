/**
 * @file display.c
 * @brief Draw area creation and modification
 */

#include "backend/backend.h"

void cwgCreateWindow() {
    const cwgBackendApi backend = cwgGetBackend();
    cwgError result = backend.createWindow();
}
