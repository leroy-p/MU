#ifndef MU_HH_
# define MU_HH_

# include "Game.hh"

class MU
{
  private:
    Game *_previousGame;
    Game *_currentGame;

  public:
    MU();
    ~MU();
    Game *getPreviousGame() const;
    Game*getCurrentGame() const;
    void startNewGame();
};

#endif /* !MU_HH_ */
