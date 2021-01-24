#include <errno.h>

#include "common_print.h"
#include "calculate.h"

int main(int argc, char *argv[])
{
    int ret;
    int x;
    int y;
    int res;

    x = 4;
    y = 5;
    ret = sum(x, y, &res);
    if (ret != 0) {
        PERR("sum error, ret=%d.\n", ret);
        return -EINVAL;
    }
    PINFO("sum %d+%d=%d.\n", x, y, res);

    return 0;
}
