//
//  main.c
//  Tack7
//
//  Created by Pavel iPro on 08.01.2024.
//

#include <stdio.h>

const int amount = 5;

int main(int argc, const char * argv[]) {
int m[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &m[i]);
    int sum = 0;
    for (int i = 0; i < amount; i++)
        sum += m[i];
    printf("%.3f\n", (float)sum / amount);
    return 0;
}

