/*
problema: https://omegaup.com/arena/problem/Forzando-la-caja-fuerte/#problems
  */
#include<bits/stdc++.h>
using namespace std;

main(){

    int i,d,izq,der,a[10]={1,2,3,4,5,1,2,3,4,5},pos=0,j=0;

    cin>>i>>d;

    izq=pos+(i%5);
    izq=izq%5;
    pos=izq+1;
    der=pos+(4-(d%5));
    der=der%5;
    pos=der;

    if(pos>5)
        pos=pos%5;

    while(j!=5)
    {
        cout<<a[pos+j]<<' ';
        j++;
    }

}
