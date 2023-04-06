#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// BASE CLASS      DERIVED CLASS     ACCESS MODE
// public           public            public
// public           protected         protected
// public           private           private
// protected        public            protected
// protected        protected         protected
// protected        private           private
// private          public            not accessible
// private          protected         not accessible
// private          private           not accessible


// example of public base class and public/protected/private derived class
class Animal {
    public:
    int age;
};

class Dog: private Animal {
    public:
    int weight;
    int getAge() {
        return this->age;
    }
};

int main() {
    Dog d;
    // public mode
    // cout << d.age << endl; // ACCESSIBLE -> if we extend the animal class in public mode but its print garbage value
    // protected mode
    // cout << d.age << endl; // NOT ACCESSIBLE -> if we extend the animal class in protected mode we can't access it directily from other classes else derived
    // cout << d.getAge() << endl; // ACCESSIBLE -> we can access the data members and methods in derived class
    // private mode
    // cout << d.age << endl; // NOT ACCESSIBLE -> if we extend the animal class in private mode we can't access it directily from other classes else derived
    cout << d.getAge() << endl; // ACCESSIBLE -> we can access the data members and methods in derived class

    return 0;
}