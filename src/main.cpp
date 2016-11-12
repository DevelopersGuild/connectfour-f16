//sfml template for c++ simple game group
#include <SFML/Graphics.hpp>
#include "ResourcePath.h"
#include "Overlap.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Works!");

	sf::Texture pikaT;
	pikaT.loadFromFile(resourcePath() + "assets\\pikachu.png");
	sf::Sprite pikaS(pikaT);
	pikaS.setOrigin(pikaS.getGlobalBounds().width / 2, pikaS.getGlobalBounds().height / 2);
	pikaS.setPosition(400, 300);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(pikaS);
		window.display();
	}

	return 0;
}
