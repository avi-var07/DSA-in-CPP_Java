#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        
            if((n/i)!=i)
            arr.push_back(n/i);
        }
    }

    sort(arr.begin(),arr.end());

    for(auto i:arr)
    cout<<i<<" ";
    return 0;
}