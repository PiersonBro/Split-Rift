////////////////////////////////////////////////
// main.cpp
// Purpose: The `main` function for Split-Rift
// Author: Ezekiel Pierson
// Date: 12/06/2018  Change: Created File
////////////////////////////////////////////////

#include <iostream>
#include "Decision.h"
#include "Narrative.h"
#include "StoryGenerator.h"
using namespace std;

int main() {
    StoryGenerator generator("ForestStory.txt");
    bool firstRun = true;
    auto narratives = generator.generateNarratives();
    Narrative * currentNarrative = &narratives[0];
    cout << *currentNarrative << endl;
    string input;
    while(getline(cin, input)) {
        vector<Decision> decisions = currentNarrative->getDecisions();
        bool found = false;
        for (int i = 0; i < decisions.size(); i++) {
            if (decisions[i].getPresentationString() == input) {
                found = true;
                currentNarrative = decisions[i].getNarrative();
            }
        }
        if (found == false) {
            cout << "Error: Input could not be recognized. Please enter a valid decision" << endl;
        } else {
            if (currentNarrative->getDecisions().size() == 0) {
                cout << "The end of the game has been reached. I hope you enjoyed it!" << endl;
                break;
            } else {
                cout << *currentNarrative << endl;
            }
        }
    }
    return 0;
}
