/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

int main( )
{
	bool Val = true;
	cout << Val << endl;	

	Val = false;
	cout << Val << endl;

	Val = 25;
	cout << Val << endl;
	
	Val = 0;
	cout << Val << endl;

	Val++;
	cout << Val << endl;

	Val++;
	cout << Val << endl;

	int Val1 = true;
	cout << Val1 << endl;
	
	Val1 = false;
	cout << Val1 << endl;
	
	Val1++;
	cout << Val1 << endl;

	Val1++;
	cout << Val1 << endl;

	cout << sizeof(Val) << endl;
	cout << sizeof(Val1) << endl;

	return 0;

}
