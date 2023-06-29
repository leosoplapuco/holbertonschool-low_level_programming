#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - Principal function.
* @n: value.
* Return: Zero on success.
*/

int _sqrt_recursion(int n)
{
	int _sqrt_recursion(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int start = 1;
    int end = n;
    int result = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (mid * mid == n) {
            return mid;
        }
        if (mid * mid < n) {
            start = mid + 1;
            result = mid;
        }
        else {
            end = mid - 1;
        }
    }
    
    return result;
}
}
