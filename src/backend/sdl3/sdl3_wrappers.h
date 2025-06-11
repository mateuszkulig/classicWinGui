/**
 * @file sdl3_wrappers.h
 * @brief Declarations for SDL3 specific types and funcions.
 */

#ifndef SDL3_BACKEND_H
#define SDL3_BACKEND_H

#include "error/error.h"
#include "SDL3/SDL.h"

/**
 * @brief State of backend holding all variables its using
 * 
 */
typedef struct {
    SDL_Window *window;
    SDL_Surface *screenSurface;
} sdlState;

/**
 * @brief Initialize the backend
 * 
 * @return cwgError cwgOK on success, error enum value otherwise.
 */
cwgError sdlInit();

/**
 * @brief Create the window and store it in state struct.
 * 
 * @return cwgError cwgOK on success, error enum value otherwise.
 */
cwgError sdlCreateWindow();

/**
 * @brief Pool events and update window contents.
 *        Note: This currently runs a loop instead of single update
 * 
 * @return cwgError cwgOK on success, error enum value otherwise.
 */
cwgError sdlUpdate();


#endif  // SDL3_BACKEND_H
