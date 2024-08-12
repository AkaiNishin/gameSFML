#ifndef PARTICLE_HPP
#define PARTICLE_HPP

#include <SFML/Graphics/Color.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/System/Vector2.hpp>

struct Particle {
  enum Type { Propellant, Smoke, ParticleCount };

  sf::Vector2f position;
  sf::Color color;
  sf::Time lifetime;
};

#endif // BOOK_PARTICLE_HPP
