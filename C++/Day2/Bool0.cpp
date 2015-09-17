/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

bool Divide ( int  &, int & );


int main( )
{
	char Answer;
	int Val1, Val2;
	bool Result;

	while( true  )
	{		
		cout << "Enter the two values" << endl;	
		cin >> Val1 >> Val2;
		
		if( (Result = Divide( Val1, Val2 )) == false )
		{
			cout << "ERROR: Division cannot be performed by zero\n";
			continue;		
		}

		cout << endl;	

		cout << "Do you want to continue ? (y/n) " << endl;
		cin >> Answer;
		
		if( Answer == 'y' )
		{
			continue;
		}
		else
		{
			cout << "Good Bye" << endl;
			break;
		}
	}

}

bool Divide ( int &x, int &y )
{
	bool Result = (y == 0 );

	if( Result == true )
		return false;
	
	cout << "Division = " << (x / y) << endl;
	return true;
}
