#include <iostream>
#include <vector>
#include <string>


//my first attempt and what I submitted
/*bool isMonotonic(std::vector<int>& nums) {

    int mon_inc = 0;
    int mon_dec = 0;

    for(int i =0, j=1; j < nums.size(); i++, j++)
    {
        if(nums[i] <= nums[j])
        {
            mon_inc++;
        }

        if(nums[i] >= nums[j])
        {
            mon_dec++;
        }
    }
    if(nums.size()-1 == mon_inc || nums.size()-1 == mon_dec)
    {
        return true;
    }
    else
    {
        return false;
    }
}*/

//after reading this seems to be a better solution
bool isMonotonic(std::vector<int>& nums){

    bool mon_inc = true;
    bool mon_dec = true;

    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i-1] > nums[i])
        {
            mon_inc = false;
        }

        if(nums[i-1] < nums[i])
        {
            mon_dec = false;
        }
    }

    return mon_inc || mon_dec;
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
    std::cout << isMonotonic(vec) << std::endl;

    return 0;
}
