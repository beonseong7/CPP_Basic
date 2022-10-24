#ifndef QUEUETP_H_
#define  QUEUETP_H_
template <class Item>
class QueueTP
{
private:
	enum { Q_SIZE = 10 };
	class Node
	{
	public:
		Item item;
		Node* next;
		Node(const Item& i) : item(i), next(0) {}
	};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTP(const QueueTP& q) : qsize(0) {}
	QueueTP& operator=(const QueueTP& q) { return *this; }
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
		return items == 0;
	}
	bool isfull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};
template<class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
	front = rear = 0;
	items = 0;
}
template <class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != 0)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
#endif
#pragma once
