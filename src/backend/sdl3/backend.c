/**
 * @file backend.c
 * @brief Backend wrapper structure.
 */

#include "backend/backend.h"
#include "backend/sdl3/sdl3_wrappers.h"


cwgBackendApi cwgGetBackend() {
    static const cwgBackendApi api = {
        .features = {.createWindow = true},
        .initialize = sdlInit,
        .createWindow = sdlCreateWindow,
        .update = sdlUpdate
    };

    return api;
}
