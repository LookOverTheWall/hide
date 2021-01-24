#include <errno.h>

#include "common_print.h"

int sum(int x, int y, int *res)
{
    long result;
    if (res == NULL) {
        PERR("invalid input.\n");
        return -EINVAL;
    }

    result = x + y;
    *res = (int)result;
    return 0;
}

int minus(int x, int y, int *res)
{
    long result;
    if (res == NULL) {
        PERR("invalid input.\n");
        return -EINVAL;
    }

    result = x - y;
    *res = (int)result;
    return 0;
}
