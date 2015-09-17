/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
using namespace std;

void func1( );
void func2( );
void func3( );
class Base
{
};


void func1( )
{
	cout << "Inside func1" << endl;
	func2( );
	throw ;
}

void func2( )
{
	try
	{
		cout << "Inside func2" << endl;
		func3( );
	}
	catch ( Base )
	{
		cout << "Throw in func2" << endl;
		throw; //re-throwing exception
	}
}

void func3( )
{
	cout << "Inside func3" << endl;
	throw Base( );
}

int main( )
{
	try
	{
		func1( );
	}
	catch( Base )
	{
		cout << "Base" << endl;
	}
}
