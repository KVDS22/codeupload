#include "AudioBook.h"

string AudioBook::getVoiceActor()
{
    return this->voiceActor;
}

void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor = voiceActor;
}

void AudioBook::printDescription()
{
    cout << "Audio Book title is " << this->Title << endl;
    cout << "Audio Book author is " << this->authorName << endl;
    cout << "Audio Book voice actor is " << this->voiceActor << endl;
}

AudioBook::AudioBook()
{
}