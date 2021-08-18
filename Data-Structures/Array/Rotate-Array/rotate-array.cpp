#include <iostream>
#include <vector>
#include <deque>

void print(std::vector<int> vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void rotate(std::vector<int> vec, int k)
{
    std::deque<int> hold;

    k = k%vec.size();

    if(k == 0 || vec.size() == 0)
    {
        print(vec);
        return;
    }

    for(int i = vec.size()-1; i >= 0; --i)
    {
        if(i >= vec.size() -k)
        {
            hold.push_front(vec[i]);
        }
        else
        {
            vec[i+k] = vec[i];

            if(hold.size()-1 >= i)
            {
                vec[i] = hold[i];
            }
        }
    }
    print(vec);
}

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

    int k_value;
    std::cin >> k_value;
    
    rotate(vec, k_value);

    return 0;
}
