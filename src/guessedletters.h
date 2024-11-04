#include "guessedLetters.h"

guessedLetters::guessedLetters() {}

std::string gussedLetters::getLetters(){
    std::string result;
    for (auto it = m_letters.begin(); it != m_letters.end(); ++it){
        result += *it;
        result += " ";
    }
    return result;
}

void guessedLetters::addLetter(char letter){
    bool alreadyGussed = false;
    for (size_t i = 0; i < m_letter.size(); ++i){
        if (m_letters[i] == letter){
            alreadyGussed = true;
            break;
        }
    }

    if (!alreadyGussed){
        m_letters.push_back(letter);
    }
}

