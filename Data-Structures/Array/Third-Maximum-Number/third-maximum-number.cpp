#include <iostream>
#include <vector>
#include <string>
#include <climits>


int thirdMax(std::vector<int>& nums){

    long long third = LLONG_MIN;
    long long second = LLONG_MIN;
    long long first = LLONG_MIN;

    for(int i = 0; i < nums.size(); i++)
    {
        if(third < nums[i] && nums[i] != second && nums[i] != first)
        {
            third = nums[i];
        }

        if(second < third)
        {
            std::swap(second, third);
        }

        if(first < second)
        {
            std::swap(first, second);
        }

    }

    if(third != LLONG_MIN)
    {
        return third;
    }
    else
    {
        return first;
    }
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
    std::cout << thirdMax(vec) << std::endl;

    return 0;
}
