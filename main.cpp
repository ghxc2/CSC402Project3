#include <iostream>
#include <fstream>
#include <string>
#include "mySet.h"
#include "OrderedSet.h"
using namespace std;

int main() {
    // Create Stacks
    mySet S1, S2, S3, S4, S5, S6;
    OrderedSet OS1, OS2, OS3, OS4, OS5, OS6;

    // Reading File Name Input
    string name1, name2, name3, name4;
    cout << "Please enter a path to an input file:";
    cin >> name1;
    cout << "Please enter a path to a second input file:";
    cin >> name2;
    // Read First Two Files
    ifstream inf(name1);
    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        S1.addelt(item);
    }
    inf.close();
    inf.clear();

    inf.open(name2);
    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        S2.addelt(item);
    }
    inf.close();
    inf.clear();

    // Initial Operations
    cout << "BEFORE OPERATIONS\n";
    cout << "MySet S1 Contents\n";
    cout << "----------------\n";
    cout << S1 << "\n";

    cout << "MySet S2 Contents\n";
    cout << "----------------\n";
    cout << S2 << "\n";

    cout << "MySet S3 Contents\n";
    cout << "----------------\n";
    if (S3.getSize() == 0){
        cout << "Set is EMPTY\n";
    } else {
        cout << S3 << "\n";
    }

    // Union Operations
    S3 = S1.Union(S2);
    cout << "After UNION Operation of S1 and S2\n";
    cout << "MySet S3 Contents\n";
    cout << "----------------\n";
    cout << S3 << "\n";

    cout << "MySet S1 Contents\n";
    cout << "----------------\n";
    cout << S1 << "\n";

    cout << "MySet S2 Contents\n";
    cout << "----------------\n";
    cout << S2 << "\n";

    // Intersection Operations
    S4 = S1.Intersection(S2);
    cout << "After INTERSECTION Operation of S1 and S2\n";
    cout << "MySet S4 Contents\n";
    cout << "----------------\n";
    cout << S4 << "\n";

    cout << "MySet S1 Contents\n";
    cout << "----------------\n";
    cout << S1 << "\n";

    cout << "MySet S2 Contents\n";
    cout << "----------------\n";
    cout << S2 << "\n";

    // Difference Operations
    S5 = S1.Difference(S2);
    cout << "After DIFFERENCE Operation of S1 and S2\n";
    cout << "MySet S5 Contents\n";
    cout << "----------------\n";
    cout << S5 << "\n";

    cout << "MySet S1 Contents\n";
    cout << "----------------\n";
    cout << S1 << "\n";

    cout << "MySet S2 Contents\n";
    cout << "----------------\n";
    cout << S2 << "\n";

    // Equal
    S6 = S1.Union(S2);
    if (S3 == S6){
        cout << "S3 and S6 ARE EQUAL\n";
    } else {
        cout << "S3 and S6 ARE NOT EQUAL\n";
    }

    if (S1 == S6){
        cout << "S1 and S6 ARE EQUAL\n";
    } else {
        cout << "S1 and S6 ARE NOT EQUAL\n";
    }

    // Third file Initializing
    cout << "Please enter a path to a third input file:";
    cin >> name3;

    inf.open(name3);
    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        bool response = S1.addelt(item);
        if (response){
            cout << to_string(item) + " was successfully added to S1\n";
        } else {
            cout << to_string(item) + " ALREADY PRESENT IN S1\n";
        }
    }
    cout << "\n";
    inf.close();
    inf.clear();

    // Post Addition Check
    cout << "S1 AFTER ADDITION of elements\n";
    cout << "MySet S1 Contents\n";
    cout << "----------------\n";
    cout << S1 << "\n";

    // Fourth File Initialization
    cout << "Please enter a path to a fourth input file:";
    cin >> name4;
    inf.open(name4);

    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        bool response = S1.deleteelt(item);
        if (response){
            cout << to_string(item) + " was successfully deleted from S1\n";
        } else {
            cout << to_string(item) + " NOT FOUND\n";
        }
    }
    cout << "\n";
    inf.close();
    inf.clear();

    // Post Deletion Check
    cout << "S1 AFTER DELETION of elements\n";
    cout << "MySet S1 Contents\n";
    cout << "----------------\n";
    cout << S1 << "\n";
    cout << "\n";

    // OrderedSets
    cout << "OUTPUT FOR ORDERED SETS\n\n";

    // Reading File Name Input
    cout << "Please enter a path to an input file:";
    cin >> name1;
    cout << "Please enter a path to a second input file:";
    cin >> name2;
    // Read First Two Files
    inf.open(name1);
    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        OS1.addelt(item);
    }
    inf.close();
    inf.clear();

    inf.open(name2);
    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        OS2.addelt(item);
    }
    inf.close();
    inf.clear();

    // Initial Operations
    cout << "BEFORE OPERATIONS\n";
    cout << "OrderedSet OS1 Contents\n";
    cout << "----------------\n";
    cout << OS1 << "\n";

    cout << "OrderedSet OS2 Contents\n";
    cout << "----------------\n";
    cout << OS2 << "\n";

    cout << "OrderedSet OS3 Contents\n";
    cout << "----------------\n";
    if (OS3.getSize() == 0){
        cout << "Ordered Set is EMPTY\n";
    } else {
        cout << OS3 << "\n";
    }

    // Union Operations
    OS3 = OS1.Union(OS2);
    cout << "After UNION Operation of OS1 and OS2\n";
    cout << "MySet S3 Contents\n";
    cout << "----------------\n";
    cout << OS3 << "\n";

    cout << "OrderedSet OS1 Contents\n";
    cout << "----------------\n";
    cout << OS1 << "\n";

    cout << "OrderedSet OS2 Contents\n";
    cout << "----------------\n";
    cout << OS2 << "\n";

    // Intersection Operations
    OS4 = OS1.Intersection(OS2);
    cout << "After INTERSECTION Operation of OS1 and OS2\n";
    cout << "OrderedSet S4 Contents\n";
    cout << "----------------\n";
    cout << OS4 << "\n";

    cout << "OrderedSet OS1 Contents\n";
    cout << "----------------\n";
    cout << OS1 << "\n";

    cout << "OrderedSet OS2 Contents\n";
    cout << "----------------\n";
    cout << OS2 << "\n";

    // Difference Operations
    OS5 = OS1.Difference(OS2);
    cout << "After DIFFERENCE Operation of OS1 and OS2\n";
    cout << "OrderedSet OS5 Contents\n";
    cout << "----------------\n";
    cout << OS5 << "\n";

    cout << "OrderedSet OS1 Contents\n";
    cout << "----------------\n";
    cout << OS1 << "\n";

    cout << "OrderedSet OS2 Contents\n";
    cout << "----------------\n";
    cout << OS2 << "\n";

    // Equal
    OS6 = OS1.Union(OS2);
    if (OS3 == OS6){
        cout << "OS3 and OS6 ARE EQUAL\n";
    } else {
        cout << "OS3 and OS6 ARE NOT EQUAL\n";
    }

    if (OS1 == OS6){
        cout << "OS1 and OS6 ARE EQUAL\n";
    } else {
        cout << "OS1 and OS6 ARE NOT EQUAL\n";
    }

    // Third file Initializing
    cout << "Please enter a path to a third input file:";
    cin >> name3;

    inf.open(name3);
    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        bool response = OS1.addelt(item);
        if (response){
            cout << to_string(item) + " was successfully added to OS1\n";
        } else {
            cout << to_string(item) + " ALREADY PRESENT IN OS1\n";
        }
    }
    cout << "\n";
    inf.close();
    inf.clear();

    // Post Addition Check
    cout << "OS1 AFTER ADDITION of elements\n";
    cout << "OrderedSet OS1 Contents\n";
    cout << "----------------\n";
    cout << OS1 << "\n";

    // Fourth File Initialization
    cout << "Please enter a path to a fourth input file:";
    cin >> name4;
    inf.open(name4);

    if (!inf.good()){
        cout << "Invalid File Name(s)";
        return 0;
    }

    while (!inf.eof()){
        int item;
        inf >> item;
        bool response = OS1.deleteelt(item);
        if (response){
            cout << to_string(item) + " was successfully deleted from OS1\n";
        } else {
            cout << to_string(item) + " NOT FOUND\n";
        }
    }
    cout << "\n";
    inf.close();
    inf.clear();

    // Post Deletion Check
    cout << "OS1 AFTER DELETION of elements\n";
    cout << "OrderedSet OS1 Contents\n";
    cout << "----------------\n";
    cout << OS1 << "\n";
    cout << "\n";

    cout << "PROGRAM COMPLETE";
    return 0;
}
