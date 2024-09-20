#include "pa1.h"

int main(void)
{
    char line[MAX_LENGTH];
    while (fgets(line, MAX_LENGTH, stdin)) // gets a single line from stdin
    {
        int len = strlen(line) - 1; // exlcluding the new line at the end
        line[len] = '\0';           // dropping the new line
        if (is_singleton(line))
        {
            printf("singleton\n");
        }
    }
}