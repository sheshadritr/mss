/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
#include <cstring>
using namespace std;

class Book
{
	private:
		char *Author;
		int Pages;
		double Price;
	public:
		
		Book( const char *ArgAuthor, int ArgPage, double ArgPrice );

		void QueryBookDetails( )
		{
			cout << "Author : " << Author << endl;
			cout << "Pages  : " << Pages  << endl;
			cout << "Price  : " << Price  << endl;
		} 
};

Book :: Book( const char *ArgAuthor, int ArgPage, double ArgPrice )
:Author((char *)malloc(strlen(ArgAuthor) + 1)) , Pages(ArgPage), Price(ArgPrice)
{
	strcpy(Author, ArgAuthor);
}

int main( )
{
	Book Rit( "Ritchie", 250, 175.00 ); 
	Book Sku( "Subhash", 600, 375.00 );


	Rit.QueryBookDetails( );
	cout << endl;
	Sku.QueryBookDetails( );	

	return 0;
}

