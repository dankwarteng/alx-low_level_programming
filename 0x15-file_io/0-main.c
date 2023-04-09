#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
<<<<<<< HEAD
ssize_t n;

if (ac  !=  2)
{
dprintf(2, "Usage: %s filename\n", av[0]);
exit(1);
}
n = read_textfile(av[1], 114);
printf("\n(printed chars: %li)\n", n);
n = read_textfile(av[1], 1024);
printf("\n(printed chars: %li)\n", n);
return (0);
=======
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
>>>>>>> 41711b63ef57a1e5add2b6214dbc2a011b6734c2
}
