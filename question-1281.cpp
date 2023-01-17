#include <iostream>
using namespace std;

// question -> subtract the product and sum of digits of an integer

int main(){

    int n;

    cin >> n;

    int sum = 0;
    int product = 1;
    int temp = n;

    while(temp != 0){
        int r = temp%10;
        sum += r;
        product *= r;

        temp /= 10;
    }

    cout << product << endl;
    cout << sum << endl;
    cout << product - sum << endl;

    return 0;
}