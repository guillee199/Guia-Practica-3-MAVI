#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main(){
	Texture blue, red, yellow, grey;
	Sprite spriteblue, spritered, spriteyell, spritegrey;
	blue.loadFromFile("./assets/cuad_blue.png"); red.loadFromFile("./assets/cuad_red.png");
	yellow.loadFromFile("./assets/cuad_yellow.png"); grey.loadFromFile("./assets/cuad_grey.png");
	spriteyell.setTexture(yellow); spriteyell.setScale(0.5f, 0.5f); spriteyell.setPosition(306, 40);
	spritered.setTexture(red); spritered.setPosition(50, 40);
	spriteblue.setTexture(blue); spriteblue.setScale(2.f, 2.f); spriteblue.setPosition(50, 296);
	spritegrey.setTexture(grey); spritegrey.setScale(4.f, 4.f); spritegrey.setPosition(306, 296);

	sf::RenderWindow App(VideoMode(800, 600, 32), "Cuadrados");
	while (App.isOpen()) {
		App.clear();
		App.draw(spriteyell);
		App.draw(spritered);
		App.draw(spriteblue);
		App.draw(spritegrey);
		App.display();
	}
	return 0;
}
