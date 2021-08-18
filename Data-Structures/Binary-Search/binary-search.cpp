#include <iostream>
#include <vector>


//i had never done a binary search before so this answer was based off of other answers and not of 
//my own accord
int search(std::vector<int>& nums, int target){

    int right = nums.size() -1;
    int left = 0;

    while(left <= right)
    {

        int middle = left + (right - left)/2;

        if(nums[middle] == target)
        {
            return middle;
        }

        if(nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {

    int size_of_array;
    std::cin >> size_of_array;

    int temp;
    std::vector<int> vec;
    for(int i =0; i < size_of_array; i++)
    {
        std::cin >> temp;
        vec.push_back(temp);
    }

    int target;
    std::cin >> target;

    std::cout << search(vec, target) << std::endl;

    return 0;
}
