//
//  main.c
//  Tack7
//
//  Created by Pavel iPro on 08.01.2024.
//
/*Задача 1

#include <stdio.h>

const int amount = 5;

int main(int argc, const char * argv[]) 
{
int m[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &m[i]);
    int sum = 0;
    for (int i = 0; i < amount; i++)
        sum += m[i];
    printf("%.3f\n", (float)sum / amount);
    return 0;
}
*/
/* Задача 2

#include <stdio.h>

const int amount = 5;

int main(int argc, const char * argv[])
{
int m[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &m[i]);
int min = m[0];
    for (int i = 1; i < amount; i++)
        if (m[i] < min)
            min = m[i];
    printf("%d\n", min);
return 0; }
*/
/* Задача 3 */

#include <stdio.h>

int Input(int array[], int n)
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
return i; }
void Print(int array[], int len)
{
    for (int i = 0; i < len; i++)
    printf("%d ",array[i]);
    printf("\n");
}

void Right_shift (int array[], int len)
{
int temp;
    temp = array[len - 1];
    for (int i = len - 1; i > 0; i--)
        array[i] = array[i - 1];
    array[0] = temp;
}
int main(int argc, const char * argv[])
{
enum {BUFFER_SIZE = 12};
int  buffer[BUFFER_SIZE];
    Input(buffer,BUFFER_SIZE);
    for(int i=0;i<4;i++)
        Right_shift(buffer,BUFFER_SIZE);
    Print(buffer,BUFFER_SIZE);
    printf("\n");
    return 0;
}
