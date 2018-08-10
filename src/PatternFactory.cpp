/*
 * PatternFactory.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#include "PatternFactory.h"

std::list<CharacterRow*> PatternFactory::createPattern(int rowAmount) {
	std::list<CharacterRow*> pattern;
	for (int i = 0; i < rowAmount; i++) {
		// we create CharacterRow objects and adjust its parameters
		CharacterRow * characterRow = createCharacterRow();
		characterRow->setRowTotal(rowAmount);
		characterRow->setRowIndex(i);
		pattern.push_back(characterRow);
	}
	return pattern;
}

void PatternFactory::destroyPattern(std::list<CharacterRow*> pattern) {
	for (auto temp: pattern) {
		// we iterate the list and destroy every CharacterRow object created
		delete temp;
	}
}
