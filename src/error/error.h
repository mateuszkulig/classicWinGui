/**
 * @file error.h
 * @brief Error definitions.
 */

#ifndef ERROR_H
#define ERROR_H

/**
 * @brief Enumertaion type containing all possible errors thrown by library.
 * 
 */
typedef enum {
    cwgOK = 0,
    cwgBackendInitError = 1,
    cwgBackendWindowError = 2
} cwgError;

#endif  // ERROR_H
