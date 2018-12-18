#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;

class HashTable{
    public:
        //Constructor
        //Pre: size must be a prime number.
        //Post: Creates a HashTable with the size size.
        HashTable(int size = 13);

        //Destructor
        //Pre: none.
        //Post: The HashTable is destroyed.
        ~HashTable();

        //Inserts string
        //Pre: none.
        //Post: item is placed in the HashTable.
        void insert(const string &item);

        //Operator overload for <<
        //Pre: none.
        //Post: prints out the specified HashTable.
        friend ostream &operator <<(ostream &out, const HashTable &htable);

    private:
        //The HashTable
        vector<list<string>> htable;
        int tableSize;
};

