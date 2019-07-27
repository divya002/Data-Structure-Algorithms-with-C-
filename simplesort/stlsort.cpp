#include "../stdc++.h"

using namespace std;
bool compare(int x,int y){
        return x>y;
    }
int main(){
    int A[]={1,2,3,6,7,4,5,8};
    int n=sizeof(A)/sizeof(A[0]);
    
    sort(A+0,A+n,compare);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}