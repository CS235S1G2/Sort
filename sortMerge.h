/***********************************************************************
 * Module:
 *    Week 11, Sort Merge
 *    Brother Helfrich, CS 235
 * Author:
 *    <author>
 * Summary:
 *    This program will implement the Merge Sort
 ************************************************************************/

#ifndef SORT_MERGE_H
#define SORT_MERGE_H


template <class T>
void merge(T array[], int l, int m, int r)
{
	int i, j, k; //indexes for first, second, and merged arrays
	int n1 = m - l + 1;
	int n2 = r - m;

	// temp arrays
	int L[n1], R[n2];

	// copy data
	for (i = 0; i < n1; i++)
		L[i] = array[l + i];
	for (j = 0; j < n2; j++)
		R[j] = array[m + l + j];
	i, j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			array[k] = L[i];
			i++;
		}
		else
		{
			array[k] = R[j];
			j++;
		}
		k++;
	}

	// copy the left over L[] elements
	while (i < n1)
	{
		array[k] = L[i];
		i++;
		k++;
	}

	// copy the left over R[] elements
	while (j < n2)
	{
		array[k] = R[j];
		j++;
		k++;
	}
/*	int i = 1;
	int j = iEnd2 + 1;
	int k = 1;
	while (i <= iEnd2 && j <= end2 * 2)
	{
		destination[k++] = (destination[j] < source[i]) ? destination[j++] : source[i++];

	}
	while (i <= iEnd2)
	{
		destination[k++] = source[i++];
	}
 /*  int iEnd1 = iBegin2 - 1;
   int i1 = iBegin1;
   int i2 = iBegin2;
   
   for (int iDest = 0; iDest < (iEnd2 - (iBegin1 + 1)); iDest++)
   {
      if (i1 <= iEnd1 && (12 == iEnd2 || source[i2] > source[i1]))
         destination[iDest] = source[i1++];
      else
         destination[iDest] = source[i2++];
   }*/
}

void sort(int array[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		sort(array, l, m); // sort first half
		sort(array, m + 1, r); //sort second half

		merge(array, l, m, r);
	}
}
/*****************************************************
 * SORT MERGE
 * Perform the merge sort
 ****************************************************/
template <class T>
void sortMerge(T array[], int num)
{
	sort(array, 0, num - 1);
  /* T source[] = array;
   
   do
   {
      
   } while (numMerges > 1);
   
   if (array != source)
   {
      for (int i = 0; i < n - 1; i++)
         array[i] = source[i];
   }*/
   
}



#endif // SORT_MERGE_H
