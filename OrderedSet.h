#include "mySet.h"
#pragma once
using namespace std;

class OrderedSet : public mySet{
public:
    OrderedSet()=default;
    OrderedSet(mySet S);
    OrderedSet Intersection(OrderedSet OS);
    OrderedSet Union(OrderedSet OS);
    OrderedSet Difference(OrderedSet OS);
    void SortSet();
    bool addelt(int x);
    bool deleteelt(int x);
};
