#include <iostream>
#include "PatternDrawer.h"
#include "TreePatternFactory.h"
#include "XPatternFactory.h"
#include <string>

int main(int argc, char **argv)
{
	PatternDrawer patternDrawer = PatternDrawer();
	TreePatternFactory treePatternFactory = TreePatternFactory();
	XPatternFactory xPatternFactory = XPatternFactory();

	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " tree|x <row amount>" << std::endl;
		return -1;
	}

	std::string patternChoice = argv[1];
	if (patternChoice == "tree") {
		patternDrawer.setPatternFactory(&treePatternFactory);
	} else if (patternChoice == "x") {
		patternDrawer.setPatternFactory(&xPatternFactory);
	} else {
		std::cerr << "Invalid option " << patternChoice << std::endl;
		return -1;
	}

	int rowTotal = std::stoi(argv[2]);
	if (rowTotal < 0) {
		std::cerr << "Row amount parameter needs to be greater or equal to zero" << std::endl;
		return -1;
	}

	patternDrawer.setRowTotal(rowTotal);

	patternDrawer.draw();

	return 0;
}

