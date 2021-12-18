//
// Created by matteo on 25/10/21.
//

#ifndef LABPROG_CELL_H
#define LABPROG_CELL_H


#include <list>
#include "Subject.h"

class Cell : public Subject {
public:
    Cell(float value = 0) : value(value) {}

    ~Cell() {}

    virtual void addObserver(Observer *o);

    virtual void removeObserver(Observer *o);

    virtual void notify();

    virtual bool isObserver(Observer *o);

    float getValue() const;

    void setValue(float value);

    int observersSize() const;
private:
    float value;
    std::list<Observer*> observers;

};


#endif //LABPROG_CELL_H