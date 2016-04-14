#ifndef SCAN_H
#define SCAN_H
#include<queue>
#include<string>
using namespace std;
class Scan
{
public:
    queue<string> ToStr(string s);
private:
    string input;
    string kong="";       
    queue<string>Str;  
};

#endif
