#include "binary_search.h"
int *binary_search(int value, const int *arr, size_t length)
{
    // pointers to const integers
    const int *tail = arr;
    const int *head = tail + (length - 1);
    const int *med = NULL;

    do
    {
        med = ((head - tail) / 2 + tail);

        if (*med < value)
            tail = med + 1;

        else if (*med > value)
            head = med - 1;

        // target not found
        if (tail > head)
            return (int *)NULL;

    } while (*med != value);

    return (int *)med;
}
