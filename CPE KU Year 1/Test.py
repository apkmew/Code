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
def rotate_right(grid):
  li = [] 
  lin = []
  for i in range(len(grid[0])):
    for j in grid:
      lin.append(j[i])
    li.append(lin)
    lin = []
  return li

def rotate_left(grid):
  for i in range(len(grid)):
    grid[i] = grid[i][::-1]
  li = []
  lin = []
  for i in range(len(grid[0])):
    for j in grid:
      lin.append(j[i])
    li.append(lin)
    lin = []
  return li

def print_grid(grid):
  s = ''
  for j in grid:
    for i in j:
      s += i
    print(s)
    s = ''

print_grid(rotate_right(rotate_right(grid2)))