#ifndef GAME_HH_
# define GAME_HH_

# include <cstdlib>
# include "Player.hh"

class Game
{
  private:
    int _playerCount;
    std::list<Player *> _players;
    std::list<Card *> _cards;
    bool _current;

  public:
    Game(int);
    ~Game();
    int getPlayerCount() const;
    std::list<Player *> getPlayers() const;
    std::list<Cards *> getCards() const;
    bool isCurrent() const;
    void setCurrent(bool);
    void initPlayers();
    void initCards();
    Card *pickCard(int);
    void dealSingleCard(int, int);
    void dealCards();
    void printPlayersCards() const;
};

#endif /* !GAME_HH_ */
