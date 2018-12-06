#ifndef DECISION_H
#define DECISION_H
#include <string>
#include <vector>
using namespace std;
// I'm using a forward declaration of the `Narrative` class because
// otherwise I would have a header include cycle.
// I used this stackoverflow article to figure this out.
// https://stackoverflow.com/questions/7696022/c-includes-in-a-cycle#
class Narrative;

class Decision {
    private:
        Narrative * narrative;
    public:
        Narrative * getNarrative();
};
#endif
