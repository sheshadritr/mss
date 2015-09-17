/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;
const int size = 10;


int main( )
{
	int i = 7;
	int *Ptr1 = new int;
	*Ptr1 = i;
	cout << "i = " << i << " *Ptr1 = " << *Ptr1 << endl;
	delete Ptr1;

	int *Ptr2 = new int(2);
	cout << "*Ptr2 = " << *Ptr2 << endl;	
	delete Ptr2;

	int n;
	cout << "Enter the value of n\n";
	cin >> n;
	
	int *Ptr3 = new int [n];
	cout << "The values are...." << endl;
	for( int i = 0; i < n; i++ )
	{
		Ptr3[i] = i;
	}
	for( int i = 0; i < n; i++ )
	{
		cout << "Ptr[" << i << "] = " << Ptr3[i] << endl;	
	}
	delete [] Ptr3;

	int **Ptr4;
	int Rows, Cols;
	cout << "Enter the value of Rows and Cols" << endl;
	cin >> Rows >> Cols;
	Ptr4 = new int * [Rows];
	for( int i = 0; i < Rows; i++ )
	{
		Ptr4[i] = new int [Cols];
	}
	cout << "The values are...." << endl;
	for( int i = 0; i < Rows; i++ )
	{
		for( int j = 0; j < Cols; j++ )
		{
			Ptr4[i][j] = i + j;
		}
	}

	for( int i = 0; i < Rows; i++ )
	{
		for( int j = 0; j < Cols; j++ )
		{
			cout << Ptr4[i][j] << " " ;	
		}
		cout << endl;
	}

	for( int i = 0; i < Rows; i++ )
	{ 
		delete [] Ptr4[i];
		cout << i << endl;
	}

	delete  Ptr4;
	return 0;
}
