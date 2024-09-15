/*
problema: https://omegaup.com/arena/problem/crateres/
*/
#include<bits/stdc++.h>
using namespace std;
struct datos{
int total;
int pos;
};
datos arr[1000];
int matriz[1000][1000];
int a,b,con=0,g=0,sum=0;
bool bol[10000][10000]={false};
void busca(int,int);
bool acomodar(datos,datos);

int main(){

cin>>a>>b;
    for(int i=0; i<a; i++){

        for(int j=0; j<b; j++){

            cin>>matriz[i][j];

        }

    }
    for(int i=0; i<a; i++){

        for(int j=0; j<b; j++){

            if(!bol[i][j]&&matriz[i][j]!=0){
                sum=0;
                con++;
                busca(i,j);
                arr[g].total=sum;
                arr[g].pos=con;
                g++;
            }
        }
   }
sort(arr,arr+con,acomodar);
cout<<arr[0].pos<<" "<<arr[0].total<<endl;


}
void busca(int n,int g){
if(n<0||g<0||n>=a||g>=b||bol[n][g] || matriz[n][g]==0){
    return;
}
    bol[n][g]=true;
    sum +=matriz[n][g];
    busca(n,g+1);
    busca(n-1,g);
    busca(n+1,g);
    busca(n,g-1);
}
bool acomodar(datos f,datos t){
return f.total>t.total;
}
