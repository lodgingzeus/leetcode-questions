#include <iostream>
using namespace std;

int main(){

    int arr1[5] = { 1, 2, 2, 3, 3};
    int arr2[5] = { 2, 2, 3, 4, 5};

    int i = 0, j = 0;

    while(i < sizeof(arr1)/sizeof(arr1[0]) && j < sizeof(arr2)/sizeof(arr2[0])){

        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if( arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return 0;
}