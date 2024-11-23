//
// Created by Wendy on 22/11/2024.
//

#include "History.h"
#include <iostream>

using namespace std;

void History::addRecord(const string& record)
{
    records.push_back(record);
}

void History::showHistory()
{
    cout<<"Historial de operaciones";
    for(auto& record : records)
    {
        cout<<record<<endl;
    }
}
