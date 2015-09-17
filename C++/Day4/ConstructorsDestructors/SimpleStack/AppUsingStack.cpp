/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include "Stack.h"

int main( )
{
	Stack s;

	while(true)
	{
		int Choice;
		int Data;

		cout << "Enter 1: Push 2: Pop 3: Display 4: Exit \n";
		cin  >> Choice; 
	
		switch(Choice)
		{
			case 1: cout << "Enter the value to Push\n";
				cin  >> Data;
				if( s.Push(Data) )
				{
					cout << "Push Done" << endl;
					break;
				}
				break;
	
			case 2: Data = s.Pop( );
				if( Data == -1 )
				{
					break;
				}
				cout << Data << endl;
				break;

			case 3: if(s.Display( ))
				{
					cout << "\nDisplay Done..." << endl;
					break;
				}
				break;

			case 4: exit(0);

			default: cout << "Enter correct value\n";
				 break;
		}
	}
	return 0;
}

