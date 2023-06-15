#include <bits/stdc++.h> 
#include <iostream>
using namespace std;


void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n; i++){

       for(int j = 0; j < n-i; j++){
           if(arr[j] > arr[j+1]){
               swap(arr[j], arr[j+1]);
           }
       }

   }
}

int main(){
    bubbleSort({6, 2, 8, 4, 10}, 5);
}