#include <iostream>
using namespace std;

int main(){

    int arr[5] = { 1, 2, 3, 4, 5 };
    int s = 12;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; size; i++){
        for(int j = i + 1; j < size; j++){
            for(int k = j + 1; k < size; k++){
                if(arr[i] + arr[j] + arr[k] == s){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

    return 0;
}