#ifndef DECISION_H
#define DECISION_H
#include <string>
#include <vector>
#include "Story.h"
using namespace std;
// I'm using a forward declaration of the `Narrative` class because
// otherwise I would have a header include cycle.
// I used this stackoverflow article to figure this out.
// https://stackoverflow.com/questions/7696022/c-includes-in-a-cycle#
class Narrative;

class Decision: public Story {
    private:
        Narrative * narrative;
    public:
        Decision(Narrative * narrative, string presentationString);
        Narrative * getNarrative() const;
};
#endif
