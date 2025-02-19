#include <stdio.h>

int pennies(int cash)
{
    return cash;
}

int nickels(int cash)
{
    int rest = cash % 5;
    int coins = pennies(rest);
    int nickels = (cash - rest) / 5;
    return nickels + coins;

}

int dimes(int cash)
{
    int rest = cash % 10;
    int coins = nickels(rest);
    int dimes = (cash - rest) / 10;
    return dimes + coins;

}

int quarters(int cash)
{
    int rest = cash % 25;
    int coins = dimes(rest);
    int quarters = (cash - rest) / 25;
    return quarters + coins;
}

int main(void)
{
    int cash;
    do
    {
        printf("Change owed: ");
        scanf("%d", &cash);
    }
    while (cash < 0);

    int owed = quarters(cash);
    printf("%d\n", owed);
}
