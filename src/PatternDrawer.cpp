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
	if (patternFactory) {
		std::list<CharacterRow *> pattern = patternFactory->createPattern(rowTotal);

		for (auto row: pattern) {
			std::cout << row->produceCharacters() << std::endl;
		}

		patternFactory->destroyPattern(pattern);
	}
}
