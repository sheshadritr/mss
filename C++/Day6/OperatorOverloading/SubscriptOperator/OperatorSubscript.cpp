/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

const int size = 10;
class Subscript
{
	private:
		int Arr[size];		
	public:
		
		int &operator[ ] (int i )
		{
			return (Arr[i]);	
		}
		void StoreVal( int i )
		{
			Arr[i] = i;
		}
};

int main( )
{
	Subscript Sub;

	for( int i = 0; i < size; i++ )
	{
		Sub.StoreVal( i );
	}	
	
	for( int i = 0; i < size; i++ )
	{
		cout << Sub[i] << endl;
	}
		

	return 0;
}
