/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#ifndef __STACK__
#define __STACK__
#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX = 10;
template <class T>
class Stack
{
        private:
                int TopOfStack;
                T Arr[MAX];
        public:
		Stack( );
                void Push(T);
                T Pop( );
                bool Display( );
};

template <class T>
Stack <T>:: Stack( )
{
	TopOfStack = -1;
}

template <class T>
void Stack <T> :: Push(T Data )
{
	if( TopOfStack == MAX - 1)
	{
		cerr << "STACK IS FULL" << endl;
	}
	Arr[++TopOfStack] = Data;
	
}

template <class T>
T Stack <T> :: Pop( )
{
	if( TopOfStack == -1 )
	{
		cerr << "STACK IS EMPTY" << endl;	
		return -1;
	}	

	return Arr[TopOfStack--];
} 

template <class T>
bool Stack <T> :: Display( )
{
	if( TopOfStack == -1 )
	{
		cerr << "STACK IS EMPTY" << endl;
		return false;	
	}

	for( int i = 0; i <= TopOfStack; i++ )
	{
		cout << Arr[i] << " " ;
	}
	cout << endl;
	return true;
}

#endif
