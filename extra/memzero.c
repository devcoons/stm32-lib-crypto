#ifndef __STDC_WANT_LIB_EXT1__
#define __STDC_WANT_LIB_EXT1__ 1  // C11's bounds-checking interface.
#endif
#include <string.h>

#if defined(__NEWLIB__)
#define HAVE_EXPLICIT_BZERO 1
#endif

void memzero(void *const pnt, const size_t len) {

  volatile unsigned char *volatile pnt_ = (volatile unsigned char *volatile)pnt;
  size_t i = (size_t)0U;

  while (i < len) {
    pnt_[i++] = 0U;
  }
}
