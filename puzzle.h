#ifndef PUZZLE_H
#define PUZZLE_H

#include <vector>

class Puzzle
{
    private:
        std::vector<std::vector<int>> puzzle_board;

    public:
        void printPuzzle();
        int findEmptyCell();
        bool solvePuzzle();
        bool isValidEntry();
};

#endif