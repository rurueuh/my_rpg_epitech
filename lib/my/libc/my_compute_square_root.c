/*
** EPITECH PROJECT, 2021
** square
** File description:
** je comprends strictement rien a ce que il faut faire mais la encore pire
*/

int my_compute_square_root_calc(int nb, int p)
{
    int result = nb;

    if (p < 0) {
        return (0);
    } else {
        for (int i = p; i > 1; i--) {
            result = result * nb;
        }
    }
}

int my_compute_square_root(int nb)
{
    return 0;
}
