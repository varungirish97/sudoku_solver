#ifndef PUZZLE_H
#define PUZZLE_H

#include "sudoku.h"

class Puzzle
{
    private:
        std::vector<std::vector<int>> puzzle_board;
        std::vector<std::vector<std::vector<int*>>> grids;
    public:
        Puzzle(std::vector<std::vector<int>> sudoku);
        void loadPuzzle(std::vector<std::vector<int>> sudoku);
        void makeGrids();
        int getGridIdx(int row, int column);
        void printPuzzle();
        bool findEmptyCell(int &row, int &column);
        bool solvePuzzle();
        bool isValidEntry(int row, int column, int num);
};

#endif