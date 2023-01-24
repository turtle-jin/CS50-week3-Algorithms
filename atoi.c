#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))  //when input is not a digit
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // get the index of the last char in the string
    int last_index = strlen(input) - 1;

    if (last_index == 0)
    {
        return input[last_index] - 48;
    }
    else
    {
        int last_char = input[last_index] - 48; // Convert last char into its numeric value
        input[last_index] = '\0';  //Remove the last char from the string by moving the null terminator one position to the left.
        return last_char + convert(input) * 10;  //Return last_char int value plus 10 times the integer value of the new shortened string.
    }

}