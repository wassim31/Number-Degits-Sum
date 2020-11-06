#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 1, devisor, max = 0, multi, x = 0;

    printf("Add the number\n");
    scanf("%d", &n); // 450
    while(i <= n)
    {
        i*=10;
    }
    i/=10;
    for(i ; i >= 1 ; i/=10)
    {
        devisor = n / i; // 5/1 = 5
        max = max + devisor; // 4 + 5 + 3 + 5
        multi = n - (devisor * i); // 0
        n = multi; // 0
    }
    printf("The sum of number degit is : %d\n", max);





    return 0;
}
