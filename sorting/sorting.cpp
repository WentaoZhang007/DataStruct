/*******************************************************************************
*
* FileName : sorting.cpp
* Comment  : test code for some internal sorting algorithms
* Version  : 1.0
* Author   : haibindev.cnblogs.com
* Date     : 2007-9-27 23:03
*
*******************************************************************************/

#include <iostream>
#include "sorting.h"
#include "pthread.h"
#include "unistd.h"

int test_sort_main()
{

	int a[] = {3,34,2,5,30,1,11,22,4,8};
//	insertion_sort(a,10);
//	shellsort(a,10);
//	heapsort(a,10);
//	mergesort(a,10);
	quicksort(a,10);
	for (int i=0; i!=10; ++i)
		std::cout<<a[i]<<" ";
	std::cout<<'\n';
	return 0;
}

void shellsort(int v[],int n)
{
    int gap,i,j,temp;
    for (gap = n/2; gap > 0; gap /= 2)
    {
        for(i = gap; i < n; i++)        
        {
            for(j = i-gap; j>=0 && v[j]>v[j+gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

