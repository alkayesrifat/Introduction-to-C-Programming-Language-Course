/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-23   15:13:04
 * Source:
 */

#include <stdio.h>

int main()
{

    char bar;
    scanf("%c", &bar);

    if (bar == 'f')
    {

        char time;
        scanf("%c", &time);

        if (time == 's')
        {
            printf("porota");
        }
        else if (time == 'd')
        {

            printf("Biriani");
        }
        else 
        {
            printf("tehari");
        }
    }
    else
    {

        printf("Vat khabo");
    }

    return 0;
}