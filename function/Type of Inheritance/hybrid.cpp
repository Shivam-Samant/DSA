#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// mixture of all inheritance types (single, multi, heirarchical) is called hybrid inheritance

class School {
    public:
    string name;
};

class Student {
    public:
    int totalStudents;
};

class SVM: public School, public Student {
    public:
    int fee;
};
class KV: public School {
    public:
    int fee;
};

int main() {
    SVM svm;
    svm.name = "Saraswati Vidya Mandir";
    svm.totalStudents = 1000;
    svm.fee = 5000;
    cout << svm.name << endl;
    cout << svm.totalStudents << endl;
    cout << svm.fee << endl;
    return 0;
}