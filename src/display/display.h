/**
 * @file display.h
 * @brief Declarations of display creation and draw functions.
 */

#ifndef DISPLAY_H
#define DISPLAY_H

/**
 * @brief Create a window-type display.
 * 
 * @return cwgError cwgOK on success, error enum value otherwise.
 */
cwgError cwgCreateWindow();

/**
 * @brief Update the display contents
 * 
 * @return cwgError 
 */
cwgError cwgUpdate();

#endif  // DISPLAY_H
