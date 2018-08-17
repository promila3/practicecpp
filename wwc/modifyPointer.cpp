// Example program
#include <iostream>
#include <string>

using namespace std; 
// Modifying the pointer. 
void update(int **q)
{
  
  cout << *q << endl;
  (*q)++;
  cout << *q << endl;
}

int main()
{
 
  
  int d = 10;
  int *pi = &d;
  void* pv = pi;
  
  char *pd1 = static_cast<char*>(pv);
  double *pd3 = static_cast<double*>(pv);
  
  
  int a[3] = {0,1, 2};
  
  int *p = a;
  
  cout << *p << endl;
  update(&p);
  cout << *p << endl; 
}

// http://cpp.sh/5sw27
