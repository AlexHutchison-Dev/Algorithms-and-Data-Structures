/*
*   An implementation of binary search in c.
*
*   Binnary search is an algorithm for searching sorted arrays, as it halfs the dataset at each step
*   it has a time complexity O(log n) making it very fast, so fast and as its time complexity is logorithmic
*   the larger the dataset the more efficient it gets. 
*
*/

#include <stdio.h>
#include <time.h>

int main()
{
    int start = 0, end = 1000000, traverser, steps = 0, index, target, buffer[1000000];

    printf("Enter a number between 0 and 1,000,000:\n");
    scanf("%d", &target);

    for (int i = 0; i <= 1000000; i++)
    {
        buffer[i] = i;
    }

    while (start <= end)
    {
        steps++;
        traverser = (start + end) / 2;

        if (buffer[traverser] < target)
        {
            start = traverser + 1;
        }
        else if (buffer[traverser] == target)
        {
            printf("%d found at index: %d in %d steps\n", target, traverser, steps);
            break;
        }
        else
        {
            end = traverser - 1;
        }
    }
    if (start > end)
    {
        printf("%d not found in array\n", target);
    }
}