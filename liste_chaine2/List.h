#pragma once
#include "ListeItem.h"
class List
{
private:
	int version;
	void upVersion();
	ListeItem* firstCell;

public:
	List();
	~List();
	ListeItem* getFirstCell();
	void add(int);
	void clear();
	void print();
	int size();
	int get(int);
	int getVersion();
};

