#include "../includes/Game.hh"

// Constructor
Game::Game(int playerCount)
{
  this->_playerCount = playerCount;
  this->initPlayers();
  this->initCards();
  this->_current = true;
}

// Destructor
Game::~Game()
{
  for (std::list<Player *>::iterator it = this->_players.begin(); it != this->_players.end(); ++it)
    delete it;
  for (std::list<Card *>::iterator it = this->_cards.begin(); it != this->_card.end(); ++it)
    delete it;
  std::string status = this->_current ? "Current" : "Previous";
  std::cout << status << " game destroyed." << std::endl;
}

// Getters
int Game::getPlayerCount() const
{
  return this->_playerCount;
}

std::list<Player *> Game::getPlayers() const
{
    return this->_players;
}

std::list<Cards *> Game::getCards() const
{
  return this->_cards;
}

bool Game::isCurrent() const
{
  return this->_current;
}

// Setters
void Game::setCurrent(bool current)
{
  this._current = current;
}

// Actions
void Game::initPlayers() // adds "playerCount" new players to the game
{
  std::list<Player *> players;
  for (int index = 0; index < this->_playerCount; ++index)
  {
    Player *p = new Player(index + 1);
    players.push_back(p);
  }
  this->_players = players;
}

void Game::initCards() // adds the 60 different cards to the game
{
  std::list<Cards *> cards;
  for (int color = 0; color < 5; ++color)
  {
    for (int value = 0; value < 12; ++value)
    {
      Card *c = new Card((Color)color, value);
      this->_cards.push_back(c);
    }
  }
  this->_cards = cards;
}

Card *Game::pickCard(int cardIndex) // deletes the wanted card from the game returns it
{
  std::list<Card *>::iterator it = this->_cards.begin();
  for (int i = 0; i < cardIndex; ++i)
    ++it;
  this->_cards.erase(it);
  Card c = *it;
  return c;
}

void Game::dealSingleCard(int cardIndex, int playerIndex) // add the card to the player
{
  Card c = this->pickCard(cardIndex);
  std::list<Player *>::iterator it = this->_players.begin();
  for (int i = 0; i < playerIndex; ++i)
    ++it;
  it->addCard(&c);
}

void Game::dealCards() // randomly devides the 60 cards into the players
{
  int randomCardIndex;
  int cardCount = 60;
  int playerIndex = 0;
  for (int card = 0; card < 60; ++card)
  {
    playerIndex = (playerIndex + 1) % this->_playerCount;
    randomCardIndex = rand() % cardCount;
    --cardCount;
    this->dealSingleCard(randomCardIndex, playerIndex);
  }
}

void Game::printPlayersCards() const
{
  for (std::list<Player *>::iterator it = this->_players.begin(); it != this->_players.end(); ++it)
    it->printCards();
}
