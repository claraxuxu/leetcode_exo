/*
** PERSONAL PROJECT, 2021
** leetcode_exo
** File description:
** palindrome.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int tmp = 0;
    int y = x;
    if (x < 0) return (false);
    else {
        while (y) {
        tmp = tmp * 10 + y % 10;
        y /= 10;
        }
    if (tmp == x) return (true);
    else return (false);
    }
}

// int main()
// {
//     if (isPalindrome(1100220011) == true)
//         printf ("true");
//     return 0;
// }