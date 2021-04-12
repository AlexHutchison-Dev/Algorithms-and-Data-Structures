/*
*   An implementation of bubble sort in C.
*   
*   Bubble sort is the simplest sorting algorithm, and with a time complexity of O(n squared) it really is not very efficient.
*   It works by stepping through an array and comparing the current value against the next value and swapping them if required.
*   This process is repeated until the array is sorted.
*
*   Written by Alex Hutchison  @ AlexHutchison-Dev on GitHub.com
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{

    int passes = 0, temp = 0, length = 100000;
    bool sorted = false;

    // Generate random array for sorting

    int random_array[100000];

    for (int i = 0; i < length; i++)
    {
        //populate array with random numbers between 0 and 1,000,000
        random_array[i] = rand() % 1000000;
    }

    // Sort array
    while (sorted == false)
    {
        // Set sorted to true, if this remains true at the end of the pass the alogorithm will know
        // that the array is sorted and while loop will end.
        sorted = true;
        for (int i = 0; i < length; i++)
        {
            // Check to see if finished this pass
            if (i + 1 >= length)
            {
                continue;
            }
            // Check to see if the 2 elements already sorted
            if (random_array[i] <= random_array[i + 1])
            {
                continue;
            }
            else
            {
                //  Swap elements positions
                temp = random_array[i];
                random_array[i] = random_array[i + 1];
                random_array[i + 1] = temp;
                // Set sorted as false to signal another pass required
                sorted = false;
            }
        }
        passes++;
    }

    for (int i = 0; i < length; i++)
    {   
        if (i % 1000 == 0) {
            printf("%d ", random_array[i]);
        }
    };
    printf("\n");
    printf("sorted an array of %d elements in %d passes\n", length, passes);
}