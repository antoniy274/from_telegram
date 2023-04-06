#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib> 

int random_func(int j)
{
    return std::rand() % j;
}

int main()
{
    std::srand(unsigned(time(0)));
    std::vector <int>arr;

    //set some values:
    //установим некоторые значения:
    for (int j = 1; j < 10; ++j)
    {
        // 1 2 3 4 5 6 7 8 9
        arr.push_back(j);
    }

    //using built-in random generator
    //используя встроенного генератора случайных чисел
    random_shuffle(arr.begin(), arr.end());
    
    //using random_func
    //используя random_func
    random_shuffle(arr.begin(), arr.end(), random_func);

    //print out content
    //отобразить содержимое
    std::cout << "arr contains:";
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        std::cout << ' ' << *i;
    }
    std::cout << std::endl;
}

