////////////////////////////////////////////////
// StoryGenerator.h
// Purpose: Define the `StoryGenerator` class
// Author: Ezekiel Pierson
// Date: 12/12/2018  Change: Created File
////////////////////////////////////////////////
#include "Narrative.h"
#include <vector>
#include <string>
using namespace std;
// The class that is responsible for loading a file and transforming it into a vector of `Narrative` objects.
class StoryGenerator {
    private:
        string filename;
    public:
        // Constructor for `StoryGenerator`
        // filename -- takes the filename to load. can also be a path to the file if the file is not in the local directory
        StoryGenerator(string filename);
        // The function that loads the file and returns a vector of `Narrative` objects.
        vector<Narrative> generateNarratives();
};
