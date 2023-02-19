#include <iostream>
using namespace std;

int main() {

    int temp = 0;
    int ans = 0;
    int arr[5] = { 1, 2, 3, 3, 4,};

    // for(int i = 0; i < 5; i++){
    //     temp = temp ^ arr[i];
    //     if(temp == 0){
    //         ans = arr[i];
    //     }
    // }

    //another method

    //XOR all array elements

    for(int i = 0; i < 5; i++){
        ans = ans ^ arr[i];
    }

    //xor [1, n-1]

    for(int i = 0; i < 5; i++){
        ans = ans ^ i;
    }

    cout << "Duplicate in this array is: " << ans << endl;

    return 0;
}