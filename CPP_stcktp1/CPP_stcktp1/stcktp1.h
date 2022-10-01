#ifndef STCKTP1_H_
#define STCKTP1_H_
template<class Type>
class Stack
{
private:
	enum { SIZE = 10 };
	int stacksize;
	Type* items;
	int top;
public:
	explicit Stack(int ss = SIZE);
	Stack(const Stack& st);
	~Stack(){ delete[] items; }
	bool isempty() { return top == 0; }
	bool isfull() { return top == stacksize; }
};
