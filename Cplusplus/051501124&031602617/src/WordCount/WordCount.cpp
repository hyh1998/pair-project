#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "CountWords.h"
#include "arg_handle.h"
using namespace std;

extern string inputFilename;
extern int inputPos;
int main(int argc, char **argv)
{
	//int ret = Argv_handle(argv);
	ifstream input;
	input.open("test.txt");
	if (input.fail())
	{
		cout << "error" << endl;
	}
	CountWord("test.txt", 0);
	
	/*for (int i = 0; i < 10; i++)
	{
		getline(input, temp);
		if (temp[0] >= '0'&& temp[0] <='9')
			continue;
		if (temp.substr(0, 7) == "Title: ")
		{
			cout << "this is Title start" << endl;
			temp = temp.substr(7, temp.length());
		}
		if (temp.substr(0, 10) == "Abstract: ")
		{
			cout << "this is Abstract start" << endl;
			temp = temp.substr(10, temp.length());
		}
		cout << temp << endl;
	}*/
	
	
	
	
	return 0;
}