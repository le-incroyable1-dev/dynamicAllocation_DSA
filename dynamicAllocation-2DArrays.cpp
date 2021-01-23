// DYNAMIC ALLOCATION : 2D ARRAYS

#include <iostream>
#include <stdio.h>

using namespace std;

void main()
{
  int m,n;
  cin >> m >> n;    //    enter number of rows and columns
  
  int **p = new int *[m];   //    create an array of integer pointers which represent the rows of the 2D array. 
  
  for (int i = 0; i < m; i++)
  {
    p[i] = new int [n];   //    each row is allocated memory in the heap dynamically so that it can now contain n integers.
    
    for (int j = 0; j < n; j++)
    {
      cin >> p[i][j];    //   after allocating the required memory, the integers are entered.
    }
  }
  
  //    any time memory is allocated in the heap, it must be cleared manually. 
  //    memory allocated on the stack is cleared automatically according to the scope.
  
  for (int i = 0; i < m; i++)
  {
    delete [] p[i];   //    clears the memory occupied by each array of integers / row.
  }
  
  delete [] p;  //    clears the array of integer pointers p. 
  
  }
