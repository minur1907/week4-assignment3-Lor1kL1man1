/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// 1. Create a struct Person with: name and phone
typedef struct
{
    string name;
    string phone;
}
person;

int main(void)
{
    // 2. Create an array of persons (size 3 for this example)
    person people[3];

    // Assigning values to the first two contacts
    people[0].name = "Carter";
    people[0].phone = "+1-617-495-1000";

    people[1].name = "David";
    people[1].phone = "+1-949-468-2750";

    // Bonus: Allow the user to add a new contact
    printf("Add a new contact:\n");
    people[2].name = get_string("Name: ");
    people[2].phone = get_string("Phone: ");
    printf("Contact added!\n\n");

    // 3. Ask the user for a name
    string search_name = get_string("Search for a name: ");

    // 4. Search through the array
    for (int i = 0; i < 3; i++)
    {
        // 5. Use strcmp() to compare names
        if (strcmp(people[i].name, search_name) == 0)
        {
            // If found, print the phone number
            printf("Found: %s\n", people[i].phone);
            return 0;
        }
    }

    // If not found, print "Not found"
    printf("Not found\n");
    return 1;
}
