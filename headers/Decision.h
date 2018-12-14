////////////////////////////////////////////////
// Decision.h
// Purpose: Define the `Decision` class
// Author: Ezekiel Pierson
// Date: 12/06/2018  Change: Created File
////////////////////////////////////////////////
#ifndef DECISION_H
#define DECISION_H
#include <string>
#include <vector>
#include "Story.h"
using namespace std;
// Use a forward declaration of the `Narrative` class because
// otherwise a header include cycle would result.
// We used this stackoverflow article to figure this out.
// https://stackoverflow.com/questions/7696022/c-includes-in-a-cycle#
class Narrative;
// The Decision class is the intermediary between Narratives. 
class Decision: public Story {
    private:
        Narrative * narrative;
    public:
        // Initialize `Decision`
        // Narrative * narrative -- The narrative that this represents.
        // string presentationString -- The string to show the user. 
        //                              Typically a decision that will be chosen triggering the next console
        Decision(Narrative * narrative, string presentationString);
        // Get the narrative the decision is storing.
        // Returns: The narrative the decision is storing.
        Narrative * getNarrative() const;
};
#endif
