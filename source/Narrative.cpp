#include "Narrative.h"

Narrative::Narrative(string presentationString, vector<Decision> decisions, string name) {
    this->presentationString = presentationString;
    this->decisions = decisions;
    this->name = name;
}
vector<Decision> Narrative::getDecisions() const {
    return decisions;
}

void Narrative::addDecision(Decision decision) {
    decisions.push_back(decision);
}

string Narrative::getName() const {
    return name;
}
