#include "../includes/Player.hh"

// Constructor
Player::Player(int index)
{
  this->_index = index;
  std::list<Card *> cards;
  this->_cards = cards;
}

// Destructor
Player::~Player()
{
  for (std::list<Card *>::iterator it = this->_cards.begin(); it != this->_cards.end(); ++it)
    delete it;
  std::cout << "Player " << this->_index << " : destroyed." << std::endl;
}

// Getters
int Player::getIndex() const
{
    return this->_index;
}

std::list<Card *> Player::getGards() const
{
  return this->_card;
}

// Actions
void Player::addCard(Card *card)
{
  this->_cards.push_back(card);
  std::cout << "Player " << this->_index << " : card " << convertColorToString((int)card->getColor()) << "/" << card->getValue() << " added." << std::endl;
}

void Player::printCards() const
{
  std::cout << "Player " << this->_index << std::endl;
  for (std::list<Card *>::iterator it = this->_cards.begin(); it != this->_cards.end(); ++it)
    std::cout << convertColorToString(it->getColor()) << "/" << it->getValue() << std::endl;
}
