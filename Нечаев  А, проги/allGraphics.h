#ifndef allGraphics_h
#define allGraphics_h
#include <SFML\Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int widght = 640, high = 480;
void DrawTriangle()
{
	system("cls");
	float x1, y1, x2, y2, x3, y3;
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

void EllipseDraw() {
	system("cls");
	float r;
	cout << "Enter the radius of the circle: "; cin >> r;

	RenderWindow window(VideoMode(widght, high), "Ellipse");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color(255, 255, 255, 0));

		CircleShape ellipse(r, 360);
		ellipse.setFillColor(Color::Red);
		ellipse.setScale(2, 1);
		ellipse.move(0, 0);
		window.draw(ellipse);
		window.display();
	}
}

void RectangleDraw() {
	system("cls");
	float b, a;
	cout << "Enter the sides of the rectangle: A and B"; cin >> a >> b;

	RenderWindow window(VideoMode(widght, high), "Rectangle");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear(Color(255, 255, 255, 0));
		RectangleShape square(Vector2f(a, b));
		square.move(0, 0);
		square.setFillColor(Color::Red);
		window.draw(square);
		window.display();

	}
}

void SquareDraw() {
	system("cls");
	float b;
	cout << "Enter the side of the square: "; cin >> b;

	RenderWindow window(VideoMode(widght, high), "Square");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear(Color(255, 255, 255, 0));
		RectangleShape square(Vector2f(b, b));
		square.move(0, 0);
		square.setFillColor(Color::Red);
		window.draw(square);
		window.display();

	}
}

void TrapezoidDraw() {

	system("cls");

	float x1=0, y1 = 100, x2=120, y2 = 0, x3=100, x4=20,size = 1;
	cout << "Enter size of Trapezoid{defauly size is 120x100}: \n(If you want to small sizes u can wrire [0,1] size(default: 1))"; cin >> size;
	
	RenderWindow window(VideoMode(widght, high), "Trapezoid");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color(255, 255, 255, 0));
		ConvexShape trapezoid;
		trapezoid.setPointCount(4);
		trapezoid.setPoint(0, Vector2f(x1, y1));
		trapezoid.setPoint(1, Vector2f(x2, y1));
		trapezoid.setPoint(2, Vector2f(x3, y2));
		trapezoid.setPoint(3, Vector2f(x4, y2));
		trapezoid.setScale(size, size);
		trapezoid.setFillColor(Color::Red);
		trapezoid.move(0, 0);
		window.draw(trapezoid);

		window.display();
	}
}

void CircleDraw() {
	system("cls");
	float r;
	cout << "Enter the radius of the circle: "; cin >> r;


	RenderWindow window(VideoMode(widght, high), "Circle");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color(255, 255, 255, 0));

		CircleShape circle(r, 360);
		circle.setFillColor(Color::Red);
		circle.move(0, 0);
		window.draw(circle);
		window.display();
	}
}
void moveXY() {
	RenderWindow window(VideoMode(widght, high), "Risova4");
	window.setFramerateLimit(50);
	vector<Shape*> shapes;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			if (event.type == Event::MouseButtonPressed) {
				if (Keyboard::isKeyPressed(Keyboard::Num1)) {
					CircleShape* shape = new CircleShape(60);
					shape->setPosition(event.mouseButton.x, event.mouseButton.y);
					shape->setFillColor(Color::Green);
					shapes.push_back(shape);
				}
				if (Keyboard::isKeyPressed(Keyboard::Num2)) {
					RectangleShape* shape = new RectangleShape(Vector2f(150, 60));
					shape->setPosition(event.mouseButton.x, event.mouseButton.y);
					shape->setFillColor(Color::Red);
					shapes.push_back(shape);
				}
				if (Keyboard::isKeyPressed(Keyboard::Num3)) {
					RectangleShape* shape = new RectangleShape(Vector2f(120, 120));
					shape->setPosition(event.mouseButton.x, event.mouseButton.y);
					shape->setFillColor(Color::Blue);
					shapes.push_back(shape);
				}
				if (Keyboard::isKeyPressed(Keyboard::Num4)) {
					CircleShape* shape = new CircleShape(60);
					shape->setPosition(event.mouseButton.x, event.mouseButton.y);
					shape->setScale(2, 1);
					shape->setFillColor(Color::Cyan);
					shapes.push_back(shape);
				}
				if (Keyboard::isKeyPressed(Keyboard::Num5)) {
					CircleShape* shape = new CircleShape(60, 3);
					shape->setPosition(event.mouseButton.x, event.mouseButton.y);
					shape->setFillColor(Color::Black);
					shapes.push_back(shape);
				}
				if (Keyboard::isKeyPressed(Keyboard::Num6)) {
					ConvexShape* shape = new ConvexShape;
					shape->setPointCount(4);
					shape->setPoint(0, Vector2f(0, 66));
					shape->setPoint(1, Vector2f(120, 66));
					shape->setPoint(2, Vector2f(85, 0));
					shape->setPoint(3, Vector2f(28, 0));
					shape->move(event.mouseButton.x, event.mouseButton.y);
					shape->setFillColor(Color::Magenta);
					shapes.push_back(shape);
				}
			}
		}
		window.clear(Color::White);

		for (auto it = shapes.begin(); it != shapes.end(); it++)
		{
			window.draw(**it);
		}
		window.display();
	
	}
}

void Chooser() {
	while (true)
	{
		system("cls");
		cout << "What you want?\n1-Triangle\n2-Ellipse\n3-Square\n4-Trapezoid\n5-Rectangle\n6-Circle\n7-Drawning\n8-Settings\n9-Drawning manual\n(Any Key)-Exit\nYour choice: ";
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1: DrawTriangle(); break;
		case 2: EllipseDraw(); break;
		case 3: SquareDraw(); break;
		case 4: TrapezoidDraw(); break;
		case 5: RectangleDraw(); break;
		case 6: CircleDraw(); break;
		case 7: moveXY(); break;
		case 8: cout << "Enter the size of the window: widght x  high\n"; cin >> widght; cin >> high; break;
		case 9: cout << "Before you start drawing, you need to remember the keys responsible for the shapes, Drawing is of type Key + MouseClick:\n1 - Circle\n2 - Rectangle\n3 - Square\n4 - Ellipse\n5 - Triangle\n6 - Trapezium\n";system("pause");break;
		default: return;
		}
	}
}
#endif