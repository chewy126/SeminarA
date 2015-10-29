// Seminar A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "SeminarA.h"

int main()
{
	std::vector<std::string> y;
	y = SDI::readFile("mytext.txt");
	for (unsigned int i = 0; i < y.size(); i++)
	{
		std::cout << y[i]  << "\n";

	}
	
	return 0;
}

namespace SDI
{
	std::vector<std::string> readFile(const std::string fileName)
	{
		std::vector<std::string> testVec;
		std::string str;
		std::ifstream mFile;
		mFile.open(fileName);

		while (getline(mFile, str))
		{
			testVec.push_back(str);
		}
		return testVec;
	}
}

