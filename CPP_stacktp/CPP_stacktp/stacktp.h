#ifndef STACKTP_H_
#define STACKTP_H_
template <class Type>
class Stack
{
private:
	enum{MAX =10};
	Type = items[MAX];
	int top;
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Type& item);
	bool pop(Type& item);
};
template <class Type>
Stack<Type>::Stack()
{

}
#endif