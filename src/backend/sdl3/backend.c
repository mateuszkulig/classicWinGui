/**
 * @file backend.c
 * @brief Implementation of backend wrappers
 */

#include "backend/backend.h"
#include "stdio.h"

cwgError sdlCreateWindow() {
    printf("Window created!");
    return cwgOK;
}

cwgBackendApi cwgGetBackend() {
    static const cwgBackendApi api = {
        .features = {.createWindow = true},
        .createWindow = sdlCreateWindow
    };

    return api;
}
