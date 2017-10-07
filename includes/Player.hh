#ifndef PLAYER_HH_
# define PLAYER_HH_

# include <list>
# include "Card.hh"

class Player
{
  private:
    int _index;
    std::list<Card *> _cards;

  public:
    Player(int);
    ~Player();
    int getIndex() const;
    std::list<Card *> getCards() const;
    void addCard(Card *);
    void printCards() const;
};

#endif /* !PLAYER_HH_ */
