/*
problema:: https://omegaup.com/arena/problem/Marathon/#problems
  */
  #include <bits/stdc++.h>
using namespace std;
struct corredores
{
    int id;
    string nombre;
    float tiempo;
};

corredores arr[100000];

bool acomodar(corredores l,corredores l2){
    return l.tiempo<l2.tiempo;
}


int main(){
int a;
cin>>a;
int i;
 cin.ignore();
    for (i = 0; i < a; i++) {
        cin >> arr[i].id;
        cin.ignore();
        getline(cin, arr[i].nombre);
        cin >> arr[i].tiempo;
    }


sort(arr,arr+i,acomodar);

for(i=0;i<3; i++){
    cout<<arr[i].id<<" "<<arr[i].nombre<<" ";
    printf("%.1f \n",arr[i].tiempo);

}


}
