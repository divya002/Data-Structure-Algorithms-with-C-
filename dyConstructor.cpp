#include<iostream>
using namespace std;

class String{
    char *name;
    public: String(char *s,int len){
        name=new char[len];
    }
};
int main(){
    char *first= "DivyaPrakash";
    String s1(first,12);
    return 0;
}