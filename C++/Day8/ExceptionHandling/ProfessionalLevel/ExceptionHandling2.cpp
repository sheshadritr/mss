/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
/*Stack Unwinding*/
using namespace std;
void Func1( );
void Func2( );
void Func3( );

class TGF
{
	public:
		TGF( )
		{	
			cout << "TGF Constructor" << endl;
		}
		~TGF( )
		{
			cout << "TGF Destructor" << endl;
		}
};


void Func1( )
{
	TGF subhash;
	cout << "I am in Func1" << endl;
	Func2( );
	throw 6; 
}
void Func2( )
{
	TGF subhash;
	cout << "I am in Func2" << endl;
	Func3( );
}
void Func3() 
{
	TGF subhash;
	cout << "I am in Func3" << endl;
	throw 8;
}
int main( )
{
	try
	{
		cout << "Where are you" << endl;
		Func1( );
	}
	catch( int )
	{
		cout << "Ok, Fine, Exception Caught" << endl;
	}
	
	return 0;
}
