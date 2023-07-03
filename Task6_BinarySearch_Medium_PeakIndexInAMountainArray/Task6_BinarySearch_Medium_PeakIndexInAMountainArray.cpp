#include <iostream>
#include <vector>

class Solution {
public:
    static int peakIndexInMountainArray(std::vector<int>& arr) {
        int left = 0, right = arr.size() - 1, middle;
        while (left <= right) {
            middle = (left + right) / 2;
            if (arr[middle] > arr[middle - 1] && arr[middle] > arr[middle + 1]) {
                return middle;
            }
            else if(arr[middle] > arr[middle + 1]){
                right = middle;
            }
            else {
                left = middle;
            }
        }
        return left;
    }
};

int main()
{
    std::vector<int> nums = { 0, 2, 1, 0 };
    std::cout << Solution::peakIndexInMountainArray(nums);
}