#include "OrderedSet.h"
#include <algorithm>
using namespace std;
OrderedSet::OrderedSet(mySet S) {
    for (int item : S.getElts()){
        addelt(item);
    }
}

OrderedSet OrderedSet::Intersection(OrderedSet OS) {
    mySet set = mySet::Intersection(OS);
    OrderedSet temp = OrderedSet(set);
    return temp;
}

void OrderedSet::SortSet() {
    sort(elts.begin(), elts.end());
}

OrderedSet OrderedSet::Union(OrderedSet OS) {
    mySet set = mySet::Union(OS);
    OrderedSet temp = OrderedSet(set);
    return temp;
}

OrderedSet OrderedSet::Difference(OrderedSet OS) {
    mySet set = mySet::Difference(OS);
    OrderedSet temp = OrderedSet(set);
    return temp;
}

bool OrderedSet::addelt(int x) {
    bool response = mySet::addelt(x);
    SortSet();
    return response;
}

bool OrderedSet::deleteelt(int x) {
    bool response = mySet::deleteelt(x);
    SortSet();
    return response;
}

