#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string test;

    std::ifstream myfile ("test.txt");
    if(myfile.is_open())
    {
        while(getline(myfile,test))
        {

            int string_length = test.length();

            std::cout << "The string is: " << test << std::endl;

            if(test[0] != '(' && test[0] != '{' && test[0] != '[')
            {
                std::cout << "Starting character is: " << test[0] << std::endl;
                std::cout << "Invalid character start" << std::endl;
                return 1;
            }

            if(string_length%2 != 0)
            {
                std::cout << "there is a character without a match" << std::endl;
                return 1;
            }

            for(int i =0; i < string_length; i++)
            {
                for(int j=1; j < string_length; j++)
                {

                    if(test[i] == '(')
                    {
                        if(test[j] == ')')
                        {
                            break;
                        }
                        if(test[j] == '}' || test[j] == ']')
                        {
                           for(int k=i; k < j; k++)
                           {
                               if(test[k]
                           
                           std::cout << "TEST[j] is: " << test[j] << std::endl;
                           std::cout << "mismatch for )" << std::endl;
                           //return false
                           return 1;
                        } 
                    }
                    if(test[i] == '{')
                    {
                        if(test[j] == '}')
                        {
                            break;
                        }
                        if(test[j] != '(' && test[j] != '[')
                        {
                           std::cout << "TEST[j] is: " << test[j] << std::endl;
                           std::cout << "mismatch for }" << std::endl;
                           //return false
                           return 1;
                        } 
                    }
                    if(test[i] == '[')
                    {
                        if(test[j] == ']')
                        {
                            break;
                        }
                        if(test[j] != '(' && test[j] != '{')
                        {
                           std::cout << "TEST[j] is: " << test[j] << std::endl;
                           std::cout << "mismatch for ]" << std::endl;
                           //return false
                           return 1;
                        } 
                    }
                }
            }
        }
    }

        std::cout << "EVERYTHING IS OK" << std::endl;
        return 0;
}
