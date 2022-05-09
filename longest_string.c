#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        puts(" ");
    if (argc == 2)
        puts(argv[1]);
    if (argc > 2)
    {
        char *str = argv[1];
        for (int i = 2; i < argc; i++)
        {
            if (strlen(argv[i]) > strlen(str))
            {
                str = argv[i];
            }
        }
        puts(str);
    }
    return EXIT_SUCCESS;
}