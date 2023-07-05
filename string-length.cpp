#include <iostream>
using namespace std;

int getLength(char c[]){
    int ans = 0;
    for(int i = 0; c[i] != '\0'; i++){
        ans++;
    }
    return ans;
}

int main() {

    char name[20] = "summer";

    int length = getLength(name);

    cout << length << endl;

    return 0;
}