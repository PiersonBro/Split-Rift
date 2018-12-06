#ifndef STORY_H
#define STORY_H
#include <string>
using namespace std;

class Story {
    private:
        string presentationString;
    public:
        string getPresentationString();
        virtual ~Story() = 0;
};
#endif
