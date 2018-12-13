#include "Narrative.h"
#include <vector>
#include <string>
using namespace std;

class StoryGenerator {
    private:
        string filename;
    public:
        StoryGenerator(string filename);
        vector<Narrative> generateNarratives();
};
