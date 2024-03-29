#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + (high - low)/2;

        while(low <= high){
            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }

            mid = low + (high - low)/2;
        }
        return low;
    }
};
int main(){



    return 0;
}