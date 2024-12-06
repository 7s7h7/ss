#include <iostream>
using namespace std;
void hanoi(char start, char end, char temp, int x);
int main()
{
	cout << "How many disks : ";
	int x;
	cin >> x;
	hanoi('A', 'C', 'B', x);
	for (int y = 1, i = 1; i <= x; i++)
		y *= 2;
	cout << " Number of moves : " << y -= 1;
}
void hanoi(char start, char end, char temp, int x)
{
	if (x == 0)
		return;
	hanoi(start, temp, end, x - 1);
	cout << " move disk " << x << " from " << start << " to " << end << endl;
	hanoi(temp, end, start, x - 1);
}