//#include <iostream>
//
//using namespace std;
//
//class Stack
//{
//public:
//	Stack()
//	{
//		top = 0;
//	};
//	void push(int var)
//	{
//		st[++top] = var;
//	}
//	int pop()
//	{
//		return st[top--];
//	}
//
//private:
//	enum {MAX = 10};
//	int st[MAX];
//	int top;
//};
//
//
//int main()
//{
//	Stack s1;
//
//	s1.push(11);
//	s1.push(22);
//
//	cout << "1: " << s1.pop() << endl;
//	cout << "2: " << s1.pop() << endl;
//
//	s1.push(33);
//	s1.push(44);
//	s1.push(55);
//	s1.push(66);
//
//	cout << "3: " << s1.pop() << endl;
//	cout << "4: " << s1.pop() << endl;
//	cout << "5: " << s1.pop() << endl;
//	cout << "6: " << s1.pop() << endl;
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <process.h>

using namespace std;

class Stack 
{
protected:
	enum {MAX = 3};
	int st[MAX];
	int top;

public:
	Stack()
	{
		top = -1;
	}

	void push(int var)
	{
		st[++top] = var;
	}

	int pop()
	{
		return st[top--];
	}
};

class Stack2 : public Stack
{
public:
	void push(int var)
	{
		if (top >= MAX - 1)
		{
			cout << "\nError: stack is full!";
			exit(1);
		}

		Stack::push(var);
	}

	int pop()
	{
		if (top < 0)
		{
			cout << "\nError: stack is empty!";
			exit(1);
		}

		return Stack::pop();
	}

};

int main()
{
	Stack s1;

	s1.push(11);
	s1.push(22);
	s1.push(33);

	cout << endl << s1.pop();
	cout << endl << s1.pop();
	cout << endl << s1.pop();
	cout << endl << s1.pop();

	cout << endl;

	system("pause");
	return 0;
}