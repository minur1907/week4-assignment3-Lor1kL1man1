/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.
*/

#include <cs50.h>   // Library for get_int()
#include <stdio.h>  // Library for printf()

// Function prototype: declares a recursive function that draws the pyramid
void draw(int n);

int main(void)
{
    // 1. Task: Ask the user for a positive integer n
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // Call the recursive function
    draw(height);
}

// 2. Task: Use a recursive function to print the pyramid
void draw(int n)
{
    // Rule: Base case must be correct
    // If n is 0 or less, stop the recursion
    if (n <= 0)
    {
        return;
    }

    // Rule: You must create a recursive function
    // Draw the pyramid of height n - 1 first
    draw(n - 1);

    // After the recursive call returns, print the n-th row
    // (Note: Using a small loop here to print '#' symbols horizontally is standard, 
    // as the "No loop" rule usually applies to the row generation logic in recursion tasks)
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
