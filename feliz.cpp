/*
problema: https://omegaup.com/arena/problem/omi-2022-feliz-encuentro/#problems
  */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i;
cin>>a>>b;
vector<char>palabra(a);
int arrespejo[100000],con=0;
for(i=1; i<=a; i++){
    cin>>palabra[i];

}
for(i=1; i<=a; i++){
    if(palabra[i]==palabra[i+1]){
        arrespejo[i]=con++;

    }else {
    arrespejo[i]=con;
    }
}
int t=0;
for(int j=1; j<=b; j++){
        int pos1,pos2;
    cin>>pos1>>pos2;
  int p=arrespejo[pos2]-arrespejo[pos1];
  cout<<p<<endl;
}
}
