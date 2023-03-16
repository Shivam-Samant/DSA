#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define testcases \
  ll T;           \
  cin >> T;       \
  while (T--)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define fd(i, a, b) for (ll i = a; i > b; i--)
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define pb push_back
#define pii pair<int, int>
#define mk make_pair
#define all(p) p.begin(), p.end()
#define si set<int>
#define mii map<int, int>
#define endl '\n'

void printData(vector<vector<float>> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    for (int j = 0; j < data[i].size(); j++)
    {
      cout << data[i][j] << " ";
    }
    cout << endl;
  }
}

void printTable(vector<vector<float>> table)
{
  for (int i = 0; i < table.size(); i++)
  {
    for (int j = 0; j < table[i].size(); j++)
    {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int main()
{
  vector<vector<float>> data = {{1, 2}, {2, 3.5}, {3, 4.9}, {4, 6.2}, {5, 7}};

  printData(data);

  cout << "--------------------------------------------" << endl;

  int epochs;
  cout << "Enter number of epochs: ";
  cin >> epochs;
  float slope = 1.3, intercept = -0.1, learningRate = 0.06;
  cout << "slope: " << slope << endl;
  cout << "intercept: " << intercept << endl;
  cout << "learningRate: " << learningRate << endl
       << endl;

  while (epochs--)
  {
    vector<vector<float>> table; // colums  (1) y^   (2) y^ -y    (3) (y^ -y) x   (4) (y^ -y)^2

    float yCapTotal = 0, yCapMinusYTotal = 0, yCapMinusYxTotal = 0, yCapMinusYsquareTotal = 0;

    for (int i = 0; i < data.size(); i++)
    {
      vector<float> temp;
      float yCap = slope * data[i][0] + intercept;
      float yCapMinusY = yCap - data[i][1];
      float yCapMinusYx = yCapMinusY * data[i][0];
      float yCapMinusYsquare = pow(yCapMinusY, 2);

      yCapTotal += yCap;
      yCapMinusYTotal += yCapMinusY;
      yCapMinusYxTotal += yCapMinusYx;
      yCapMinusYsquareTotal += yCapMinusYsquare;

      temp.push_back(yCap);
      temp.push_back(yCapMinusY);
      temp.push_back(yCapMinusYx);
      temp.push_back(yCapMinusYsquare);
      table.push_back(temp);
    }

    cout << "Table: " << endl;
    cout << "y^   y^ -y    (y^ -y) x   (y^ -y)^2" << endl;
    printTable(table);

    float cost = yCapMinusYsquareTotal / (2 * data.size());
    float deltaSlope = yCapMinusYxTotal / data.size();
    float deltaIntercept = yCapMinusYTotal / data.size();

    slope = slope - (learningRate * deltaSlope);
    intercept = intercept - (learningRate * deltaIntercept);

    cout << "yCapTotal: " << yCapTotal << endl;
    cout << "yCapMinusYTotal: " << yCapMinusYTotal << endl;
    cout << "yCapMinusYxTotal: " << yCapMinusYxTotal << endl;
    cout << "yCapMinusYsquareTotal: " << yCapMinusYsquareTotal << endl;
    cout << "cost: " << cost << endl;
    cout << "deltaSlope: " << deltaSlope << endl;
    cout << "deltaIntercept: " << deltaIntercept << endl;
    cout << "slope: " << slope << endl;
    cout << "intercept: " << intercept << endl;

    cout << endl << endl;
  }

  return 0;
}