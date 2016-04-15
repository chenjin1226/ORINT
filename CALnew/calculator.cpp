#include "calculator.h"
#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<cctype>
using namespace std;



    int Calculator::Conver(char opr)
    {
    	int t;
    	switch(opr)
    	{
    		case '+':
    		     t=0;
    		     break;
    		case '-':
    			t=1;
    			break;
    		case '*':
    			t=2;
    			break;
    		case '/':
			    t=3;
			    break;
			case '(':
				t=4;
				break;
			case ')':
				t=5;
				break;
			case '#':
			    t=6;
				break;	
    	}
    	return t;
    }
    double Calculator::Ope(double a,char op,double b)
    {
    	double c;
    	switch(op)
    	{
    		case '+':
    			c=a+b;
    			break;
    		case '-':
    			c=a-b;
    		    break;
    		case '*':
    			c=a*b;
    			break;
    		case '/':
    			c=a/b;
    			break;
    	}
    	return c;
    }
    void Calculator::P(queue<string>s)
    {
    	double number; 
    	ope.push('#');
        num.push(0);
    	while(s.front()[0]!='#'||ope.top()!='#')
    	{
    		
    		
    		if(!IsOP(s.front()[0]))
    		{
    			stringstream stream;
    			stream<<s.front();
    			stream>>number;
    			num.push(number);
    			s.pop();
    		}
    	   else
    		{
    			
    			char ot;
    			ot=Oper[Conver(ope.top())][Conver(s.front()[0])];
    			if(ot=='<')
    			{
    				ope.push(s.front()[0]);
    				s.pop();
    			}
    			else if(ot=='>')
    			{
    				double num1=num.top();
    				num.pop();
    				double num2=num.top();
    				num.pop();
    				char ch=ope.top();
    				ope.pop();
    				num.push(Ope(num2,ch,num1));
    			}
    			else if(ot=='=')
    			{
    				ope.pop();
    				s.pop();
    			}
    		}
    	    
    	}
    	
    	if(num.top()=='-0')
    	{
    		num.top()=0;
    	}
    	cout<<num.top();
    }

		

