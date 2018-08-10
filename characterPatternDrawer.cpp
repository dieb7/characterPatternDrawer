#include <iostream>
#include "PatternDrawer.h"
#include "TreePatternFactory.h"
#include <string>

int main(int argc, char **argv)
{
	PatternDrawer patternDrawer = PatternDrawer();
	TreePatternFactory treePatternFactory = TreePatternFactory();

	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <row amount>" << std::endl;
		return -1;
	}

	int rowTotal = std::stoi(argv[1]);
	if (rowTotal < 0) {
		std::cerr << "Row amount parameter needs to be greater or equal to zero" << std::endl;
		return -1;
	}

	patternDrawer.setPatternFactory(&treePatternFactory);

	patternDrawer.setRowTotal(rowTotal);

	patternDrawer.draw();

	return 0;
}

