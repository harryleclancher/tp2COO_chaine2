#include "List_it.h"


List_it::List_it(List* list) {
	this->list = list;
	this->version = list->getVersion();
	this->curseur = list->getFirstCell();
}

bool List_it::hasNext() {
	return curseur->getNext() == nullptr;
}

ListeItem* List_it::next() {
	if (this->version != this->list->getVersion()) {
		return nullptr;
	}
	curseur = curseur->getNext();
	return curseur;
}