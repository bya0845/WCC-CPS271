#include <iostream>
#include <stack>
#include <queue>
#include <set>

using std::cout;
using std::cin;
using std::endl;

class mySTL
{
private:
	std::stack<int> myStack;
	std::queue<int> myQueue;
	std::set<int> mySet;
	
public:
	void addNumber(int inputNum) { myStack.push(inputNum); }
	void addNumber(int inputNum) { myQueue.push(inputNum); }
	void addNumber(int inputNum) { mySet.insert(inputNum); }

	void deleteNumber() { myStack.pop(); }
	void deleteNumber() { myQueue.pop(); }
	void deleteNumber() { mySet.erase(mySet.end()); }

	void findNumber(int inputFindValue){myStack}
	
};


int main()
{
	mySTL mySTL;
	cout << "Pick your STL implementation" << endl;

	char userChoice;
	do
	{
		cout << "a.Stack" << endl;
		cout << "b.Queue" << endl;
		cout << "c.Set" << endl;
		cout << "d.Exit" << endl;
		cin >> userChoice;
		cout << endl;
		if (userChoice == 'a')
		{
			int userChoice2;
			cout << "Choose from the following options:" << endl;
			cout << "1. Add" << endl;
			cout << "2. Delete (the last number added)" << endl;
			cout << "3. Find" << endl;
			cout << "4. Iterate" << endl;
			cin >> userChoice2;
			cout << endl;
			if (userChoice2 == '1')
			{
				int inputNum;
				cout << "Enter a number to add to the vector" << endl;
				cin >> inputNum;
				mySTL.addNumber(inputNum);
				cout << endl;
			}
			else if (userChoice2 == '2')
			{
				mySTL.deleteNumber();
			}
			else if (userChoice2 == '3')
			{
				int inputFindValue;
				cout << "Enter the number you would like to find" << endl;
				cin >> inputFindValue;
				mySTL.deleteNumber();
			}
			else if (userChoice2 == '4')
			{
				mySTL.iterate();
			}
		}
		else if (userChoice == 'b')
		{

		}


	}

}
