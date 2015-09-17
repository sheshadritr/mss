/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

class Number
{
	private:
		int Val1;
		int Val2;
	public:
		void ShowVal( )
		{
			cout << "Val1 = " << Val1 << endl;
			cout << "Val2 = " << Val2 << endl;
		}
		Number( int x , int y )
		{
			Val1 = x;
			Val2 = y;
		}
		Number operator + ( Number &n1 )
		{
			return Number( (Val1 + n1.Val1) , (Val2 + n1.Val2)); 
		}
		Number operator += ( Number n2 )
		{
			Val1 = Val1 + n2.Val1;
			Val2 = Val2 + n2.Val2;
			return *this;
		}
		
};
