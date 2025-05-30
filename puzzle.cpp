#include "sudoku.h"

void printPuzzle(std::vector<std::vector<int>> puzzle)
{
    int i = 0;
    for(const auto &row : puzzle)
    {
        if (i % 3 == 0)
            std::cout << " -----------------------"<< std::endl;
        int j = 0;

        std::cout << "| ";
        
        for(int num : row)
        {
            std::cout << num << " ";
            if((j+1) % 3 == 0)
                std::cout << "| ";
            j +=1;
        }
        std::cout << "\n";
        i +=1;
    }
    std::cout << " -----------------------"<< std::endl;
}