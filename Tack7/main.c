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
/* Задача 3

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
*/
/* Задача 4
#include <stdio.h>

void aPrint(int *array, int len)
{
    for (int i = 0; i < len; i++)
    printf("%d ",array[i]);;
}
void aSort(int* array,int n)
{
    int i,j;
    for(i = 0; i < n; ++i)
    {
        for(j = i; j < n; ++j)
        {
            if(array[i]%10 > array[j]%10)
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main(int argc, const char * argv[])
{
    enum {aSize = 10};
    int array[aSize] = {0};
    for(int i=0; i < aSize; i++)
        scanf("%d", &array[i]);
    aSort(array, aSize);
    aPrint(array, aSize);
    printf("\n");
    return 0;
}
*/
/* Задача 5

#include <stdio.h>
void aPrint(int *array, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",array[i]);;
}
int aScan(int* in, int* out, int n)
{
    unsigned int pos_out = 0;
    for(int i = 0; i < n; i++)
    {
        if (in[i]>99 & in[i]/10%10 == 0)
        {
            out[pos_out] = in[i];
            pos_out++;
        }
    }
    return pos_out;
}
int main(int argc, const char * argv[])
{
    enum {aSize = 10};
    int array_in[aSize] = {0};
    int array_out[aSize] = {0};
    for(int i=0; i < aSize; i++)
        scanf("%d", &array_in[i]);
    aPrint(array_out, aScan (array_in, array_out, aSize));
    printf("\n");
    return 0;
}
*/
/* Задача 6 */
#include <stdio.h>
#define SIZE 10

int mostly(int* in,int len)
{
    int count[len];
    for(int i=0;i<len;i++)
        count[i]=0;
    int max = 0, numberMax = 0;
    for(int i = 0; i < len; i++)
        for(int j = i + 1; j < len; j++)
            if(in[i] == in[j])
                count[i]++;
    for(int i = 0; i < len; i++)
        if(count[i] > max)
        {
            max = count[i];
            numberMax = i;
        }
    return in[numberMax];
}

int Input(int array[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
    return i;
}

int main(int argc, const char * argv[])
{
int in[SIZE];
    Input(in,SIZE);
    printf("%d ", mostly(in,SIZE));
    printf("\n");
    return 0;
}
