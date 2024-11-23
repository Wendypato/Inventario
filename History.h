//
// Created by Wendy on 22/11/2024.
//

#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include <list>

using namespace std;



class History {
private:
    list<string> records;

public:
    void addRecord(const string& record);
    void showHistory();


};



#endif //HISTORY_H
