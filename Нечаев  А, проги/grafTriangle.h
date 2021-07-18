#ifndef grafTriangle_h
#define grafTriangle_h
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

void DrawTriangle()
{
	system("cls");
	int widght, high;
	float x1, y1, x2, y2, x3, y3;
	cout << "Enter the size of the window:\n"; cin >> widght >> high;
	cout << "Enter vector coordinates.\nP1: "; cin >> x1 >> y1;
	cout << "P2: "; cin >> x2 >> y2;
	cout << "P3: "; cin >> x3 >> y3;

	
	RenderWindow window(VideoMode(widght, high), "Triangle");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}
		
		window.clear(Color(255, 255, 255, 0));
		ConvexShape tringle;
		tringle.setPointCount(3);
		tringle.setPoint(0, Vector2f(x1, y1));
		tringle.setPoint(1, Vector2f(x2, y2));
		tringle.setPoint(2, Vector2f(x3, y3));
		tringle.setFillColor(Color::Red);
		tringle.move(0, 0);
		window.draw(tringle);
		window.display();
	}
}
#endif
