/***********************************************************************
 * Module:
 *    Week 11, Sort Heap
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Heap Sort
 ************************************************************************/

#ifndef SORT_HEAP_H
#define SORT_HEAP_H

template <class T>
class Heap
{
	public:
		Heap(): mySize(0), data(NULL) {};
		Heap(T array[], int numItems) {
			try
			{
				data = new T[numItems + 1];
				mySize = numItems + 1;
			}
			catch (std::bad_alloc)
			{
				throw "ERROR: Unable to allocate buffer";
			}
			data[0] = NULL;
			for (int i = 0; i < mySize; i++)
			{
				data[i + 1] = array[i];
			}
		};
		~HEAP() { if (mySize) delete[] data; };
		bool empty() { if (mySize == 0) return true; else return false; };
		T getMax() { return data[1]; };
		void deleteMaxItem();
		Heap heapify();
		void sort();
		void perlocateDown();
	private:
		T * data;
		int mySize;

};
/*****************************************************
 * SORT HEAP
 * Perform the heap sort
 ****************************************************/
template <class T>
void sortHeap(T array[], int num)
{
   
}


#endif // SORT_HEAP_H

template<class T>
inline void Heap<T>::deleteMaxItem()
{
}

template<class T>
inline Heap Heap<T>::heapify()
{
	return Heap();
}

template<class T>
inline void Heap<T>::sort()
{
}

template<class T>
inline void Heap<T>::perlocateDown()
{
}
