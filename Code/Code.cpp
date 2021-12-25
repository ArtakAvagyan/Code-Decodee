#include <iostream>
#include <string>
#include "Cupe.hpp"

int main()
{
	std::string str;
	std::cout<< "please enter text " <<std::endl;
	getline(std::cin,str);
	int k = ((str.size() / 8) +1);
	Cube* cupe = new Cube[k];
	std::string* sp = new std::string[k];
	for(int i = 0; i < k ; ++i)
	{
		std::cout << "please enter the code for " << (i+1) <<std::endl;
		std::cout << "for Left : L \n for Right : R \n for Up : U \n for Down : D "<<std::endl;
		std::cin>> sp[i];
	}
	for(int i = 0 ; i < k ; ++i)
	{
		std::string tmp = str.substr(0,8);
		std::cout<< tmp << std::endl;
		cupe[i].setCube(tmp);

		for(int j = 0 ; j < sp[i].size() ;++j)
		{
			if(sp[i][j] == 'L')
			{
				cupe[i].Left();
			}
			else if(sp[i][j] == 'R')
			{
				cupe[i].Right();
			}
			else if(sp[i][j] == 'U')
			{
				cupe[i].Up();
			}
			else if(sp[i][j] == 'D')
			{
				cupe[i].Down();
			}
		}
		tmp.clear();
		str.erase(0,8);
	}
	std::cout<< "CODE  : ";
	for(int i = 0 ; i < k ; ++i)
	{
		std::cout<< i+1<< sp[i];
	}
	std::cout<<std::endl;
	for(int i = 0 ; i < k ; ++i)
	{
		std::cout<< cupe[i].getCube();
	}
	std::cout<<std::endl;
}
