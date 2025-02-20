#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float calculate_grade(char text[])
{
    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    return index;
}

void display_grade(int grade)
{
    if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", (int)grade);
    }
}

int main(void)
{
    char text[1000];
    printf("Text: ");
    scanf("%s", text);

    int grade = calculate_grade(text);

    display_grade(grade);
}