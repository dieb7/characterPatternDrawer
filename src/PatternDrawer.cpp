/*
 * PatternDrawer.cpp
 *
 *  Created on: Aug 10, 2018
 *      Author: diebm
 */

#include "PatternDrawer.h"
#include <iostream>

PatternDrawer::PatternDrawer() {
	patternFactory = nullptr;
	rowTotal = 0;
}

void PatternDrawer::draw() {
	if (patternFactory) { // if we got a pattern factory then lets use it
		std::list<CharacterRow *> pattern = patternFactory->createPattern(rowTotal);

		for (auto row: pattern) {
			// we just iterate the list and print its contents to stdout
			std::cout << row->produceCharacters() << std::endl;
		}

		patternFactory->destroyPattern(pattern);
	}
}
