#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[5] = { 1, 2, 3, 4, 5 };
    int s = 5;
    vector < vector<int> > ans;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        for(int j = i + 1; j < sizeof(arr)/sizeof(arr[0]); j++){
            if(arr[j] + arr[i] == s){
                vector <int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));

                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());

    return 0;
}