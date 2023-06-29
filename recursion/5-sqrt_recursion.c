#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - Principal function.
* @n: value.
* Return: Zero on success.
*/

int _sqrt_recursion(int n)
{
    if (start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
    if (mid * mid == n) {
        return mid;
    }
    if (mid * mid > n) {
        return _sqrt_helper(n, start, mid - 1);
    }
    return _sqrt_helper(n, mid + 1, end);
}
