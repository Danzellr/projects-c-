/*
problema: https://omegaup.com/arena/problem/ofmi-2023-bruja/#problems
  */
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("Ofast")
std::set<int> v;
int a, i;
int main()
{
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        int g;
        scanf("%d", &g);
        v.insert(g);
    }
    printf("%d", v.size());
}
