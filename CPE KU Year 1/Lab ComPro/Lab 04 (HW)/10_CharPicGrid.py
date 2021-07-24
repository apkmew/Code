grid1 = [['.','.','.','.','.','.'],
        ['.','o','o','.','.','.'],
        ['o','o','o','o','.','.'],
        ['o','o','o','o','o','.'],
        ['.','o','o','o','o','o'],
        ['o','o','o','o','o','.'],
        ['o','o','o','o','.','.'],
        ['.','o','o','.','.','.'],
        ['.','.','.','.','.','.']]

grid2 = [['.','.','.','.','.','.','.'],
        ['.','.','.','.','.','.','.'],
        ['.','.','.','.','o','.','o'],
        ['o','o','.','o','.','o','.'],
        ['o','o','o','o','o','.','.'],
        ['o','o','.','o','.','o','.'],
        ['.','.','.','.','o','.','o'],
        ['.','.','.','.','.','.','.'],
        ['.','.','.','.','.','.','.']]

def rotate_left(grid) :
    newrow = len(grid[0])
    newcolumn = len(grid)
    newGrid = [['.']*newcolumn for i in range(newrow)]
    for i in range(newrow) :
        for j in range(newcolumn) :
            newGrid[i][j] = grid[j][newrow-i-1]
    return newGrid

def rotate_right(grid) :
    newrow = len(grid[0])
    newcolumn = len(grid)
    newGrid = [['.']*newcolumn for i in range(newrow)]
    for i in range(newrow) :
        for j in range(newcolumn) :
            newGrid[i][j] = grid[newcolumn-j-1][i]
    return newGrid

def print_grid(grid) :
    row = len(grid)
    column = len(grid[0])
    for i in range(row) : 
        for j in range(column) :
            print(grid[i][j],end='')
        print('')
