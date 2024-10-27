#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main() {
	Texture white, black;
	Sprite sprite;
	white.loadFromFile("./assets/chessw.png");
	black.loadFromFile("./assets/chessb.png");
	float height = white.getSize().y;
	float width = white.getSize().x;
	float escalaX, escalaY;
	escalaY = 100 / height;
	escalaX = 100 / width;
	sprite.setScale(escalaX, escalaY);

	sf::RenderWindow App(VideoMode(800, 800, 32), "Ajedrez");
	while (App.isOpen())
	{
		App.clear();
		for (int i = 0;i < 8;i++) {
			for (int j = 0; j < 8; j++) {
				if ((i + j) % 2 == 0) {
					sprite.setTexture(white);
				}
				else {
					sprite.setTexture(black);
				}

				sprite.setPosition(j * 100, i * 100);

				App.draw(sprite);

			}
		}
		App.display();
	}
	return 0;
}
