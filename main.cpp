#include <iostream>
#include <fstream>
#include "HashTable.h"

using namespace std;

int main() {
    cout << "Please enter a filename: " << endl;
    ifstream fileObj;
    string myfile;
    cin >> myfile;
    fileObj.open(myfile);
    if(!fileObj)
        return 1;

    HashTable expHash;
    string word;
    while(fileObj >> word){
        expHash.insert(word);
    }
    fileObj.close();

    cout << "The file has the following HashTable: " << endl;
    cout << expHash;

    return 0;
}
