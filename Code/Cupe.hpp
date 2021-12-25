#include <iostream>
#include <algorithm>
class Cube
{
public:
	Cube()
	{
		cube.resize(8,' ');
	}
	bool setCube(std::string str)
	{
		if(str.size() > 8){return false;}
		for(int i = 0; i < str.size(); ++i)
		{
			cube[i] = str[i];
		}
		return true;
	}
	void Left()
	{
		char tmp = cube[0];
		cube[0] = cube[4];
		cube[4] = cube[5];
		cube[5] = cube[1];
		cube[1] = tmp;
		tmp = cube[2];
		cube[2] = cube[3];
		cube[3] = cube[7];
		cube[7] = cube[6];
		cube[6] = tmp;
	}
	void Right()
	{
		char tmp = cube[0];
		cube[0] = cube[1];
		cube[1] = cube[5];
		cube[5] = cube[4];
		cube[4] = tmp;
		tmp = cube[3];
		cube[3] = cube[2];
		cube[2] = cube[6];
		cube[6] = cube[7];
		cube[7] = tmp;
		
	}
	void Down()
	{
		char tmp = cube[0];
		cube[0] = cube[3];
		cube[3] = cube[7];
		cube[7] = cube[4];
		cube[4] = tmp;
		tmp = cube[1];
		cube[1] = cube[2];
		cube[2] = cube[6];
		cube[6] = cube[5];
		cube[5] = tmp;
	}
	void Up()
	{
		char tmp = cube[3];
		cube[3] = cube[0];
		cube[0] = cube[4];
		cube[4] = cube[7];
		cube[7] = tmp;
		tmp = cube[1];
		cube[1] = cube[5];
		cube[5] = cube[6];
		cube[6] = cube[2];
		cube[2] = tmp;
	
	
	}
	std::string getCube(){return cube;}
private:
	std::string cube;
};
