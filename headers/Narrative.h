#ifndef NARRATIVE_H
#define NARRATIVE_H
#include <string>
#include <vector>
#include "Decision.h"
using namespace std;

class Narrative {
    private:
        vector<Decision> decisions;
    public:
        vector<Decision> getDecisions();
};
#endif
