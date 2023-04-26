//Bo yang
//CPS271 MP7 Part 2
//4/25/23

//I thought a lot about how to implement the functions for this problem and decided to use set container for all menu options. The only differences between stack and queue vs. set 
// are the way its elements are removed and the reduced functionality (no find function, etc), stack is LIFO, queue is FIFO. 
// But since the problem asks for an erase function that identifies the value that the user wants removed then removes it,
// there is essentially no difference between the three containers since the function removes only specific values instead of from the top (stack) or bottom (queue) of the container. 
// I have, however, added pop functions to simulate the stack/queue data structure.

#include <iostream>
#include <algorithm> //for std::find
#include <stack>
#include <queue>
#include <set>
#include <string>

using std::cout;
using std::cin;
using std::endl;

template <typename T>
void add(T& container)
{
	int userInput;
	cout << "\nEnter an integer to add to the selected container: ";
	cin >> userInput;
	container.insert(container.end(), userInput);
}

template <typename T>
void deleteElement(T& container)
{
	int userInput;
	cout << "\nEnter an integer to delete from the selected container, if it exists, the number will be deleted: ";
	cin >> userInput;
	container.erase(userInput);
}

template <typename T>
void find(const T& container)
{
	int userInput;
	cout << "\nEnter the integer you would like to find in the selected container: ";
	cin >> userInput;
	if (container.find(userInput) != container.end())
	{
		cout << "\nThe integer was found!\n";
	}
	else
	{
		cout << "\nThe integer was not found.\n";
	}
}

template <typename T>
void iterate(const T& container)
{
	cout << "\nThe integers in the selected container are: ";
	for (const auto& userInput : container)
	{
		cout << userInput << " ";
	}
	cout << endl;
}


int main()
{
	char userChoice;
	cout << "Which implementation do you want to create?\na. Stack\nb. Queue\nc. Set\nd. Exit\n";
	cin >> userChoice;

	if (userChoice == 'a')
	{
		std::set<int> s;
		int subChoice;
		while (true)
		{
			cout << "\nSubmenu\n1. Push\n2. Pop\n3. Erase value\n4. Find\n5. Iterate\n6. Exit\n";
			cin >> subChoice;

			switch (subChoice)
			{
			case 1:add(s); break;
			case 2:s.erase(--s.end()); cout << "\nThe last number in the queue has been deleted (LIFO)" << endl; break; //simulates std::stack::pop
			case 3:deleteElement(s); break;
			case 4:find(s); break;
			case 5:iterate(s); break;
			case 6:cout << "Exiting program\n"; return 0;
			default:cout << "Invalid choice.\n";
			}
		}
	}
	else if (userChoice == 'b')
	{
		std::set<int> s;
		int subChoice;
		while (true)
		{
			cout << "\nSubmenu\n1. Push\n2. Pop\n3. Erase value\n4. Find\n5. Iterate\n6. Exit\n";
			cin >> subChoice;

			switch (subChoice)
			{
			case 1:add(s); break;
			case 2:s.erase(s.begin()); cout << "\nThe first number in the queue has been deleted (FIFO)" << endl; break; //simulates std:queue::pop
			case 3:deleteElement(s); break;
			case 4:find(s); break;
			case 5:iterate(s); break;
			case 6:cout << "Exiting program\n"; return 0;
			default:cout << "Invalid choice.\n";
			}
		}
	}
	else if (userChoice == 'c')
	{
		std::set<int> s;
		int subChoice;
		while (true)
		{
			cout << "\nSubmenu\n1. Add\n2. Delete\n3. Find\n4. Iterate\n5. Exit\n";
			cin >> subChoice;

			switch (subChoice)
			{
			case 1:add(s); break;
			case 2:deleteElement(s); break;
			case 3:find(s); break;
			case 4:iterate(s); break;
			case 5:cout << "Exiting program\n"; return 0;
			default:cout << "Invalid choice.\n";
			}
		}
	}
	else if (userChoice == 'd')
	{
		cout << "Exiting...\n";
		return 0;
	}
	else
	{
		cout << "Invalid choice.\n";
	}

	return 0;
}
