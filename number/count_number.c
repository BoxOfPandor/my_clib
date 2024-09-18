/*
** EPITECH PROJECT, 2023
** lib
** File description:
** count_number
*/

int count_number(int num)
{
    int count = 0;

    while (num != 0) {
        num = num / 10;
        count++;
    }
    return count;
}
