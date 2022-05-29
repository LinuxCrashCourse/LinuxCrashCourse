#include <iostream>
using namespace std;
/*
	profiling example: exploring memory
	In this example, see how to determine which functions take longer
	than others. All functions read the same number of elements from an array
*/

uint64_t f1(const uint64_t a[], int n) {
	uint64_t sum = 0;
	for (uint32_t i = 0; i < n; i++)
		sum += a[i];
  return sum;	
}

uint64_t f2(const uint64_t a[], int n) {
	uint64_t sum = 0;
	for (uint32_t i = 0; i < n; i+= 2)
		sum += a[i];
	for (uint32_t i = 1; i < n; i+= 2)
		sum += a[i];
  return sum;	
}

uint64_t f3(const uint64_t a[], int n, uint32_t interleave) {
	uint64_t sum = 0;
	for (uint32_t i = 0; i < interleave; i++) {
		for (uint32_t j = i; j < n; j += interleave)
			sum += a[j];
	}
  return sum;	
}

int main(int argc, char* argv[]) {
	int n = argc >= 1 ? atoi(argv[1]) : 1000000;

	uint64_t* p = new uint64_t[n];
	for (int i = 0; i < n; i++)
		p[i] = i;

	uint64_t sum = 0;
	sum += f1(p, n);
	sum += f2(p, n);
	sum += f3(p, n);
	cout << sum << '\n';
	delete [] p;
}
