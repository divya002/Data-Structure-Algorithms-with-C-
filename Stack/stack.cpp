#include<iostream>

using namespace std;
#define MAX 1000

template <class T >
class Stack{
private:
int TOP;
public: 
T arr[MAX];
Stack(){
    TOP=-1;
}
bool push(T a);
T pop();
bool empty();
T top();
};
template <class T>
bool Stack<T>::push(T a){
if(TOP >= (MAX-1)){
    cout<<"Stack Overflow"<<endl;
    return false;
}else{
    arr[++TOP]=a;
    cout<<"New data inserted in the stack "<<a<<endl;
    return true;
}
}

template <class T>
T Stack<T>::pop(){
if(TOP <0 ){
    cout<<"Stack Underflow"<<endl;
    return 0;
}else{
    T x = arr[TOP--];
    cout<<"pop "<<x<<endl;
    return x;
}
}

template <class T>
bool Stack<T>::empty(){
if(TOP <0 ){
    cout<<"empty"<<endl;
    return true;
}
else{
    cout<<"not empty"<<endl;
    return false;
}
}
template <class T>
T Stack<T>::top(){
if(TOP <0 ){
    cout<<"empty"<<endl;
    return 0;
}
else{
    T x=arr[TOP];
    cout<<x<<endl;
    return x;
}
}
int main(){
    Stack <char> stack;
    stack.push('a');
    stack.top();
    stack.empty();
    stack.pop();
    stack.pop();
    stack.empty();
    return 0;
}