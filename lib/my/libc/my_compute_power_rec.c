/*
** EPITECH PROJECT, 2021
** power rec
** File description:
** je comprends strictement rien a ce que il faut faire
*/

int check(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}

int my_compute_power_rec(int nbr , int p )
{
    int nb_return;
    int a = __INT32_MAX__;

    if (p == 0)
        return (1);
    if (p == 1)
        return (nbr);
    if (p < 0)
        return (0);
    nb_return = my_compute_power_rec(nbr, p - 1);

    if (nb_return < (-a / check(nbr)) || nb_return > (a / check(nbr)))
        return (0);
    nb_return *= nbr;
    return (nb_return);
}
