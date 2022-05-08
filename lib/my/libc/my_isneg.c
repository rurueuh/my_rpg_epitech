/*
** EPITECH PROJECT, 2021
** my isneg
** File description:
** write if negatif or possitive a int
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    } else {
        my_putchar(80);
    }
}
