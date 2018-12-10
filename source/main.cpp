#include <iostream>
#include "Character.h"
#include "Decision.h"
#include "Narrative.h"
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
    string nextNarrativePresentationString = "As you walk forward it definitely seems like the fog moves to embrace you. You shiver and reconsider.... ";
    auto nextNarrative = new Narrative(nextNarrativePresentationString, vector<Decision>());
    Decision firstDecision = Decision(nextNarrative, "Take a deep breath and walk into the woods");
    Decision secondDecision = Decision(nextNarrative, "find another route circumventing the woods");
    string narrativeString = "You enter a dark damp forest. The fog is thick around you, you move your hand and the fog seems to move too. \nYou are a little unnerved. Do you?";
    vector<Decision> decisions = {firstDecision, secondDecision};
    Narrative firstNarrative = Narrative(narrativeString, decisions);
    // Game loop.
    cout << "Welcome to Split Rift!" << endl;
    cout << "Let's begin your adventure!" << endl;
    cout << endl;
    printOutNarrative(firstNarrative);

    string input;
    Narrative * currentNarrative = &firstNarrative;
    while(getline(cin, input)) {
        auto decisions = currentNarrative->getDecisions();
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
            cout << currentNarrative -> getPresentationString() << endl;
            if (currentNarrative->getDecisions().size() == 0) {
                cout << "The end of the game has been reached. I hope you enjoyed it!" << endl;
                break;
            }
        }
    }
    return 0;
}
