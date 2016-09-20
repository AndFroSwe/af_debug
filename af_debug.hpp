/*
 * File: af_debug.hpp
 * Version: 1.0
 * Author: Andreas Fröderberg
 * Created: 2016-09-20
 * Last edit: 2016-09-20
 *
 * Header with debugging functions that can be set with a preprocessor flag. 
 * Usage: 
 * - Include header
 * - #define AF_DEBUG 1
 * - Use one of the debugging print macros.
 */

#ifndef AF_DEBUG_H
#define AF_DEBUG_H

#ifdef AF_DEBUG
#if AF_DEBUG
    /* Write to std::cerr */
#   define AF_DBG_CERR(x) do { std::cerr << x << std::endl; } while (0)
    /* Write to std::cout */
#   define AF_DBG_COUT(x) do { std::cout << x << std::endl; } while (0)
#else
#   define AF_DBG_CERR(x)
#   define AF_DBG_COUT(x)
#endif
#endif

#endif /* ifndef AF_DEBUG_H */
