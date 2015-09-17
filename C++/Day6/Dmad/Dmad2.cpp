/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>

using namespace std;
const int size = 10;

class Dmad
{
	private:
		int a;
		int b;
		char Arr[size];
	public:
		Dmad( )
		{
			a = 5;
			b = 5;
			memset(Arr, '+', size);
		}
		~Dmad( )
		{
			cout << "Destructor called\n";
		}
		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
			for(int i = 0; i < size; i++ )
			{
				cout << "Arr[" << i << "] = " << Arr[i] << endl;
			}
		}
};

int main( )
{
	Dmad *Ptr;
	Ptr = new Dmad;
	
	Ptr->Display( );	

	delete Ptr;	
	return 0;
}
