//============================================================================
// Name        : TddTestProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <gtest/gtest.h>

using namespace std;

/*
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
*/


TEST(GTTest, SimpleAssert){
    ASSERT_TRUE(true);
}
