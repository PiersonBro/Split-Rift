#include "Story.h"

string Story::getPresentationString() const {
    return presentationString;
}

Story::~Story() {
    // As geeks for geeks says we need to define this function in order for this destructor to work.
    // https://www.geeksforgeeks.org/pure-virtual-destructor-c/
}
