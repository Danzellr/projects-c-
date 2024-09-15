/*
problema: https://omegaup.com/arena/problem/ofmi-2023-basquet/#problems
*/
#include <stdio.h>
#pragma GCC target("avx2")
#pragma GCC optimize("Ofast")
main()
{
    int a, i, j, k;
    int arr[6];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 && j != i; j++)
        {
            for (k = 0; k < 5 && k != i && k != j; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 100)
                {
                    printf("%d %d %d", arr[i], arr[j], arr[k]);
                    return 0;
                }
            }
        }
    }
    printf("-1");
}
