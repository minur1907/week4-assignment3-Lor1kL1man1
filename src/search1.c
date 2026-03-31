/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h> // Required for strcmp()

int main(void)
{
    // 1. Task: Create an array of strings (names)
    string names[] = {"battleship", "boot", "cannon", "iron", "thimble"};

    // 2. Task: Ask the user for a name
    string s = get_string("What name are you searching for? ");

    // 3. Task: Search the array
    for (int i = 0; i < 5; i++)
    {
        // 4. Task: Use strcmp() to compare strings
        // Rule: Do NOT use == for string comparison
        if (strcmp(names[i], s) == 0)
        {
            // 5. Task: If found, print "Found" and exit
            printf("Found\n");
            return 0;
        }
    }

    // 5. Task: If the loop finishes without a match, print "Not found"
    printf("Not found\n");
    return 1;
}
