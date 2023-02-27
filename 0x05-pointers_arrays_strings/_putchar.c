#include <unistd.h>

/**
 * putchar - writes C to stdout
 *
 * Return on sucess 1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
