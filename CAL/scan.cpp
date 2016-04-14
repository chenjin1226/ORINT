#include "scan.h"
#include<iostream>
#include<string>
#include<cctype>
#include<queue>
using namespace std;


queue<string> Scan::ToStr(string s)
{
    input=s;
    int i;
    for(i=0;i<input.size();i++)                            
            {
                if(!isdigit(input[i])&&input[i]!='.')      
                {
                    if(!kong.empty())
                        Str.push(kong);                      
                    kong.clear();                                 
                    kong=input[i];                          
                    if(!kong.empty())
                    Str.push(kong);
                    kong.clear();
                }
                else if(isdigit(input[i])||input[i]=='.')                
                {
                    kong=kong+input[i];                           
                    continue;
                }
            }
    if(!kong.empty())
    {
        Str.push(kong);                                        
    }
    return Str;                                               
}

