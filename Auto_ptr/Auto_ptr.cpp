/*******************************************************************************
*
* FileName : Auto_ptr.cpp
* Comment  : test code for auto pointer
* Version  : 1.0
* Author   : haibindev.cnblogs.com
* Date     : 2007-10-10 1:25
*
*******************************************************************************/

#include <iostream>
#include "Auto_ptr.h"

struct st_TEST 
{
	int s32ID;
	char szChar[1024*1024];
};

int AutoPtr_main()
{
	for (int i = 0; i != 200; i++) 
	{
		st_TEST* a = new st_TEST;
		Auto_ptr<st_TEST> p(a);
		Auto_ptr<st_TEST> pTemp = p;

		std::cout << (pTemp->s32ID) << "\n";	
	}

	return 0;
}