#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int>& arr, int size, int key){
	int start = 0;
	int end = size - 1;

	int ans = -1;

	while(start <= end){
	int mid = start + (end - start)/2;
		if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		}else if(arr[mid] > key){
			end = mid - 1;
		}else{
			start = mid + 1;
		}
		
	}
	return ans;
}

int secondOccurence(vector<int>& arr, int size, int key){
    int start = 0;
    int end = size - 1;

    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}



int count(vector<int>& arr, int n, int x) {
	int first = firstOccurence(arr, n, x);
	if(first == -1) return 0;
	int second = secondOccurence(arr, n, x);
	return (second - first) + 1;
}

int main(){



    return 0;
}