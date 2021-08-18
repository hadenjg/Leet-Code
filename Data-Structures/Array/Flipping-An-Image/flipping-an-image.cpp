#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<std::vector<int>> vec)
{

    std::cout << "OUTPUT=============" << std::endl;
    int size = vec.size();
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {

    //since the 2d array is nxn the same size can be used for both loops
    int size = image.size();
    for(int i = 0; i < size; ++i)
    {
        std::reverse(image.at(i).begin(), image.at(i).end());
        for(int j = 0; j < size; ++j)
        {
            image[i][j] ^= 1;
        }
    }
    return image;
}



int main() {

    //get size of vector
    int vector_size;
    std::cin >> vector_size;

    std::vector<std::vector<int>> vec;
    for(int i = 0; i < vector_size; ++i)
    {
        std::vector<int> temp_vector;
        for(int j = 0; j < vector_size; ++j)
        {
            int temp;
            std::cin >> temp;
            temp_vector.push_back(temp);
        }
        vec.push_back(temp_vector);
    }

    flipAndInvertImage(vec);

    print(vec);

    return 0;
}
