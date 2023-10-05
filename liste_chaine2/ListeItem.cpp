#include "ListeItem.h"


ListeItem::ListeItem(int v) {
	this->val = v;
	this->next = nullptr;
}
int ListeItem::getVal() {
	return this->val;
}
void ListeItem::setVal(int v) {
	this->val = v;
}
ListeItem* ListeItem::getNext() {
	return this->next;
}
void ListeItem::setNext(ListeItem* item) {
	this->next = item;
}