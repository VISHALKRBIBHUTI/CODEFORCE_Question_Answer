#include<iostream>
using namespace std;

long long NaturalSum(int N){

    long long sum = 0;
   
    sum = 1LL * N * (N + 1) / 2;

    return sum;
}


int main(){

    int N;
    cin>>N;

    cout<< NaturalSum(N)<<'\n';

    return 0;
}