#include "SFML/Graphics.hpp"

int main() {

	using namespace sf;

	Color window_clear_color(238, 153, 255);

	RenderWindow window(VideoMode(640, 480), "SFML Application", Style::Default);

	while (window.isOpen()) {

		Event window_event;
		while (window.pollEvent(window_event)) {
			if (window_event.type == Event::Resized) {
				printf("SFML: window was resized to [%i, %i]\n", window_event.size.width, window_event.size.height);
			}

			if (Keyboard::isKeyPressed(Keyboard::Escape) || window_event.type == window_event.Closed) {
				window.clear();
				window.close();
			}
		}

		window.clear(window_clear_color);
		window.display();
	}


	return 0;
}