/*
problema : https://omegaup.com/arena/problem/ofmi-2023-karma/#problems
  */
#include <stdio.h>
#include <queue>
#pragma GCC target("avx2")
#pragma GCC optimize("Ofast")

int main()
{
    std::priority_queue<int> cola;
    int a, i, j, k, a2, arr;
    scanf("%d %d", &a, &a2);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr);
        cola.push(arr);
    }
    for (i = 1; i < a2; i++)
    { // printf("%d",cola.top());
        cola.pop();
    }
    if (cola.top() > 0)
    {
        printf("%d", cola.top());
    }
    else
    {
        printf("sencillo");
    }
}
