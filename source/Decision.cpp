////////////////////////////////////////////////
// Decision.cpp
// Purpose: Implement the `Decision` class
// Author: Ezekiel Pierson
// Date: 12/08/2018  Change: Created File
////////////////////////////////////////////////
#include "Decision.h"

Decision::Decision(Narrative * narrative, string presentationString) {
    this->narrative = narrative;
    this->presentationString = presentationString;
}

Narrative * Decision::getNarrative() const {
    return narrative; 
}
