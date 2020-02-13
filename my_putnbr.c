/*
** EPITECH PROJECT, 2018
** my_putnbr
** File description:
** no file there, just an epitech header example
*/

#include "./include/my.h"

int my_putnbr(int nb)
{

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    else if (nb < 10) {
        my_putchar(nb + '0');
        if (nb >= 10) {
            my_putnbr(nb / 10);
            nb = (nb % 10);
            my_putchar(nb + '0');
        }
    }
    return (nb);
}


