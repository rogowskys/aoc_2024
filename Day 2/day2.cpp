#include <iostream>
#include <vector>
#include <algorithm>

bool isSafe(std::vector<int>& singleRow){
    bool isSafe = false;

    for (size_t i = 0; i < singleRow.size(); i++){
        

    }

    return isSafe;
}


int main()
{
    std::vector<std::vector<int>> table;
    std::vector<int> row;

    int value,safeCount = 0;

    while (std::cin >> value)
    {
        row.push_back(value);
        if (std::cin.peek() == '\n')
        {
            table.push_back(row);
            for(size_t i = 0; i < row.size(); i++){
                std::cout << row[i] << " ";
            }
            std::cout << std::endl;
            row.clear();
            std::cin.ignore();
        }
    }

    for (size_t i = 0; i < table.size(); i++)
    {
        if (isSafe(table[i]))
        {
            safeCount++;
        }
    }

    std::cout << safeCount << std::endl;

    return EXIT_SUCCESS;
}