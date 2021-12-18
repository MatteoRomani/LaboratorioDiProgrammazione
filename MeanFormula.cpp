//
// Created by matteo on 25/10/21.
//

#include "MeanFormula.h"

MeanFormula::~MeanFormula() {
    for (auto itr = cells.begin(); itr != cells.end(); itr++)
        (*itr)->removeObserver(this);
}

void MeanFormula::addCell(Cell *c) {
    cells.push_back(c);
}

void MeanFormula::removeCell(Cell *c) {
    cells.remove(c);
}

void MeanFormula::update() {
    formula();
}

float MeanFormula::formula() {
    if (cells.size() == 0)
        return 0;
    float sum = 0;
    for (auto itr = cells.begin(); itr != cells.end(); itr++)
        sum += (*itr)->getValue();
    float mean = sum / cells.size();
    result = mean;
    return mean;
}
