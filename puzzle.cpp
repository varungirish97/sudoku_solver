#include "puzzle.h"

//extern const int NUM_ROWS;
//extern const int NUM_COLUMNS;

Puzzle::Puzzle(std::vector<std::vector<int>> sudoku)
{
    puzzle_board = std::vector<std::vector<int>> (9, std::vector<int>(9,0));
    loadPuzzle(sudoku);
    makeGrids();
}

void Puzzle::makeGrids()
{
    /* Resize the grids vector */
    grids.resize(9);
    for(int a = 0; a < 9; a++)
    {
        grids[a].resize(3);
        for(int b = 0; b < 3; b++)
        {
            grids[a][b].resize(3);
        }
    }

    /* Logic to copy references to the puzzle board into the newly created grids */
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            int gridIdx = row * 3 + column;
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    grids[gridIdx][i][j] = &puzzle_board[row * 3 + i][column * 3 + j];
                }
            }
        }
    }
}

int Puzzle::getGridIdx(int row, int column)
{
    int gridRow = row / 3;
    int gridCol = column / 3;
    return gridRow * 3 + gridCol;
}

void Puzzle::loadPuzzle(std::vector<std::vector<int>> sudoku)
{
    int row, col;
    for(row = 0; row < 9; row++)
    {
        for(col = 0; col < 9; col++)
        {
            puzzle_board[row][col] = sudoku[row][col];
        }
    }
}

void Puzzle::printPuzzle()
{
    int i = 0;
    for(const auto &row : puzzle_board)
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

bool Puzzle::isValidEntry(int row, int column, int num)
{
    /* Three conditions for an entry to be considered as a vaid entry:
    1. num should not be present in the same row
    2. num should not be present in the same column
    3. num should not be present in the same grid */
    /* ROW CHECK */
    for(int c = 0; c < 9; c++)
    {
        if(puzzle_board[row][c] == num)
            return false;
    }
    
    /* COLUMN CHECK */
    for(int r = 0; r < 9; r++)
    {
        if(puzzle_board[r][column] == num)
            return false;
    }

    /* GRID CHECK */
    int gridIdx = getGridIdx(row, column);
    for(int i = 0; i < 9; i++)
    {
        if(grids[gridIdx][i] == num)
            return false;
    }
    return true;
}

bool Puzzle::findEmptyCell(int &row, int &column)
{
    /*Traverse the entire puzzle board to find which is the next empty location in the sudoku
    Assumption is that empty location in the Sudoku is marked with a 0*/

    for(int r = row; r < 9; r++)
    {
        for(int c = column; c < 9; c++)
        {
            if(puzzle_board[r][c] == 0)
            {
                row = r;
                column = c;
                return true;
            }
        }
        return false;
    }
}

bool Puzzle::solvePuzzle()
{
    
}