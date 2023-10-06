#include <unistd.h>

void    ft_print_combination(char l_character, char r_character)
{
    char combination[6];

    combination[0] = (l_character / 10) + '0';
    combination[1] = (l_character % 10) + '0';
    combination[2] = ' ';
    combination[3] = (r_character / 10) + '0';
    combination[4] = (r_character % 10) + '0';
    combination[5] = '\0';

    write(1, &combination, 6);
    if ((l_character / 10) != 9 || (l_character % 10) != 8)
    {
        char colon_and_space[3];

        colon_and_space[0] = ',';
        colon_and_space[1] = ' ';
        colon_and_space[2] = '\0';
        write(1, &colon_and_space, 3);
    }
}

void    ft_print_comb2(void)
{
    char l_character;
    char r_character;

    l_character = 0;
    while (l_character < 100)
    {
        r_character = l_character + 1;
        while(r_character < 100)
        {
            ft_print_combination(l_character, r_character);
            r_character ++;
        }
        l_character ++;
    }
}