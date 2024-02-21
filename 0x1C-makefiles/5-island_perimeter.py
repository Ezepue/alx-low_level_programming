#!/usr/bin/python3
"""
Module containing
function island_perimeter(grid):
that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for row in range(rows):
        for column in range(columns):
            if grid[row][column] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][column] == 1:
                    perimeter -= 1
                if row < rows - 1 and grid[row + 1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid[row][column - 1] == 1:
                    perimeter -= 1
                if column < columns - 1 and grid[row][column + 1] == 1:
                    perimeter -= 1
    return perimeter
