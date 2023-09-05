#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int max = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){



    return 0;
}
