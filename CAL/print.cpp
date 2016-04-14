#include "print.h"
#include<iostream>
#include<string>
#include<queue>
using namespace std;

void Print::P(queue<string>s)
{
   int lon=s.size();
   int i;            
    for(i=1;i<=lon;i++)             
    {
        cout <<s.front()<<endl;
        s.pop();
    }

}
