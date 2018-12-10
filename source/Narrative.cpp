#include "Narrative.h"

Narrative::Narrative(string presentationString, vector<Decision> decisions) {
    this->presentationString = presentationString;
    this->decisions = decisions;
}
vector<Decision> Narrative::getDecisions() const {
    return decisions;
}
