////////////////////////////////////////////////
// StoryGenerator.cpp
// Purpose: Implement `StoryGenerator` class
// Author: Ezekiel Pierson
// Date: 12/12/2018  Change: Created File
////////////////////////////////////////////////
#include "StoryGenerator.h"
#include <fstream>
#include <iostream>
#include <algorithm>

StoryGenerator::StoryGenerator(string filename) {
    this->filename = filename;
}

class PreDecision {
    public:
    string name;
    string content;
    string owner;
    PreDecision(string name, string content, string owner) {
        this->name = name;
        this->content = content;
        this->owner = owner;
    }
};

vector<Narrative> StoryGenerator::generateNarratives() {
    fstream file(filename, ios::in);
    if (file.fail()) {
        cout << "Error: Failed to open file" << endl;
        exit(-1);
    }
    string name;
    string content;
    string decisionOneContent;
    string decisionOneName;
    string decisionTwoContent;
    string decisionTwoName;
    vector<Narrative> narratives;
    vector<vector<PreDecision>> preDecisionsPerNarrative;
    while (file >> name >> content >> decisionOneContent >> decisionOneName >> decisionTwoContent >> decisionTwoName) {
        // Found this technique online.
        // https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string
        replace(content.begin(), content.end(), '-', ' ');
        replace(decisionOneContent.begin(), decisionOneContent.end(), '-', ' ');
        auto preDecisionOne = PreDecision(decisionOneName, decisionOneContent, name);
        vector<PreDecision> preDecisions;
        preDecisions.push_back(preDecisionOne);
        if (decisionTwoContent != "nil") {
            replace(decisionTwoContent.begin(), decisionTwoContent.end(), '-', ' ');
            auto preDecisionTwo = PreDecision(decisionTwoName, decisionTwoContent, name);
            preDecisions.push_back(preDecisionTwo);
        }
        preDecisionsPerNarrative.push_back(preDecisions);
        vector<Decision> decisions;
        auto initialNarrative = Narrative(content, decisions, name);
        narratives.push_back(initialNarrative);
    }
    file.close();
    // For every narrative iterate through their predecisions, find the narrative they match up to, and add it back to the narrative.
    for (int i = 0; i < narratives.size(); i++) {
        Narrative narrative = narratives[i];
        vector<PreDecision> preDecisions = preDecisionsPerNarrative[i];
        for (int z = 0; z < preDecisions.size(); z++) {
            auto preDecision = preDecisions[z];
            for (int j = 0; j < narratives.size(); j++) {
                if (preDecision.name == narratives[j].getName()) {
                    narrative.addDecision(Decision(&(narratives[j]), preDecision.content));
                    narratives[i] = narrative;
                 }
            }
        }
    }
    return narratives;
}
