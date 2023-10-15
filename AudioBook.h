#pragma once
#include "Book.h"

class AudioBook : public Book
{
private:
    string voiceActor;

public:
    string getVoiceActor();
    void setVoiceActor(string VoiceActor);
    AudioBook();
    void printDescription();
};