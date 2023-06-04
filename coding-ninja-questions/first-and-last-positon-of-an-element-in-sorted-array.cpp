#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int secondOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {

    int arr[5] = {1, 2, 3, 3, 5};

    cout << "first occurence of 2 is at index " << firstOccurence(arr, 5, 3) << endl;
    cout << "last occurence of 2 is at index " << secondOccurence(arr, 5, 3) << endl;

    return 0;
}