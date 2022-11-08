/*
** EPITECH PROJECT, 2022
** CPOOL
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    unsigned int i;

    i = 0;
    if (nb >= 0)
        i = nb;
    if (nb < 0)
        i = nb * -1;
        //my_putchar('-');
    if (i > 9)
        my_put_nbr(i / 10);
        my_putchar((i % 10) + '0');
}
