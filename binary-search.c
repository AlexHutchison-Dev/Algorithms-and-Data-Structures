/*
*   An implementation of binary search in c.
*/

#include <stdio.h>

int main()
{
    int start, end, trav, steps = 0, index, target, buffer[1000000];

    printf("Enter a number between 0 and 1,000,000:\n");
    scanf("%d", &target);

    for (int i = 0; i <= 1000000; i++)
    {
        buffer[i] = i;
    }

    start = 0;
    end = 1000000;

    while (start <= end)
    {
        steps++;
        trav = (start + end) / 2;

        if (buffer[trav] < target)
        {
            start = trav + 1;
        }
        else if (buffer[trav] == target)
        {
            printf("%d found at index: %d in %d steps\n", target, trav, steps);
            break;
        }
        else
        {
            end = trav - 1;
        }
    }
    if (start > end)
    {
        printf("%d out of bounds", target);
    }
}