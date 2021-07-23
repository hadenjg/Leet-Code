#include <string>
#include <iostream>

int main()
{
    int x = 12213;
    std::string int_str = std::to_string(x);
    int str_length = int_str.length();

    std::cout << "String length: " << str_length << std::endl;

    std::string reverse_string;
    for(int i= str_length-1; i >= 0; i--)
    {
        reverse_string.push_back(int_str[i]); 
    }

    std::cout << reverse_string << std::endl;
    return 0;
}
