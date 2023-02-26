#include <iostream>
using namespace std;

void sort(int arr[], int size){

    int i = 0, j = size - 1;

    while(i < j){

        while(arr[i] == 0 && i < j){
            i++;
        }

        while(arr[j] == 1 && i < j){
            j--;
        }

        swap(arr[i], arr[j]);
        i++;
        j--;
    }

}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int arr[5] = { 1, 0, 0, 1, 0};

    sort(arr, 5);
    printArr(arr, 5);

    return 0;
}