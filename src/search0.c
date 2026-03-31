/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. Task: Create an array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // 2. Task: Ask the user for a number
    int n = get_int("What number are you searching for? ");

    // 3. Task: Search the array manually
    // Rule: You must use a loop
    for (int i = 0; i < 7; i++)
    {
        // Check if current element matches the user's input
        if (numbers[i] == n)
        {
            // 4. Task: If found, print "Found" and exit the program
            printf("Found\n");
            return 0; // Success: Exit main early
        }
    }

    // 4. Task: If the loop finishes without finding the number, print "Not found"
    printf("Not found\n");
    return 1; // Failure: Number not in array
}
