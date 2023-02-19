#include <iostream>
using namespace std;

int main(){

    int arr[5] = { 1, 1, 2, 2, 3 };

    int ans = 0;

    for(int i = 0; i < 5; i++){
        ans = ans ^ arr[i];
    }

    cout << "Unique element in this array is: " << ans;

    return 0;
}