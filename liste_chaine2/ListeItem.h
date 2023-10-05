#pragma once
class ListeItem
{

private:
	ListeItem* next;
	int val;

public:

	ListeItem(int v);
	int getVal();
	void setVal(int v);
	ListeItem* getNext();
	void setNext(ListeItem* item);


};

