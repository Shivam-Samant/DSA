#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> &maze, vector<vector<int>> &visited, int x, int y) {
  if ((x < maze.size() && x >= 0) && (y >= 0 && y < maze.size()) && visited[x][y] != 1 && maze[x][y] == 1) {
    return true;
  }

  return false;
}

void solve(vector<vector<int>> &maze, vector<vector<int>> &visited, vector<string> &ans, int x, int y, string path) {
  if (x == maze.size()-1 && y == maze[0].size()-1) {
    ans.push_back(path);
    return;
  }

  visited[x][y] = 1;

  if (isSafe(maze, visited, x+1, y)) {
    path.push_back('D');
    solve(maze, visited, ans, x+1, y, path);
    path.pop_back();
  }

  if (isSafe(maze, visited, x, y+1)) {
    path.push_back('R');
    solve(maze, visited, ans, x, y+1, path);
    path.pop_back();
  }

  if (isSafe(maze, visited, x-1, y)) {
    path.push_back('U');
    solve(maze, visited, ans, x-1, y, path);
    path.pop_back();
  }

  if (isSafe(maze, visited, x, y-1)) {
    path.push_back('L');
    solve(maze, visited, ans, x, y-1, path);
    path.pop_back();
  }
  visited[x][y] = 0;
}

int main() {
  vector<vector<int>> maze{
    {1,0,1,1},
    {1,1,1,1},
    {0,1,0,1},
    {0,1,1,1},
    {0,0,1,1}
  };

  vector<vector<int>> visited(maze.size(), vector<int>(maze[0].size(), 0));

  int srcX = 0;
  int srcY = 0;

  vector<string> ans;
  solve(maze, visited, ans, srcX, srcY, "");

  for (auto s: ans) {
    cout << s << endl;
  }
  return 0;
}