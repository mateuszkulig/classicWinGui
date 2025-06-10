# Backends support
One of core features of classicWinGui is making it possible to utilize any graphics backend that provides
a drawing space and some drawing function.

## Library specific code
Libraries differ in ways to initialize, deinitialize and code that is used to draw. The aim of having
backend specific abstraction is to wrap all custom calls in functions that classicWinGui uses. Build
system will choose appropriate one depending on arguments passed, so only one is at used at the time.

## Backend implementation
Backend-specific code should define a `cwgBackendFeatures` structure containing list of all supported
features along with `cwgBackendApi` structures filled with pointers to implementations of wrappers
of marked functionalities.

It is recommened to create separate directory with its own `CMakeLists.txt` which contents can be completely
custom so that it can be be organized in any specific way. The important thing is that structures mentioned
above are filled with implemented wrappers or feature enablers accordingly.
