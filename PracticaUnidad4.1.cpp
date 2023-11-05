//MAVI - Unidad 4 - Ejercicio 1
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture textureCross;
Sprite spriteCross;

int main() {

	int resolutionX = 800;
	int resolutionY = 600;
	sf::RenderWindow App(sf::VideoMode(resolutionX, resolutionY, 32), "Crosshair");
	
	textureCross.loadFromFile("Unidad4_Assets/crosshair.png");
	spriteCross.setTexture(textureCross);
	spriteCross.setScale(0.8f, 0.8f);
	//Setear posición de Crosshair al centro
	Vector2u size = textureCross.getSize();
	spriteCross.setOrigin(size.x /2.0f, size.y /2.0f);
	spriteCross.setPosition(resolutionX/2.0f, resolutionY/2.0f);


	while (App.isOpen())
	{
		sf::Event event;
		while (App.pollEvent(event)) {
			switch (event.type)
			{
				
			case sf::Event::Closed:
				App.close();
				break;
			}

		}

		App.clear();

		App.draw(spriteCross);

		App.display();
	}
	return 0;
}
