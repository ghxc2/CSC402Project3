#include "mySet.h"
using namespace std;

mySet::mySet() {
    size = 0;
}

bool mySet::isempty() const{
    return (size == 0);
}

bool mySet::isfound(int x) const {
    for (int item : elts){
        if (item == x){
            return true;
        }
    }
    return false;
}

bool mySet::addelt(int x) {
    if (isfound(x)){
        return false;
    }
    size++;
    elts.insert(elts.begin(), x);
    return true;
}

bool mySet::deleteelt(int x) {
    if (!isfound(x)){
        return false;
    }

    int counter = 0;
    for (int item : elts){
        if (item == x){
            elts.erase(elts.begin() + counter);
            size--;
            return true;
        }
        counter++;
    }

    return false;
}

mySet mySet::Union(mySet S) {
    mySet newSet;
    for (int item : this->elts) {
        newSet.addelt(item);
    }
    for (int item: S.elts){
        newSet.addelt(item);
    }
    return newSet;
}

mySet mySet::Intersection(mySet S) {
    mySet newSet;
    for (int item : this->elts){
        if(S.isfound(item)){
            newSet.addelt(item);
        }
    }
    return newSet;
}

mySet mySet::Difference(mySet S) {
    mySet newSet;
    for (int item : this->elts){
        if (!S.isfound(item)){
            newSet.addelt(item);
        }
    }
    return newSet;
}

bool mySet::operator==(const mySet &other) {
    if (getSize() != other.getSize()){
        return false;
    }

    for (int item : this->elts){
        if (!other.isfound(item)){
            return false;
        }
    }

    for (int item : other.elts){
        if (!this->isfound(item)){
            return false;
        }
    }
    return true;
}

ostream &operator<<(ostream &stream, mySet &set) {
    string output = "{ ";
    int counter = 0;
    for (int item : set.elts){
        if (counter >= 10){
            output += "\n";
            counter = 0;
        }
        output += to_string(item);
        if (item != set.elts.back()){
            output += ", ";
        }
        counter++;
    }
    output += " }\n";
    stream << output;
    return stream;
}

vector<int> mySet::getElts() const{
    return elts;
}

int mySet::getSize() const{
    return size;
}
