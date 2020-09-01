#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
	using namespace std;
	int casts[10] = { 6,7,2,9,4,11,8,7,10,5 };
	vector<int> dice(10);
	copy(casts, casts + 10, dice.begin());
	cout << "Let the dice be cast: " << endl;
	ostream_iterator<int, char> out_iter(cout, " ");
	copy(dice.begin(), dice.end(), out_iter);
	cout << endl;

	cout << "Implicit use of reverse iterator. " << endl;
	copy(dice.rbegin(), dice.rend(), out_iter);
	cout << endl;
	
	cout << "Explicit use of reverse itertor. " << endl;
	vector<int>::reverse_iterator ri;
	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
	{
		cout << *ri << " ";
	}
	cout << endl;

	auto pri = [](const int& n) {cout << n << " "; };

	std::for_each(dice.rbegin(), dice.rend(), pri);

	return 0;
}