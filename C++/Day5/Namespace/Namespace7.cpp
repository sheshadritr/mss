/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

namespace SKU
{
	int i = 6;
	void Function1( )
	{
		cout << "Hello World\n";
	}
}

namespace SKU
{
	int j = 7;
	void Function2( )
	{
		cout << "Hi World\n";
	}
}

int main( )
{
	using namespace SKU;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
	
	Function1( );
	Function2( );

	return 0;
}
