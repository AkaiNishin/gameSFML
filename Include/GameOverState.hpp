#ifndef AMEOVERSTATE_HPP
#define AMEOVERSTATE_HPP

#include <Container.hpp>
#include <State.hpp>

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>

class GameOverState : public State {
public:
  GameOverState(StateStack &stack, Context context, const std::string &text);

  virtual void draw();
  virtual bool update(sf::Time dt);
  virtual bool handleEvent(const sf::Event &event);

private:
  sf::Text mGameOverText;
  sf::Time mElapsedTime;
};

#endif // BOOK_GAMEOVERSTATE_HPP
