////////////////////////////////////////////////
// Narrative.cpp
// Purpose: Implement the `Story` class
// Author: Ezekiel Pierson
// Date: 12/08/2018  Change: Created File
////////////////////////////////////////////////
#include "Story.h"

string Story::getPresentationString() const {
    return presentationString;
}

Story::~Story() {
    // As geeks for geeks says we need to define this function in order for this destructor to work.
    // https://www.geeksforgeeks.org/pure-virtual-destructor-c/
}
