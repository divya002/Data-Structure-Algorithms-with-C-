#include<iostream>
#include "../stdc++.h"

using namespace std;
ifstream input("data.in");
ofstream output("data.out");

int arrA[1000],arrB[1000],auxB=0,n,query,Left,Right,add;

int main(){
    input>>n;
    for(int i=1;i<=n;i++){
        input>>arrA[i];
    }
    input>>query;
    for(int j=1;j<=query;j++){
        input>>Left>>Right>>add;
        arrB[Left]+=add;
        arrB[Right+1]-=add;
    }
    for(int z=1;z<=n;z++){
        auxB+=arrB[z];
        arrA[z]+=auxB;
        cout<<"Final "<< arrA[z]<<endl;
    }
    return 0;
}