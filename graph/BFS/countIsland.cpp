#include <iostream>
#include <vector>

using namespace std;

void BFS(vector<vector<int> > &islands, vector<vector<int> > &visited, int x, int y) {
    if ((x < 0 || x >= islands.size()) || (y < 0 || y >= islands[x].size()) || visited[x][y] == 1 || islands[x][y] == 0) {
        return;
    }
    visited[x][y] = 1;

    if (islands[x][y]) {
        BFS(islands, visited, x+1, y);
        BFS(islands, visited, x-1, y);
        BFS(islands, visited, x, y+1);
        BFS(islands, visited, x, y-1);
    }
}

int countIsland(vector<vector<int> > &islands, vector<vector<int> > &visited) {
    int count = 0;

    for (int x = 0; x < islands.size(); x++) {
        for (int y = 0; y < islands[x].size(); y++) {
            if (islands[x][y] && visited[x][y] == 0) {
                count += 1;
                BFS(islands, visited, x, y);
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int> > islands = {
        {1,1,1,1,0},
        {1,1,0,1,0},
        {1,1,0,0,0},
        {0,0,1,0,1}
    };

    vector<vector<int> > visited(islands.size(), vector<int> (islands[0].size(), 0));

    cout << countIsland(islands, visited) << endl;

    return 0;
}