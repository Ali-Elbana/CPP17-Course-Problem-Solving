
#include <iostream>
#include <cmath>

using namespace std ;

int max_of_3(int num1, int num2, int num3) ;

int path_sum(int grid[100][100], int ROWS, int COLS, int row = 0, int col = 0 ) ;

int main() 
{
    // Write C++ code here
    int grid[100][100] ;
    int ROWS, COLS ;
    
    std::cin >> ROWS >> COLS ;
    
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            std::cin >> grid[i][j];
        }
    }

    int max_path_sum = path_sum( grid, ROWS, COLS ) ;
    
    std::cout << "Maximum path sum: " << max_path_sum << std::endl ;

    return 0;
}

int max_of_3(int num1, int num2, int num3) 
{
    
  int max_num = max( num1, num2 ) ;
  
  if (num3 > max_num) 
  {
    max_num = num3 ;
  }

  return max_num ;
  
}

int path_sum(int grid[100][100], int ROWS, int COLS, int row, int col ) 
{
    
    if( row == ROWS - 1 && col == COLS - 1 ) 
    {
        return grid[row][col] ;
    }
    
    if( row == ROWS - 1 ) 
    {
        return grid[row][col] + path_sum( grid, ROWS, COLS, row, col + 1 ) ;
    }
    
    if( col == COLS - 1 ) 
    {
        return grid[row][col] + path_sum(grid, ROWS, COLS, row + 1, col ) ;
    }
    
    if (row < 0 || col < 0) 
    {
        return -1;
    }
    
    int right       = grid[row][col] + path_sum( grid, ROWS, COLS, row, col + 1 ) ;
    int down        = grid[row][col] + path_sum( grid, ROWS, COLS, row + 1, col ) ;
    int diagonal    = grid[row][col] + path_sum( grid, ROWS, COLS, row + 1, col + 1 ) ;
    
    return max_of_3( right, down, diagonal ) ;

}











