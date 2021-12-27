#include "Controller.h"

void Controller::run()
{
    m_board.init();
    sf::Clock m_clock;
    while (Graphic::graphic().getWin().isOpen())
    {
    Graphic::graphic().getWin().clear();
    m_board.draw();
    Graphic::graphic().getWin().display();
        sf::Event event;
        while (Graphic::graphic().getWin().pollEvent(event))
        {
            // Window closed or escape key pressed: exit
            if ((event.type == sf::Event::Closed) ||
                ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)))
            {
                Graphic::graphic().getWin().close();
                break;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            {
                m_board.cangePlayer();
            }
            //m_level.movePlayer();
        }
        m_board.moveDrawf();
    }
}

void Controller::preRun()
{
    m_toolBar.init();
    while (Graphic::graphic().getWin().isOpen())
    {
        sf::Event event;
        Graphic::graphic().getWin().clear();
        m_toolBar.draw();
        Graphic::graphic().getWin().display();
        if (auto event = sf::Event{}; Graphic::graphic().getWin().waitEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                Graphic::graphic().getWin().close();
                break;
            case sf::Event::MouseButtonReleased:
            {
                auto location = Graphic::graphic().getWin().mapPixelToCoords(
                    { event.mouseButton.x, event.mouseButton.y });
                if (m_toolBar.getObject(0).getSprite().getGlobalBounds().contains(location))
                    run();
                else if (m_toolBar.getObject(1).getSprite().getGlobalBounds().contains(location))
                    m_toolBar.changeIsInstruction();
                else if (m_toolBar.getObject(2).getSprite().getGlobalBounds().contains(location))
                    Graphic::graphic().getWin().close();
                else if (m_toolBar.getObject(4).getSprite().getGlobalBounds().contains(location))
                    m_toolBar.changeIsInstruction();
                break;
            }
            case sf::Event::MouseMoved:
            {
                auto location = Graphic::graphic().getWin().mapPixelToCoords(sf::Vector2i(event.mouseMove.x, event.mouseMove.y));
                m_toolBar.changeColor(location);
                break;
            }
            }
        }
    }
}
        
 