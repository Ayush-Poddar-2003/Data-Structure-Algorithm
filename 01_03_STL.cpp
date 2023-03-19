#include <bits/stdc++.h>
using namespace std;
int main()
{/*

 ♥  What is C++ STL?
    STL - standard template library.
    It contains a lot of pre-defined templates in terms of containers & classes makes it very easy to implement different data structures.

    -----------------------------------------

 ♥  1. PAIRS
    To combine 2 values that may be of different data types,
    Generally used to store tuples.
    The pair container is defined in <utility> header.

    SYNTAX : pair <DT1, DT2> Pair_name             */

    pair<int, char> P1; // Declaring a pair

    P1.first = 100;  // first part of the pair
    P1.second = 'G'; // second part of the pair

    cout << P1.first << " ";
    cout << P1.second << endl;

    /*-----------------------------------

    PAIR INITIALIZATION METHODS

    1. pair (data_type1, data_type2) Pair_name (value1, value2)
    2. pair  g1; // default
    3. pair  g2(1, 'a'); // initialized,  different data type
    4. g2 = {1, 'a'};
    5. g2 = make_pair(1, 'a');
    6. pair  g4(g3);     // copy of g3 */

    pair<int, double> P3;
    cout << P3.first;  // Default initialised to 0
    cout << P3.second; // Default initialised to 0

    pair<string, char> P4;
    cout << P4.first;  // Default initialised to NULL
    cout << P4.second; // Default initialised to NULL

    /* --------------------------------------


 ♥  VECTORS
    Vectors in STL are dynamic arrays that have ability to change size Automatically.
    A vector stores elements in contiguous memory locations.*/

    vector<int> v;     // Vector Declared
    v.push_back(1);    // 1 inserted
    v.emplace_back(2); // 2 inserted "faster"

    vector<pair<int, int>> vec; // vector created
    vec.push_back({1, 5});      // pair inserted
    vec.emplace_back(2, 6);     // pair inserted

    vector<int> v2(5); // Shortcut for insertion

    vector<int> v3(5, 20); // 5 times 20
    vector<int> v4(v3);    // v4 same as v3

    cout << v4[2] << endl;

    /*------------------------------------------------

♥   ACESSING VECTOR ELEMENTS USING ITERATORS
    An iterator is an object (like a pointer) that points to an element inside the container.*/

    vector<int>::iterator it = v4.begin();
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";


    vector<int> v5;

    for (int i = 0; i < 10; i++)
    {
        v5.push_back(i); // inserting elements in the vector
    }
    cout << "the elements in the vector: ";
    for (auto it = v5.begin(); it != v5.end(); it++)
        cout << *it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: "  << v.back();
    cout << "\nThe size of the vector: "          << v.size();
    cout << "\nDeleting element from the end: "   << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();

    return 0;
}
