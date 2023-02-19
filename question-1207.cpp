#include <iostream>
using namespace std;

int main(){
        int arr[6] = { 1, 2, 3, 4, 5, 5 };
        int ans = 0;
        int size = sizeof(arr)/sizeof(arr[1]);
        cout << size << endl;
        for(int i = 0; i < size; i++){
            ans = arr[i] ^ ans;
        }

        if(ans != 0) cout << "true";
        else cout << "false";

    return 0;
}