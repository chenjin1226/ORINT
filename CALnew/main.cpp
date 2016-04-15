#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<cctype>
#include"scan.h"
#include"calculator.h"
#include<sstream>
using namespace std;

             
int main(int argc,char *argv[])
{
    
	string s;
    cin>>s;
   int i,a=0;                     
    for(i=1;i<=s.size();i++)
    {
        if(isdigit(s[i]))
        {
            a++;
        }
    }
    if(a>10)
    {
        cout<<"ERROR"<<endl;
        return 0;                  
    }
    else  if(a<=10)                          
    {
        Scan scan;                      
		Calculator calculator;                   
        queue<string> b= scan.ToStr(s);        
        calculator.P(b);                               
        return 0;
    }
}

