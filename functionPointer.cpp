#include<iostream>

using namespace std; 

class M{
    int x,y;
    public: 
    void setxy(int a,int b){
        x=a;
        y=b;
    }
    friend int sum(M m);
};
int sum(M m){
    int M::*pX=&M::x;
    int M::*pY=&M::y;
    cout<<m.*pX;
    cout<<endl;
    cout<<m.x;
    cout<<endl;
    M *pM=&m;
    int s=m.*pX+pM->*pY;
    return s;
};
int main(){
    M n;
    n.setxy(10,20);
    cout<<sum(n)<<endl;
    return 0;
}