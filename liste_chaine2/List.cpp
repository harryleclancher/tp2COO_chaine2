#include "List.h"
#include <iostream>



List::List() {
	this->version = 1;
    this->firstCell = nullptr;
}
List::~List() {
    this->clear();
}

ListeItem* List::getFirstCell() {
	return this->firstCell;
}

void List::add(int v) {
    ListeItem* item = new ListeItem(v);

    if (this->firstCell == nullptr) {
        this->firstCell = item;
    }
    else {
        ListeItem* curseur = this->firstCell;
        while (curseur->getNext() != nullptr) {
            curseur = curseur->getNext();
        }
        curseur->setNext(item); 
    }
    upVersion();

}

void List::clear() {
    
    while (firstCell->getNext() != nullptr) {
        ListeItem* tmp = firstCell;
        firstCell = this->firstCell->getNext();
        delete tmp;
    }
    firstCell = nullptr;
    this->upVersion();
}

void List::upVersion() {
    this->version++;
}

void List::print() {
    if (this->firstCell == nullptr) {
        std::cout << "La liste est vide ! " << std::endl;
    }
    else {
        ListeItem* curseur = firstCell;
        while (curseur->getNext() != nullptr) {
            std::cout << curseur->getVal() << " ";
            curseur = curseur->getNext();
        }std::cout << std::endl;
    }
}

int List::size() {
    if (firstCell == nullptr) {
        std::cout << "La liste est vide ! " << std::endl;
    }
    else {
        int ln = 0;
        ListeItem* curseur = firstCell;
        while (curseur->getNext() != nullptr)
        {
            ln++;
            curseur = curseur->getNext();
        }return ln;
    }
}

int List::get(int index) {
    int ln = this->size();
    if (index >= ln || index < 0) {
        std::cout << "L'index donné n'est pas valable !";
        return -1;
    }
    else {
        ListeItem* tmp = firstCell;
        for (int i = 0; i < index; i++) {
            tmp = tmp->getNext();
        }return tmp->getVal();
    }
}

int List::getVersion() {
    return version;
}

