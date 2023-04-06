#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vect(8);

    fill_n(vect.begin(), 4, 7);

    for (int i = 0; i < vect.size(); ++i) {
        std::cout << ' ' << vect[i];
    }
    std::cout << '\n';

    fill_n(vect.begin() + 3, 3, 4);
    for (int i = 0; i < vect.size(); ++i) {
        std::cout << ' ' << vect[i];
    }
    std::cout << '\n';
}