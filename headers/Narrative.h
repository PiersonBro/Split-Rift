#ifndef NARRATIVE_H
#define NARRATIVE_H
#include <string>
#include <iostream>
#include <vector>
#include "Decision.h"
#include "Story.h"
using namespace std;

class Narrative: public Story {
    private:
        vector<Decision> decisions;
        string name;
    public:
        Narrative(string presentationString, vector<Decision> decisions, string name);
        vector<Decision> getDecisions() const;
        void addDecision(Decision decision);
        string getName() const;
};
ostream& operator<<(ostream& os, Narrative narrative);

#endif
