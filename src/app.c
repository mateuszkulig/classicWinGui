/**
 * @file app.c
 * @brief Example app that shows usage of library
 */

#include "cwg.h"


int main(int argc, char **argv) {
    cwgError returnCode;

    // Initialize
    returnCode = cwgInit();
    if (returnCode != cwgOK) {
        return returnCode;
    }

    // Create window
    returnCode = cwgCreateWindow();
    if (returnCode != cwgOK) {
        return returnCode;
    }

    // Update a window
    returnCode = cwgUpdate();
    if (returnCode != cwgOK) {
        return returnCode;
    }

    return 0;
}
