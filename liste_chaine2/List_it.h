#pragma once
#include "List.h"


class List_it
{
private:
	List* list;
	ListeItem* curseur;
	int version;

public:

	List_it(List* list);
	bool hasNext();
	ListeItem* next();

};

