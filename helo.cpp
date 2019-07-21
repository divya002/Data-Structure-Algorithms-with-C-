#include <iostream>
using namespace std ;
int main(){
    int num;
    int as=14;
    int *ptr=new int;;
    ptr=&as;
    *ptr=15;
    cout<<"Hellow dp \n";
    cout<<"Size of int "<<sizeof (int) << endl  ;
    cin>>num;
    cout<<num;
    cout<<"Print pointer address "<<ptr<<" Value "<<*ptr<<endl;
    cout<<"Value of as "<<as<<endl;
    return 0;
}