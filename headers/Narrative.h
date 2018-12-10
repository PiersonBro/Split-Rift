#ifndef NARRATIVE_H
#define NARRATIVE_H
#include <string>
#include <vector>
#include "Decision.h"
#include "Story.h"
using namespace std;

class Narrative: public Story {
    private:
        vector<Decision> decisions;
    public:
        Narrative(string presentationString, vector<Decision> decisions);
        vector<Decision> getDecisions() const;
};
#endif
