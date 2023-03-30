#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

map<char, int> freq;
multimap<int, char, greater<int>> MM;

void printFreq() {
    for (auto f: freq) {
        cout << f.first << " " << f.second << endl;
    }
}

void sort(map<char, int>& M)
{
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }

    cout << "Sorted frequencies" << endl;
    for (auto i: MM) {
        cout << i.second << " " << i.first << endl;
    }
}

string reorganiseStr(string &s) {
    int i = 0, j = s.length()-1;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        freq[s[i]] += 1;
    }

    int idx = 0;
    int upperBound = ceil(float(n)/2);
    sort(freq);
    multimap<int, char>::iterator itr;
    for (itr = MM.begin(); itr != MM.end(); itr++) {
        for (int j = 0; j < itr->first; j++) {
            if (itr->first > upperBound) {
                return "";
            }
            s[idx] = itr->second;
            if ((n&1 && idx == n-1) || (!(n&1) && idx == n-2)) {
                idx = 1;
            } else {
                idx+=2;
            }
        }
    }
    
    return s;
}

int main() {
    string s = "volvee";
    cout << "String: " << s << endl;
    cout << reorganiseStr(s) << endl;
    return 0;
}