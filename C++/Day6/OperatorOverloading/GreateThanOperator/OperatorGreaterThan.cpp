/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

class GreaterThan 
{
	private:
		int a;
	public:
		GreaterThan( int x)	
		{
			a = x;
		}


		bool operator > ( GreaterThan &Gt )
		{
			return a > Gt.a;
		}

};


int main( )
{
	GreaterThan Gt1(5);
	GreaterThan Gt2(6);

	bool Result = Gt1 > Gt2;
	if( Result == true )
	{
		cout << "Gt1 is Greater" << endl;
	}
	else
	{
		cout << "Gt2 is Greater" << endl;
	}

	return 0;
}
