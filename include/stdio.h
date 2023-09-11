
#ifndef _WASIX_STDIO_H
#define _WASIX_STDIO_H

#include_next <stdio.h>

#define P_tmpdir 0
#define L_tmpnam 0
#ifndef TMP_MAX
    #define TMP_MAX 10000
#endif

char *tmpnam(char *s);
FILE *tmpfile(void);

#endif
