#include "gameState.h"


GameState::GameState() : m_currentState(0) {
    m_states = { "PLATFORM", "HEAD", "BODY", "LEFT_ARM", "RIGHT_ARM", "LEFT_LEG", "RIGHT_LEG" };
}


std::string GameState::getState() const {
    return m_states[m_currentState];
}


void GameState::addState() {
    if (m_currentState < m_states.size() - 1) {
        ++m_currentState;
    }
}


bool GameState::gameOver() const {
    return m_currentState == m_states.size() - 1;
}
