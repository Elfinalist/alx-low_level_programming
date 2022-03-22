#include "main.h"
#include <string.h>

void _puts(char *str)

{
    int len = strlen(str), i;

    for (i = 0; i < len; i++)
        _putchar(str[i]);

    _putchar('\n');
}
