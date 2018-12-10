#ifndef STORY_H
#define STORY_H
#include <string>
using namespace std;

class Story {
    protected:
        string presentationString;
    public:
        string getPresentationString() const;
        virtual ~Story() = 0;
};
#endif
