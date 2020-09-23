#ifndef __NEARESTTIMEINDEX_H__
#define __NEARESTTIMEINDEX_H__
#include <stdio.h>
#include <stdlib.h>

#endif
using namespace std;

/***********************************************************************
 * NAME : 		int NearestTimeIndex(n,Date,ut,TestDate,Testut,I)
 * 
 * DESCRIPTION : 	Locates the index of the closest time/date.
 * 
 * INPUTS : 
 * 			int		n			Total number of elements
 * 			int		*Date		Date array in the format yyyymmdd
 * 			float	*ut			UT array, in decimal hours
 * 			int		TestDate	The date we are looking for
 * 			flaot 	Testut		The time we are looking for
 *
 *
 * RETURNS :
 * 			int		I			Index of the Date/ut arrays which is the
 * 								closest time.
 * 
 * ********************************************************************/
extern "C" {
	int NearestTimeIndex(int n, int *Date, float *ut,
						int TestDate, float Testut);
}
