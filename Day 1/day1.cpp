#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main()
{

    std::vector<int> col1, col2;
    int val1, val2;
    uint sum = 0;

    while (std::cin >> val1 >> val2)
    {
        col1.push_back(val1);
        col2.push_back(val2);
    }

    // Part 1

    // std::sort(col1.begin(), col1.end());
    // std::sort(col2.begin(), col2.end());

    // for (size_t i = 0; i < col1.size(); i++){
    //     sum += abs(col1[i] - col2[i]);
    // }

    // std::cout << "The distance is: " << sum << std::endl;

    // Part 2

    for (size_t i = 0; i < col1.size(); i++)
    {

        auto cnt = count(col2.begin(), col2.end(), col1[i]);

        if (cnt > 0)
        {
            sum += col1[i] * cnt;
        }
    }

    std::cout << "The SImilarity score is:  " << sum << std::endl;

    return EXIT_SUCCESS;
}
