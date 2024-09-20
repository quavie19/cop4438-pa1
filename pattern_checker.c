#include <string.h>
#include "pa1.h"

int is_singleton(char str[])
{
    int pointer = str[0];
    int len = strlen(str);
    for (int i = 1; i < len; i++)
    {
        if (pointer != str[i])
        {
            return 0;
        }
    }
    return 1;
}
