#include<bits/stdc++.h>
using namespace std;

vector<int> findMinElementAndPosition(vector<int> arr){

    if (arr.empty()) {
        return {-1, -1}; // handle separately
    }

    int minEle = INT_MAX;
    int pos = 0;

    for(int i = 0; i<arr.size(); i++){

        if(minEle > arr[i] ){

            minEle = arr[i];

            pos = i;
        }
    }


    return {minEle , pos+1};
}


int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i =0; i<arr.size(); i++){
        cin>>arr[i];
    }

    vector<int> ans = findMinElementAndPosition(arr);
    cout<<ans[0]<<" ";
    cout<<ans[1]<<" ";

    return 0;

}