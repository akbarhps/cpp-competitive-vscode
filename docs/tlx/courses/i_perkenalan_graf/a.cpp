/**
 * Created by akbar on 8/11/2021.
 */

#include <bits/stdc++.h>

using namespace std;

#define SetIO()                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

template <typename T>
inline void Scan(T &var)
{
    cin >> var;
}

template <typename T, typename... Args>
inline void Scan(T &var, Args &&...args)
{
    Scan(var);
    if (sizeof...(args))
        Scan(args...);
}

struct Cell
{
    int x, y;
    bool isObstacle;
    bool isDoor = false;
    bool isVisited = false;
    Cell *parent = nullptr;

    Cell(int &x, int &y, bool isObstacle) : x(x), y(y), isObstacle(isObstacle) {}

    vector<Cell *> findNeighbors(int &row, int &col, vector<vector<Cell>> &grid)
    {
        this->isVisited = true;
        vector<Cell *> neighbors;
        if (y > 0)
        {
            Cell *current = &grid[y - 1][x];
            if (!current->isVisited && !current->isObstacle)
            {
                current->isVisited = true;
                current->parent = this;
                neighbors.push_back(current);
            }
        }
        if (x > 0)
        {
            Cell *current = &grid[y][x - 1];
            if (!current->isVisited && !current->isObstacle)
            {
                current->isVisited = true;
                current->parent = this;
                neighbors.push_back(current);
            }
        }
        if (x < col - 1)
        {
            Cell *current = &grid[y][x + 1];
            if (!current->isVisited && !current->isObstacle)
            {
                current->isVisited = true;
                current->parent = this;
                neighbors.push_back(current);
            }
        }
        if (y < row - 1)
        {
            Cell *current = &grid[y + 1][x];
            if (!current->isVisited && !current->isObstacle)
            {
                current->isVisited = true;
                current->parent = this;
                neighbors.push_back(current);
            }
        }
        return neighbors;
    }
};

Cell *dfs(int &row, int &col, vector<vector<Cell>> &grid, vector<Cell *> &currentSet);
int &traceSteps(Cell *door);

int main()
{
    SetIO();

    int row, col;
    Scan(row, col);

    vector<vector<Cell>> grid;

    for (int y = 0; y < row; y++)
    {
        vector<Cell> colCell;
        for (int x = 0; x < col; x++)
        {
            int isObstacle;
            Scan(isObstacle);
            colCell.emplace_back(x, y, isObstacle == -1);

            if (isObstacle == 0 && (y == 0 || x == 0 || x == col - 1 || y == row - 1))
            {
                colCell[x].isDoor = true;
            }
        }
        grid.push_back(colCell);
    }

    int startY, startX;
    Scan(startY, startX);

    vector<Cell *> currentSet = {&grid[startY - 1][startX - 1]};
    Cell *door = dfs(row, col, grid, currentSet);
    cout << traceSteps(door) << endl;

    return 0;
}

Cell *dfs(int &row, int &col, vector<vector<Cell>> &grid, vector<Cell *> &currentSet)
{
    if (currentSet.size() < 1)
    {
        return nullptr;
    }

    vector<Cell *> nextSet;
    for (Cell *cell : currentSet)
    {
        if (cell->isDoor)
            return cell;

        vector<Cell *> neighbors = cell->findNeighbors(row, col, grid);
        nextSet.insert(end(nextSet), begin(neighbors), end(neighbors));
    }

    return dfs(row, col, grid, nextSet);
}

int &traceSteps(Cell *door)
{
    int steps = 0;
    while (door != nullptr)
    {
        steps++;
        door = door->parent;
    }
    return steps;
}