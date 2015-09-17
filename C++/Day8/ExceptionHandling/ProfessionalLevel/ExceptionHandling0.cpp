/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
#include <csetjmp>

using namespace std;
void Func( );
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

jmp_buf State;

void Func( )
{
	TGF subhash;
	cout << "I am doing great" << endl;
	longjmp(State, 5 );
}
int main( )
{
	if( setjmp(State) == 0 )
	{
		cout << "How are you buddy" << endl;
		Func( );
	}
	else
	{
		cout << "Thank you " << endl;
	}
	return 0;
}
