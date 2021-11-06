#include <unistd.h>

void format_char(va_list c)
{
    write(1, &c, 1);
}

