#ifndef CARD_HH_
# define CARD_HH_

#include <iostream>

enum Color
{
    RED,
    YELLOW,
    BLUE,
    GREEN,
    BLACK
};

void convertColorToString(int);

class Card
{
  private:
    Color _color;
    int _value;

  public:
    Card(Color, int);
    ~Card();
    Color getColor() const;
    int getValue() const;
};

# endif /* !CARD_HH_ */
