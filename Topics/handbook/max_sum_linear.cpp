#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define e 1e-9
int main(){

    int array[8]={-1,2,4,-3,5,2,-5,2};
    int sum=0,i,j,best=0,k,n=8;
    for(i=0;i<n;i++){
        sum=max(sum+array[i],array[i]);
        best=max(sum,best);
        }
    cout<<best;
    return 0;
}