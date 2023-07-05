#include <iostream>
using namespace std;

void reverse(char name[], int n) {
    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s++], name[e--]);
    }

}

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
    reverse(name, length); 
    cout << length << endl;
    cout << "reversed name: " << name << endl;
    return 0;
}