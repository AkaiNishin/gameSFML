#ifndef EXTNODE_HPP
#define EXTNODE_HPP

#include <ResourceHolder.hpp>
#include <ResourceIdentifiers.hpp>
#include <SceneNode.hpp>

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

class TextNode : public SceneNode {
public:
  explicit TextNode(const FontHolder &fonts, const std::string &text);

  void setString(const std::string &text);

private:
  virtual void drawCurrent(sf::RenderTarget &target,
                           sf::RenderStates states) const;

private:
  sf::Text mText;
};

#endif // BOOK_TEXTNODE_HPP
