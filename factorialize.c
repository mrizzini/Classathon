#include <cs50.h>
#include <stdio.h>

long long factor(int i);

int main(int argc, char *argv[])
{

    // int i = get_int("Integer: ");

    if (argc != 2)
    {
        return 1;
    }

    int i = atoi(argv[1]);

    printf("%llu\n", factor(i));

}


long long factor(int i)
{

    if (i == 1)
    {
        return 1;
    }
    else
    {
        return i * factor(i - 1);
    }

}