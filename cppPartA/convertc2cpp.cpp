#include <iostream>
#include <vector>

using namespace std;

/* Convert this program to C++

* change to C++ io

* change to one line comments

* change defines of constants to const

* change array to vector<>

* inline any short function

*/

const int N = 40;
// sum : returns the sum in p, of the n elements in the vector d 
inline void sum(int &p, int n, vector<int> d)

{

	int i;

	p = 0;

	for(i = 0; i < n; ++i)

		p  += d[i];

}

int main()

{

	int i;

	int accum = 0;

	vector<int> data;

	for(i = 0; i < N; ++i)

		data.push_back(i);

		sum(accum, N, data);


	cout << "sum is " << accum << endl;

	return 0;

}

