#include <iostream>
using namespace std;
void reverse(char name[], int n) {
    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s++], name[e--]);
    }

}
int main(){



    return 0;
}