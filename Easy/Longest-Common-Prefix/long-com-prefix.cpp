#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> strs{"aac", "cab", "abb"};

    int vec_size = strs.size();
    std::string first_string = strs[0];
    int string_size = first_string.size();
    std::vector<std::size_t> num_matching_prefix;
    std::size_t temp = std::string::npos;
    for(int i = 0; i < vec_size; i++)
    {
        std::cout << strs[i] << std::endl;
        for(int j = 0; j < string_size; j++)
        {
            //returns the location that the character is found
            std::size_t location = strs[i].find_first_of(first_string[j],j);
            //if the character is found in the string, and it is in the same position as the first string


            if(location != j)
            {
                break;
            }
            else 
            {
                std::cout << "LOCATION: " << location << std::endl;
                std::cout << "J: " << j << std::endl;
 
                temp = location;
            }
        }
        //keep track of the location of the last matching characters
        num_matching_prefix.push_back(temp);
        temp = std::string::npos;
    }

    //looking for the location that has the least amount of matches
    std::size_t lowest_possible = num_matching_prefix[0];
    for(auto x : num_matching_prefix)
    {

        std::cout << x << std::endl;
        //if a word didn't have any matching characters, break out of the loop and return value ""
        if(x == std::string::npos)
        {
            lowest_possible = std::string::npos;
            break;
        }
        else
        {
            if(x < lowest_possible)
            {
                lowest_possible = x;
            }
        }
    }

    std::string common_prefix;
    if(lowest_possible == std::string::npos)
    {
        common_prefix = "";
    }
    else
    {
        common_prefix = first_string.substr(0, lowest_possible+1);
    }

    std::cout << "The common prefix is: " << common_prefix << std::endl;
    return 0;
}
