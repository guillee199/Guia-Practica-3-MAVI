
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main() {
	Texture fondo;
	Sprite sprite;
	fondo.loadFromFile("./assets/fondo.jpg");
	float height = fondo.getSize().y;
	float width = fondo.getSize().x;
	float escalaY, escalaX;
	escalaY = 600 / height;
	escalaX = 800 / width;
	sprite.setScale(escalaX, escalaY);
	sprite.setTexture(fondo);

	sf::RenderWindow App(VideoMode(800, 600, 32), "Transparencias");
	while (App.isOpen())
	{
		App.clear();
		App.draw(sprite);
		App.display();
	}
	return 0;
}