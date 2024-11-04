#include "word.h"

word::word(string word)
{
    m_word = word;
    for (int i=0; i<word.length(); i++){
        m_currentWord.push_back('_')
    }
}
bool Word::findLetter(char c){
    size_t pos = m_word.find();
    if (pos != std::string::npos){
        return true
    }
    else {
        return false;
    }
}

string Word::getWord(){
    string w = "";
    for (auto it = m_currentWord.begin(); it != m_currentWord.end(); ++it){
        w += it;
        w += " ";
    }
}


