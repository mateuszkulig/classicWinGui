/**
 * @file sdl3_wrappers.c
 * @brief Implementations of SDL3 specific functions.
 */

#include "backend/sdl3/sdl3_wrappers.h"
#include "stdio.h"

/**
 * @brief Get the state of the backend
 * 
 * @return sdlState Backend state structure
 */
static sdlState getState();


cwgError sdlInit() {
    if (SDL_Init(SDL_INIT_VIDEO) == false) {
        return cwgBackendInitError;
    }

    return cwgOK;
}


cwgError sdlCreateWindow() {
    sdlState state = getState();

    state.window = SDL_CreateWindow("ClassicWinGui - SDL3", 800, 600, 0);   // NOLINT
    if(!state.window) {
        return cwgBackendWindowError;
    }

    return cwgOK;
}


cwgError sdlUpdate() {
    printf("Updated");
    SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_EVENT_QUIT ) quit = true; } }   // NOLINT
    return cwgOK;
}


static sdlState getState() {
    static sdlState state = {0};
    
    return state;
}
