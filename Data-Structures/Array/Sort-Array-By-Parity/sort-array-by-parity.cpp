#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

void print(std::vector<int> vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

// "SOLUTION" that some guy on leetcode.com 
std::vector<int> sortArrayByParity(std::vector<int>& nums){
    int n = nums.size();
    int i=0, j=0;
    for(j = 0; j<n; j++)
        if(nums[j]%2 == 0)
            std::swap(nums[j], nums[i++]);
    return nums;
}

/* I tried this solution first because I thought it saved space complexity by not 
   creating another array.
std::vector<int> sortArrayByParity(std::vector<int>& nums){

    int numbers_pushed = 0;

    for(int i = 0; i < nums.size(); ++i)
    {

        if(nums[i]%2 != 0 && i < nums.size() - numbers_pushed)
        {
            std::cout << "is being pushed back: " << nums[i] << std::endl;
            int temp = nums[i];
            nums.push_back(temp);
            nums.erase(nums.begin()+i);

            numbers_pushed += 1;
            i -= 1;
        }
    }

    return nums;

}
*/
//Tried this second solution to see if it would run faster and it ran much faster
/*
std::vector<int> sortArrayByParity(std::vector<int>& nums){
    std::deque<int> hold;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(nums[i]%2 == 0)
        {
            hold.push_front(nums[i]);
        }
        else
        {
            hold.push_back(nums[i]);
        }
    }

    for(int j = 0; j < hold.size(); ++j)
    {
        nums[j] = hold[j];
    }

    return nums;

}
*/

int main() {

    //get size of vector
    int vector_size;
    std::cin >> vector_size;

    std::vector<int> vec;
    for(int i = 0; i < vector_size; ++i)
    {
        int temp;
        std::cin >> temp;
        vec.push_back(temp);
    }

    sortArrayByParity(vec);

    print(vec);

    return 0;
}
