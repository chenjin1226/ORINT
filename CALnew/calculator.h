#ifndef CALCULATOR_H
#define CALCULATOR_H
#include"scan.h"
#include<stack>
#include<string>
#include<queue>
#include<sstream>
class Calculator
{
	public:
		   void P(queue<string> s);
		   int Conver(char opr);
		   double Ope(double a,char op,double b);
	bool IsOP(char c)
	{
		if(c=='+'||c=='-'||c=='*'||c=='/'||c=='('||c==')'||c=='#')
		  return true;
		  else
		  return false;
	};


	private:
			stack<double>num;
	         stack<char>ope;
	       const char Oper[7][7]={
		                    {'>', '>', '<', '<', '<', '>', '>'},  
                            {'>', '>', '<', '<', '<', '>', '>'},
                            {'>', '>', '>', '>', '<', '>', '>'},   
                            {'>', '>', '>', '>', '<', '>', '>'},  
                            {'<', '<', '<', '<', '<', '=', ' '},   
                            {'>', '>', '>', '>', ' ', '>', '>'},   
                            {'<', '<', '<', '<', '<', ' ', '='}
						                                       };
		
    	
};

#endif
