#include <stdio.h>

void prow(int blocks, int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < blocks; i++)
    {
        printf("#");
    }
    for (int i = 0; i < 2; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < blocks; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1);


    for (int i = 0; i < height; i++)
    {
        int blocks = i + 1;
        int spaces = height - blocks;
        prow(blocks, spaces);
    }
}
