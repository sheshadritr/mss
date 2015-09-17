/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
#include <cstring>

using namespace std;

class SmartPointer
{
	private:
		int *Ptr;
	public:
		SmartPointer( int Num )
		{
			Ptr = (int *)malloc( Num * sizeof(int));
			int *temp = Ptr;
			for( int i = 0; i <= 9; i++ )
			{
				*temp++ = i;
			}
		}
		int *operator ++ ( int )
		{
			return Ptr++;
		}
		int operator * ( )
		{
			return *Ptr;
		}
		
		SmartPointer * operator -> ( )
		{
			return this;
		}
		void Display( )
		{
			cout << "I am a Smart Pointer\n" ;
		}
		
};


int main( )
{
	SmartPointer Sp(10);
	
	for( int i = 0; i < 10; i++ )
	{
		cout << *Sp << endl;
		Sp++;
	}
	
	Sp->Display( );	
	return 0;
}
