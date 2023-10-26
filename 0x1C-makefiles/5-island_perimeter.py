#!/usr/bin/python3
""" Documentation """

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                next_cell = [(row - 1, col), (row + 1, col),
                             (row, col - 1), (row, col + 1)]

                for c_row, c_col in next_cell:
                    if (
                            c_row < 0
                            or c_row >= rows
                            or c_col < 0
                            or c_col >= cols
                            or grid[c_row][c_col] == 0
                    ):
                        perimeter = perimeter + 1
    return perimeter
