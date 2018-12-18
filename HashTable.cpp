#include "HashTable.h"
using namespace std;

//Constructor
//Pre: size must be a prime number.
//Post: Creates a HashTable with the size size.
HashTable:: HashTable(int size): htable(size), tableSize(size){};

//Destructor
//Pre: none.
//Post: The HashTable is destroyed.
HashTable:: ~HashTable(){};

//Inserts string
//Pre: none.
//Post: item is placed in the HashTable.
void HashTable:: insert(const string &item){
    int key;
    for(int i = 0; i < item.length() && i < 3; i++){
        key += int(item[i]);
    }
    key = key % tableSize;
    htable[key].push_front(item);
};

//Operator overload for <<
//Pre: none.
//Post: prints out the specified HashTable.
ostream& operator <<(ostream &out, const HashTable &hTableObj){
    for(int i = 0; i < hTableObj.htable.size(); i++){
        cout << i << ": ";
        for (list<string>::const_iterator it = hTableObj.htable[i].begin(); it != hTableObj.htable[i].end(); it++){
            cout << *it << '\t';
        }
        cout << endl;
    }
}
