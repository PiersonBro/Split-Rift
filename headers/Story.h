////////////////////////////////////////////////
// Story.h
// Purpose: Define the `Story` class
// Author: Ezekiel Pierson
// Date: 12/06/2018  Change: Created File
////////////////////////////////////////////////
#ifndef STORY_H
#define STORY_H
#include <string>
using namespace std;
// The abstract baseclass for Narrative and Decision
class Story {
    protected:
        string presentationString;
    public:
        // presentationString -- the user facing content string common to all Story subclasses.
        string getPresentationString() const;
        // By defining a virtual destructor we make `Story` an abstract base class.
        virtual ~Story() = 0;
};
#endif
