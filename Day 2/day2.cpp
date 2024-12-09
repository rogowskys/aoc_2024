#include <iostream>
#include <vector>
#include <algorithm>

bool isSafe(std::vector<int>& singleRow){
    bool flow = NULL;  // False = decreasing, True = increasing

    for (size_t i = 0; i < singleRow.size(); i++){
        if (singleRow[i] > singleRow[i+1]){
            flow = false;
            break;
        }
        else if (singleRow[i] < singleRow[i+1]){
            flow = true;
            break;
        }
    }


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
            row.clear();
            std::cin.ignore();
        }
    }





    return EXIT_SUCCESS;
}