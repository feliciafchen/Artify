//
// Created by Felicia Chen on 11/10/23.
//

#ifndef TEXTINPUT_ITEM_H
#define TEXTINPUT_ITEM_H
#include <SFML/Graphics.hpp>
#include "EventHandler.h"
#include "States.h"
#include "Fonts.h"
#include "MouseEvents.h"

class Item : public EventHandler, public States, public sf::Drawable{
private:
    sf::RectangleShape box;
    sf::Text text;
    void centerName();
public:
    Item();
    Item(const std::string& text, unsigned int size);
    std::string& getText() const;
    void setBoxSize(sf::Vector2f);
    sf::FloatRect getGlobalBounds() const;
    void setFillColor(sf::Color);
    void setOutlineColor(sf::Color);
    void setTextSize(unsigned int);
    void setTextColor(sf::Color);
    void setOutlineThickness(float);
    void setPosition(sf::Vector2f pos);
    const sf::Vector2f& getPosition();
    const sf::Text &getName() const;
    void setName(const std::string &name);
    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;
    void update() override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TEXTINPUT_ITEM_H
