#include <iostream>
using namespace std;

int main(){

    int arr[6] = { 1, 2 , 3, 4, 5};

    for(int i = 0; i < 6; i += 2){
        if((i + 1) < 6){
            swap(arr[i], arr[i + 1]);
        }
    }

    for(int j = 0; j < 6; j++){
        cout << arr[j] << " ";
    }

    return 0;
}