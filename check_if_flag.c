#include "main.h"

/**
 * check_if_flag - function that check flags
 * @flag: character of flags
 * Return: int
*/

int check_if_flag(char flag)
{
    int return_value = 0;

    if (flag == '+')
    {
        add.plus = 1;
        return_value = 1;
    }
    else if (flag == '#')
    {
        add.hash = 1;
        return_value = 1;
    }
    else if (flag == ' ')
    {
        add.space = 1;
        return_value = 1;
    }
    else if (flag == 'l')
    {
        add.length_modifier_long = 1;
        return_value = 1;
    }
    else if (flag == 'h')
    {
        add.length_modifier_short = 1;
        return_value = 1;
    }



    return (return_value);
}
