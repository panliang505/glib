#include <stdio.h>
#include "../../gettext-0.19.4/gettext-runtime/intl/libgnuintl.h"


int main(void)
{

    char *res2 = gettext("hello man");
    char *res = gettext("hello world.");

    char ss[20] = { 0 };
    libintl_sprintf(ss, res);

    printf("this data is %s.\n", ss);


    getchar();
    return 0;
}