#include <vector>
#include <ostream>
#pragma once
using namespace std;

class mySet {
protected:
    vector<int> elts;
    int size;

public:
    mySet();
    bool isempty() const;
    bool isfound(int x) const;
    bool addelt(int x);
    bool deleteelt(int x);
    mySet Union(mySet S);
    mySet Intersection(mySet S);
    mySet Difference(mySet S);
    bool operator==(const mySet & other);
    friend ostream& operator<<(ostream& stream, mySet& set);
    vector<int> getElts() const;
    int getSize() const;
};
