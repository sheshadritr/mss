/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
#include <stdexcept>

using namespace std;

class MyException : public runtime_error
{
	public:
	MyException( const string &Message ): runtime_error( Message )
	{
	}
};

int main( )
{
	int i, j, Res;
	cout << "Enter the value of i and j" << endl;
	cin >> i >> j;

	try
	{
		if( j == 0 )
		{	
			throw MyException("Divide by zero exception" );
		}
		else
		{
			Res = i / j;
			cout << Res << endl;
		}
	}
	catch( MyException &e )
	{
		cout << e.what( ) << endl;
	}
	
}
