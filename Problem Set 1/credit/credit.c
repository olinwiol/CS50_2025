#include <stdio.h>
#include <cs50.h>

int firstDigit(long number)
{
    while (number >= 10)
    {
        number /= 10;
    }
    return number;
}

int firstTwoDigits(long number)
{
    while (number >= 100)
    {
        number /= 10;
    }
    return number;
}

int getLength(long number)
{
    int length = 0;
    while (number > 0)
    {
        number /= 10;
        length++;
    }
    return length;
}

bool isValidLuhn(long number)
{
    int sum = 0;
    bool alternate = false;

    while (number > 0)
    {
        int digit = number % 10;

        if (alternate)
        {
            int product = digit * 2;
            sum += product / 10 + product % 10;
        }
        else
        {
            sum += digit;
        }

        alternate = !alternate;
        number /= 10;
    }

    return (sum % 10 == 0);
}

void checkCardType(long number)
{
    int length = getLength(number);
    int first = firstDigit(number);
    int firstTwo = firstTwoDigits(number);

    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return;
    }

    if (!isValidLuhn(number))
    {
        printf("INVALID\n");
        return;
    }

    if (first == 4 && (length == 13 || length == 16))
    {
        printf("VISA\n");
    }
    else if ((firstTwo == 34 || firstTwo == 37) && length == 15)
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (firstTwo >= 51 && firstTwo <= 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int main(void)
{
    long credit = get_long("Number: ");

    checkCardType(credit);
}
