#include<iostream>
using std::cout;
using std::endl;

template<typename T>
class HasFriend
{
private:
	T item;
	static int ct;
public:
	HasFriend(const T& i) : item(i) { ct++; }
	~HasFriend() { ct--; }
	friend void counts();
	friend void report(HasFriend<T>&);
};
template<typename T>
int HasFriend<T>::ct = 0;
void counts()
{
	cout << "int 카운트: " << HasFriend<int>::ct << "; ";
	cout << "double 카운트: " << HasFriend<double>::ct << endl;
}
void report(HasFriend<int>& hf)
{
	cout << "HasFriend<int>: " << hf.item << endl;
}