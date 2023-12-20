#!/usr/bin/python3
""" This function  that returns the
perimeter of the island."""


def island_perimeter(grid):
    """ This function  that returns the
    perimeter of the island."""

    i = 0
    h = 0
    w = 0

    for x in grid:
        for y in x:
            if y == 1:
                i = i + 1
        if i > 0:
            h = h + 1
            if i > 1:
                w = w + i
        i = 0

    return (w + h) * 2
