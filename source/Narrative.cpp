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

ostream& operator<<(ostream& os, Narrative narrative) {
    os << narrative.getPresentationString() << endl;
    // I looked up the tab code on google.
    auto decisions = narrative.getDecisions();
    for (int i = 0; i < decisions.size(); i++) {
        os << "\t" << decisions[i].getPresentationString() << endl;
    }

    return os;
}
