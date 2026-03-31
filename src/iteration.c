/*
WEEK 1 — TASK 1 (Iteration)
*/
// Draws a pyramid using iteration

#include <cs50.h>   // Library for get_int()
#include <stdio.h>  // Library for printf()

// Function prototype
void draw(int n);

int main(void)
{
    // 1. KURAL: Kullanıcıdan pozitif bir tam sayı n iste.
    // 2. KURAL: n < 1 ise geçerli olana kadar tekrar sor (do-while döngüsü ile).
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // Call the draw function and pass the height
    draw(height);
}

// Function that prints a left-aligned pyramid of height n
void draw(int n)
{
    // Outer loop controls the number of rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop prints the correct number of # symbols per row
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // After printing hashes, move to the next line
        printf("\n");
    }
}
