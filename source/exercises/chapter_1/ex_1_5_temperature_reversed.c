/**
 * @file ex_1_5_temperature_reversed.c
 * @author your name (you@domain.com)
 * @brief Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
            that is, from 300 degrees to 0. 
 * @version 0.1
 * @date 2023-12-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));
    return (0);
}