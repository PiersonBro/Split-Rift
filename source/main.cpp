#include <iostream>
#include "Character.h"
#include "Decision.h"
#include "Narrative.h"
#include "StoryGenerator.h"
using namespace std;
//FIXME: Consider using operator overloading on narrative.
void printOutNarrative(Narrative narrative) {
    cout << narrative.getPresentationString() << endl;
    // I looked up the tab code on google.
    auto decisions = narrative.getDecisions();
    for (int i = 0; i < decisions.size(); i++) {
        cout << "\t" << decisions[i].getPresentationString() << endl;
    }
    
}

int main() {
    StoryGenerator generator("ForestStory.txt");
    
    bool firstRun = true;
    auto narratives = generator.generateNarratives();
    Narrative * currentNarrative = &narratives[0];
    printOutNarrative(*currentNarrative);
    string input;
    while(getline(cin, input)) {
        vector<Decision> decisions = currentNarrative->getDecisions();
        cout << decisions.size() << endl;
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
                printOutNarrative(*currentNarrative);
            }
        }
    }
    return 0;
}
