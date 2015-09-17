/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

/*
#include <stdio.h>

void SortBooks( );
void IssueBooks( );
void CheckBookPrice( );
void Login( );

struct Book
{
	int Pages;
	double Price;
};
struct Book Rit = { 250, 175.00 },
	Yk = { 500, 250.00 };



int main( )
{
	SortBooks( );	
	IssueBooks( );
	CheckBookPrice(  );
	Login( );
	CheckBookPrice(  );
	return 0;
}

void SortBooks( )
{
	//Some code goes here 	
}

void IssueBooks( )
{
	// Some code goes here 
}

void Login( )
{
	// Some login related code   
	
	Rit.Price = 450.00;	// Bug is here 
}

void CheckBookPrice ( )
{
	printf( "Ritchie price is = %f\n", Rit.Price );
}


*/

/*
#include <iostream>

struct Book
{
	private:
		int Pages;
		double Price;
	public:
		Book( int x, int y )
		{
			Pages = x;
			Price = y;
		}

		void SortBooks( )
		{
			// Some code goes here 
		}
      		void IssueBooks( )
		{
			// Some code goes here 
		}
       		void CheckBookPrice(  )
		{
			// Some code goes here 
		}	
};

struct Book Rit ( 250, 175.00 ), Yk ( 500, 250 );

int main( )
{
	Rit.SortBooks( );	
	Rit.IssueBooks( );
	Rit.CheckBookPrice(  );
	Login( );
	Rit.CheckBookPrice(  );
}

void Login( )
{
	// Some login code goes here 
	
	Rit.Price = 450.00;	// Bug is here 
}
*/

