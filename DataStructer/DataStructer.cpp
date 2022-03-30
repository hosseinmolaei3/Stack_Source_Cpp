// DataStructer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
char stack[10];
int top = -1;
char push(char harf) {
	return stack[++top] = harf;
}
void pop() {
	stack[top--] = NULL;                      //Hossein Molaei
}
int main()
{
	char num;
	cout << "pleas enter your char:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		push(num);
	}
	cout << "----------------------------" << "\n";
	for (int j = 0; j < 10; j++) {
		cout << stack[j] << "\n";
	}
	cout << "----------------------------" << "\n";                     //Hossein Molaei
	for (int k = 0; k < 10; k++)
	{
		if (stack[k] == '{') {
			for (int m = k + 1; m < 10; m++) {
				if (stack[m] == '}') {                            // Hossein Molaei
					cout << "true";
				}
				else((stack[m] == '(') || (stack[m] == ')') || (stack[m] == ']') || (stack[m] == '['));
					cerr << "not true" << endl;
				
			}
			cerr << " hast" << endl;
		}
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
