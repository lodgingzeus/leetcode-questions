#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int secondLarge(int n, vector<int> a){
    if(n < 2) return -1;
    int large = INT_MIN;
    int secondLarge = INT_MIN;

    for(int i = 0; i < n; i++){
        if(a[i] > large){
            secondLarge = large;
            large = a[i];
        }else if(a[i] > secondLarge && a[i] != large){
            secondLarge = a[i];
        }
    }

    return secondLarge;
}

int secondSmall(int n, vector<int> a){
    if(n < 2) return -1;
    int small = INT_MAX;
    int secondSmall = INT_MAX;

    for(int i = 0; i < n; i++){
        if(a[i] < small){
            secondSmall = small;
            small = a[i];
        }else if( a[i] < secondSmall && a[i] != small){
            secondSmall = a[i];
        }
    }

    return secondSmall;

}

vector<int> getSecondOrderElements(int n, vector<int> a) {

    int small = secondSmall(n, a);
    int large = secondLarge(n, a);

    return {large, small};
}


int main(){

    return 0;
}