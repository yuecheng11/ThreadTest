 ///
 /// @file    TestThread.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-18 11:22:07
 ///
 
#include "TestThread.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <iostream>

using std::cout;
using std::endl;

namespace wd
{

void TestThread::run()
{
	srand(time(NULL));
	while(true)
	{
		int num = rand() % 100;
		cout << "num = " << num << endl;
		sleep(1);
	}
}

}// end of namespace wd
