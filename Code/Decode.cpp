#include <iostream>
#include <string>
#include "Cupe.hpp"

int main()
{
	std::string str;
	std::string code;
	std::cout<< "please enter text " <<std::endl;
	getline(std::cin,str);
	std::cout << "please enter the code for " <<std::endl;
	getline(std::cin,code);
	int k = ((str.size() / 8) +1);
	Cube* cupe = new Cube[k];
	for(int i = 0 ; i < k ; ++i)
	{
		std::string tmp = str.substr(0,8);
		cupe[i].setCube(tmp);
		tmp.clear();
		str.erase(0,8);
	}
	int a = 0;
	for(int i = 0 ; i < code.size() ;++i)
	{
		if(code[i] > '0' && code[i]< '9')
		{
			a = (code[i]-'0')-1;
			while(code[i+1] > '0' && code[i+1]< '9')
			{
				a = a*10+((code[i++]-'0')-1);
			}
			continue;
		}
		if(code[i] == 'L')
		{
			cupe[a].Right();
		}
		else if(code[i] == 'R')
		{
			cupe[a].Left();
		}
		else if(code[i] == 'U')
		{
			cupe[a].Down();
		}
		else if(code[i] == 'D')
		{
			cupe[a].Up();
		}
	}
	std::string result;
	for(int i = 0 ; i < k ; ++i)
	{
		result += cupe[i].getCube();
	}
	std::cout<<result <<std::endl;
}
