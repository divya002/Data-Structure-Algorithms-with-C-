#include <iostream>

using namespace std;
#define MAX 100

template <class T>
class Queue
{
private:
    int backend;
    int frontend;

public:
    T arr[MAX];
    Queue()
    {
        backend = -1;
        frontend = 0;
    }
    bool push(T element);
    T pop();
    bool empty();
    T front();
    T back();
};
template <class T>
bool Queue<T>::push(T element)
{
    if (backend < MAX)
    {
        arr[++backend] = element;
        return true;
    }
    return false;
}
template <class T>
T Queue<T>::pop()
{
    T x = arr[frontend];
    arr[frontend++] = -99;
    return x;
}

template <class T>
bool Queue<T>::empty()
{
    if (backend < frontend)
    {
        return true;
    }
    return false;
}

template <class T>
T Queue<T>::front()
{
    T x = arr[frontend];
    return x;
}

template <class T>
T Queue<T>::back()
{
    T x = arr[backend];
    return x;
}

int main()
{
    Queue<int> queue;
    queue.push(13);
    queue.push(45);
    queue.empty();
    queue.front();
    queue.back();
    queue.push(23);
    queue.push(345);
    queue.pop();
    queue.pop();
    queue.pop();
    for (int i = 0; i < 10; i++)
    {
        cout<<queue.arr[i]<<endl;
    }
    
    return 0;
}