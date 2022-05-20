#include <iostream>
using namespace std;

void printPascal(int n){
	int arr[n][n];
	for (int line = 0; line < n; line++)
	{
    int counter = 0;
		for (int i = 0; i <= line; i++)
		{
		if (line == i || i == 0)
			arr[line][i] = 1;
		else
			arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
      counter++;
		  cout << arr[line][i] << " ";
		}
    for (int m = n; m>counter; m--){
      cout << "0" << " ";
    }

		cout << "\n";
	}
}
int main()
{
	int n;
  cout << "Length of pascal triangle = ";
  cin >> n;
  cout <<"\n";
	printPascal(n);
	return 0;
}
