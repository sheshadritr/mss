/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
using namespace std;
void function2( );
namespace Subhash 
{
	int i;
	void function1( )
	{	
		cout << "Hello function\n";
	}
}

int main( )
{
	using namespace Subhash ; //using directive
	i = 6;
	cout << "i = " << i << endl;
	function1( );
	function2( );
	
	return 0;
}
void function2( )
{
	i = 6;
	function1( );
}
