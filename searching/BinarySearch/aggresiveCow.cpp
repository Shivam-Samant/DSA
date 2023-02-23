#include<bits/stdc++.h>
using namespace std;

int isPossible(vector<int> &stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i = 0; i < stalls.size(); i++) {
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int n = stalls.size();
    int end = stalls[n-1];
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
	vector<int> stalls = {87, 93, 51, 81, 68, 99, 59};
	int k = 4;
	cout << "The largest possible minimum distance between cows is " << aggressiveCows(stalls, k) << endl;
}