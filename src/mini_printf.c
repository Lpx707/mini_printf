/*
** EPITECH PROJECT, 2022
** CPOOL
** File description:
** mini_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

int handle_flag(char *str, va_list ap, int i)
{
    switch (str[i + 1]) {
            case 's':
                my_putstr(va_arg(ap, char*));
                break;
            case 'i':
                my_put_nbr(va_arg(ap, int));
                break;
            case 'c':
                my_putchar(va_arg(ap, int));
                break;
            case 'd':
                my_put_nbr(va_arg(ap,int));
                break;
            case '%':
                my_putchar('%');
                break;
            }
}

int mini_printf(char *s , ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, s);
    while (s[i] != '\0') {
        if (s[i] == '%') {
            handle_flag(s, ap, i);
            i++;
    } else {
        my_putchar(s[i]);
    }
    i++;
    }
    va_end(ap);
}


// This is a main test
/*
int main(char *s, ...)
{
    int nb = 10;
    int bn = 66;
    int gg = 100;
    mini_printf("Hello %s %i %i %d%%", "world", nb, bn, gg);
    my_putchar('\n');
}
*/
