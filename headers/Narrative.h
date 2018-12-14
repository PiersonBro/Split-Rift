////////////////////////////////////////////////
// Narrative.h
// Purpose: Define the `Narrative` class
// Author: Ezekiel Pierson
// Date: 12/06/2018  Change: Created File
////////////////////////////////////////////////
#ifndef NARRATIVE_H
#define NARRATIVE_H
#include <string>
#include <iostream>
#include <vector>
#include "Decision.h"
#include "Story.h"
using namespace std;
// An individual story point from which the user reads the presentationString and can then go on to subsequent
// story points.
class Narrative: public Story {
    private:
        vector<Decision> decisions;
        string name;
    public:
        // The constructor for the Narrative class.
        // presentationString -- the story content to display to the user/
        // vector<Decision> decisions -- a vector of potential decisions that point to the next narrative.
        // string name -- the name of the narrative, must be unique.
        Narrative(string presentationString, vector<Decision> decisions, string name);
        // Returns the decisions that point to the next narrative.
        vector<Decision> getDecisions() const;
        // add a Decisoin object to `decisions`
        // A common practice is to pass an empty vector and populate it after the fact. 
        void addDecision(Decision decision);
        // Get the name of the narrative.
        string getName() const;
};
// Stream out the narrative's contents typically cout.
// ostream os -- the stream to output to.
// Narrative narrative -- the narrative to output. 
ostream& operator<<(ostream& os, Narrative narrative);

#endif
