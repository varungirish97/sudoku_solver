#include "puzzle.h"

const int NUM_ROWS      =   9;
const int NUM_COLUMNS   =   9;

int main()
{
    std::vector<std::vector<int>> puzzle = {
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0},
                                                {0,0,0,     0,0,0,      0,0,0}
                                            };
    Puzzle myPuzzle(puzzle);
    myPuzzle.printPuzzle();

    return 0;
}