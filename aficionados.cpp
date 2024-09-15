/*
problema: https://omegaup.com/arena/problem/omi-2023-aficionados/#problems
  */
#include <stdio.h>
#include <omp.h>
#pragma GCC optimize("O2")
#pragma GCC target("avx2")
#define s(variable) scanf("%d", &variable);
#define p(variable1, variable2) printf("%d %d\n", variable1, variable2);
main()
{
    int a;
    s(a) int arr[a];
    for (int i = 1; i <= a; i++)
    {
        s(arr[i]);
    }
#pragma omp parallel for
    for (int i = 1; i <= (a - 2); i++)
    {
        if (arr[i] == arr[i + 2])
        {
            p(i, i + 2)
#pragma omp cancel for
                return 0;
        }
        else if (arr[i] == arr[i + 1])
        {
            p(i, i + 1)
#pragma omp cancel for
                return 0;
        }
    }
    printf("-1");
}
