/***********************************************************************
 * Module:
 *    Week 11, Sort Insertion
 *    Brother Helfrich, CS 235
 * Author:
 *    Nathan Bench, Jed Bilman, Jeremy Chandler, Justin Chandler
 * Summary:
 *    This program will implement the Insertion Sort
 ************************************************************************/

#ifndef SORT_INSERTION_H
#define SORT_INSERTION_H

#include <cassert>


template <class T>
int binarySearch(T array[], T search, int iBegin, int iEnd)
{
   int iMiddle = iBegin + ((iEnd - iBegin) / 2);
   
   if (iBegin >= iEnd)
      return iBegin;
   if (array[iMiddle] == search)
      return iMiddle;
   
   if (search > array[iMiddle])
      return binarySearch(array, search, iMiddle + 1, iEnd);
   else
      return binarySearch(array, search, iBegin, iMiddle - 1);
}

/*****************************************************
 * SORT INSERTION
 * Perform the insertion sort
 ****************************************************/
template <class T>
void sortInsertion(T array[], int num)
{
   int iShift;
   for (int iPivot = num - 1; iPivot > 0; --iPivot)
   {
      T valuePivot = array[iPivot];
      int iInsert = binarySearch(array, valuePivot, iPivot + 1, num - 1);
      iInsert--;
      for (iShift = iPivot; iShift >= iInsert; iShift--)
      {
         array[iShift] = array[iShift - 1];
      }
      array[iShift] = valuePivot;
   }
}


#endif // SORT_INSERTION_H
