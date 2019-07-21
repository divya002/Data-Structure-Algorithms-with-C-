#include<iostream>
using namespace std;
class Matrix{
    int **p;
    int d1,d2;
    public: Matrix(int x,int y);
    void set_element();
    void display_element();
   
};
Matrix::Matrix(int x,int y){
cout<<"inside contructor"<<endl;
d1=x;
d2=y;
p=new int *[d1];
for(int i=0;i<d1;i++){
    p[i]=new int[d2];
}
}
void Matrix::set_element(){
for(int i=0;i<d1;i++){
            for(int j=0;j<d2;j++){
                p[i][j]=1;
            }
        }
}
void Matrix::display_element(){
for(int i=0;i<d1;i++){
            for(int j=0;j<d2;j++){
               cout<<"Displaying [i][j] "<<"["<<i<<"]"<<"["<<j<<"]";
               cout<< p[i][j]<<endl;
            }
        } 
}
int main(){
    Matrix matrix(2,2);
    matrix.set_element();
    matrix.display_element();
    return 0;
}