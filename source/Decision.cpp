#include "Decision.h"

Decision::Decision(Narrative * narrative, string presentationString) {
    this->narrative = narrative;
    this->presentationString = presentationString;
}

Narrative * Decision::getNarrative() const {
    return narrative; 
}
