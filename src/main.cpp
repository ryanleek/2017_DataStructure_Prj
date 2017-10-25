#include "SortedLL.h"
#include <iostream>
using namespace std;
int main()
{
	SortedLL<int> numbers;

	int x;

	numbers.Add(2);
	numbers.Add(4);
	numbers.Add(8);
	numbers.Add(3);
	cin >> x;
	numbers.Delete(x);
}