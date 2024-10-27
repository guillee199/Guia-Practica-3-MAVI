#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main(){
	Texture cuadrado;
	Sprite sprite;
	cuadrado.loadFromFile("./assets/chessw.png");
	sprite.setTexture(cuadrado);
	sprite.rotate(45);
	sprite.setPosition(400, 200);


	sf::RenderWindow App(VideoMode(800, 600, 32), "Rotación");
	while (App.isOpen()) {
		App.clear();
		App.draw(sprite);
		App.display();
	}
	return 0;
}

