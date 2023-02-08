Question =1
/*
#include<iostream>
#include <map>
#include <string>
using namespace std;
int main () {
   multimap<char, int> mm;
   multimap<char, int>::iterator it;
   mm.insert (pair<char, int>('a', 10));
   mm.insert (pair<char, int>('b', 20));
   mm.insert (pair<char, int>('b', 30));
   mm.insert (pair<char, int>('a', 40));
   cout<<"Size of the multimap: "<< mm.size() <<endl;
   cout << "Multimap contains:\n";
   for (it = mm.begin(); it != mm.end(); ++it)
      cout << (*it).first << " => " << (*it).second << '\n';
   for (char c = 'a'; c <= 'b'; c++) {
      cout << "There are " << mm.count(c) << " elements with key " << c << ":";
      multimap<char, int>::iterator it;
      for (it = mm.equal_range(c).first; it != mm.equal_range(c).second; ++it)
         cout << ' ' << (*it).second;
         cout << endl;
   }
   it = mm.find('b');
   mm.erase (it);
   cout<<"Size of the multimap: "<<mm.size()<<endl;
   cout << "Multimap contains:\n";
   for (it = mm.begin(); it != mm.end(); ++it)
      cout << (*it).first << " => " << (*it).second << '\n';
   return 0;
}
*\
Q=2
/*
// C++ program to demonstrate
// the working of a multimap of
// pairs.
#include <bits/stdc++.h>
using namespace std;
  
// Function to print multimap elements
void print(multimap<pair<int, int>, 
           bool>& myContainer)
{
    cout << "Key(pair of integers)" << 
            "            " << 
            "Value(boolean)\n\n";
  
    for (auto pr : myContainer)  
    {
        pair<int, int> myPair = pr.first;
  
        // pr points to current pair of myContainer
        cout << '[' << myPair.first << " , " << 
                myPair.second << ']' << 
                "                                 " << 
                pr.second << '\n';
    }
}
  
// Driver code
int main()
{
    // Declaring a multimap
    // Key is of pair<int, int> type
    // Value is of bool type
    multimap<pair<int, int>, bool> myContainer;
  
    // Creating some pairs to be used
    // as keys
    pair<int, int> pair1;
    pair1 = make_pair(100, 200);
  
    pair<int, int> pair2;
    pair2 = make_pair(200, 300);
  
    pair<int, int> pair3;
    pair3 = make_pair(300, 400);
  
    pair<int, int> pair4;
    pair4 = make_pair(100, 200);
  
    // Since each element is a pair on 
    // its own in a multimap. So, we 
    // are inserting a pair
    // Note that [] operator doesn't working 
    // in case of a multimap
    myContainer.insert(pair<pair<int, int>, 
                       bool>(pair1, true));
    myContainer.insert(pair<pair<int, int>, 
                       bool>(pair2, false));
    myContainer.insert(pair<pair<int, int>, 
                       bool>(pair3, true));
    myContainer.insert(pair<pair<int, int>, 
                       bool>(pair4, false));
  
    // Calling print function
    print(myContainer);
  
    return 0;
}
*\
Q=3
/*
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp1, mp2;
  
    // insert elements in random order
    mp1.insert({ 2, 30 });
    mp1.insert({ 1, 40 });
  
    mp2.insert({ 10, 60 });
    mp2.insert({ 9, 20 });
  
    cout << "\nThe multimap1 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // performs swap operation of two multimap
    mp1.swap(mp2);
  
    cout << "\nThe multimap1 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    return 0;
}
*\
Q=4
/*
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp1, mp2;
  
    // insert elements in random order
    mp1.insert({ 2, 30 });
    mp1.insert({ 1, 40 });
  
    mp2.insert({ 10, 60 });
    mp2.insert({ 9, 20 });
  
    cout << "\nThe multimap1 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // performs swap operation of two multimap
    mp1.swap(mp2);
  
    cout << "\nThe multimap1 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    return 0;
}
*\
Q=5
/*
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp1, mp2;
  
    // insert elements in random order
    mp1.insert({ 2, 30 });
    mp1.insert({ 1, 40 });
  
    mp2.insert({ 10, 60 });
    mp2.insert({ 9, 20 });
  
    cout << "\nThe multimap1 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // performs swap operation of two multimap
    mp1.swap(mp2);
  
    cout << "\nThe multimap1 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    return 0;
}
*\
Q=6
/*
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp1, mp2;
  
    // insert elements in random order
    mp1.insert({ 2, 30 });
    mp1.insert({ 1, 40 });
  
    mp2.insert({ 10, 60 });
    mp2.insert({ 9, 20 });
  
    cout << "\nThe multimap1 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // performs swap operation of two multimap
    mp1.swap(mp2);
  
    cout << "\nThe multimap1 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    return 0;
}
*\
Q=7
/*
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp1, mp2;
  
    // insert elements in random order
    mp1.insert({ 2, 30 });
    mp1.insert({ 1, 40 });
  
    mp2.insert({ 10, 60 });
    mp2.insert({ 9, 20 });
  
    cout << "\nThe multimap1 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // performs swap operation of two multimap
    mp1.swap(mp2);
  
    cout << "\nThe multimap1 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  
    return 0;
}
*\