#!/usr/bin/python3
def island_perimeter(grid):
    """return perimeter from the island"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            start = 4
            if grid[i][j] == 1 and i != len(grid) and grid[i + 1][j] == 1:
                start -= 1
            if grid[i][j] == 1 and i != 0 and grid[i - 1][j]:
                start -= 1
            if grid[i][j] == 1 and j != len(grid[i - 1]) and grid[i][j + 1]:
                start -= 1
            if grid[i][j] == 1 and j != 0 and grid[i][j - 1]:
                start -= 1
            if grid[i][j] == 1:
                perimeter += start
    return perimeter
