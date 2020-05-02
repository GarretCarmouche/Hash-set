#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int hashNum(int x){
    int y = x % 9;
    return y;
}

int insertNumber(int x, list<int> table[9]){
    int numHash = hashNum(x);
    table[numHash].push_front(x);
}

int printTable(list<int> table[9]){
    for(int i = 0; i < 9; i++){
        list<int> :: iterator it;
        cout<<i<<": ";
        for(it = table[i].begin(); it != table[i].end(); it++){
            if(it != table[i].begin())
                cout<<"->";
            cout<<(*it);
        }
        cout<<endl;
    }
}

int main(){
    list<int> table[9];
    insertNumber(7, table);
    insertNumber(24, table);
    insertNumber(18, table);
    insertNumber(52, table);
    insertNumber(36, table);
    insertNumber(54, table);
    insertNumber(11, table);
    insertNumber(23, table);

    printTable(table);
}