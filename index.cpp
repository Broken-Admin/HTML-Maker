#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
std::ofstream out;
std::string graphText;
int graphNum;
int fontSize;

int main() {
	out.open("index.html");
	out << "<body>\n";
	std::cout << "How many body paragraphs?\n";
	std::cin >> graphNum; if (graphNum<1) { srand(time(NULL)); graphNum = rand() % 30; }
	std::cout << "\nWhat do you want their text to be?\n";
	std::cin  >> graphText;
	std::cout << "Font size?\n";
	std::cin >> fontSize;
	out << "<style>\n	p{\n		color:#e81010;\n		text-align:center;\n		font-size:"<<fontSize<<"px;\n	}\n    html{\n		background-color:black;\n	}\n</style>\n";
	for (int i=0; i < graphNum; i++) {
		out << "<p>\n";
		out << graphText<<"\n";
		out << "</p>\n";
	}
	out << "</body>";
	out.close();
}