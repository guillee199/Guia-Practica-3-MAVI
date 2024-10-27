
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main() {
	Texture red, blue;
	Sprite sprite1, sprite2, sprite3, sprite4, sprite5;
	red.loadFromFile("./assets/rcircle.png");
	blue.loadFromFile("./assets/bcircle.png");
	sprite1.setTexture(red); 
	sprite2.setTexture(red); sprite2.setPosition(672, 0);
	sprite3.setTexture(red); sprite3.setPosition(672, 472);
	sprite4.setTexture(red); sprite4.setPosition(0, 472);
	sprite5.setTexture(blue); sprite5.setScale(0.3f, 0.3f); sprite5.setPosition(343, 243);

	sf::RenderWindow App(VideoMode(800, 600, 32), "Transparencias");
	while (App.isOpen())
	{
		App.clear();
		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.draw(sprite5);
		App.display();
	}
	return 0;
}