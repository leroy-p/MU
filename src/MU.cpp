#include "../includes/MU.hh"

// Constructor
MU::MU()
{
  this->_previousGame = null;
  this->_currentGame = null;
}

//Destructor
MU::~MU()
{
  std::cout << "MU deleted." << std::endl;
}

// Getters
Game *MU::getPreviousGame() const
{
  return this->_previousGame;
}

Game *MU::getCurrentGame() const
{
  return this->_currentGame;
}

// Actions
void MU::startNewGame()
{
  delete this->_previousGame;
  this._previousGame = this->_currentGame;
  this._currentGame = new Game();
}
