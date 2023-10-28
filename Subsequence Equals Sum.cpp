/*
Problem Statement: Print all the subsequences having sum = k;
*/

#include<bits/stdc++.h>
using namespace std;

void helper(int i, int k, vector<int>&num, vector<int>&temp, int sum){
    //Base cases
    if(i==num.size()){
        if(sum==k){
            for(auto x: temp){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    
    //Take
    temp.push_back(num[i]);
    helper(i+1, k, num, temp, sum+num[i]);
    //NotTake
    temp.pop_back();
    helper(i+1, k, num, temp, sum);
}





int main(){
    vector<int> num = {1,2,3,4};
    int k = 3;
    vector<int>temp;
    helper(0, k, num, temp, 0);
    
    
    return 0;
}
