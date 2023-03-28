#include <iostream>
#include <vector>
using namespace std;

void BFS(vector<vector<int> > &islands, int x, int y) {
    if (x < 0 || x >= islands.size() || y < 0 || y >= islands[x].size() || islands[x][y] == 0) {
        return;
    }

    islands[x][y] = 0;

    BFS(islands, x+1, y); // up
    BFS(islands, x-1, y); // down
    BFS(islands, x, y+1); // right
    BFS(islands, x, y-1); // left
}

int countIsland(vector<vector<int> > &islands) {
    int count = 0;

    for (int x = 0; x < islands.size(); x++) {
        for (int y = 0; y < islands[x].size(); y++) {
            if (islands[x][y]) {
                count += 1;
                BFS(islands, x, y);
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int> > islands = {
        {1,1,1,1,0},
        {1,1,0,1,0},
        {1,1,0,0,1},
        {0,0,1,0,1}
    };

    cout << countIsland(islands) << endl;

    return 0;
}