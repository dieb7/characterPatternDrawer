/*
 * PatternFactory.h
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#ifndef INCLUDE_PATTERNFACTORY_H_
#define INCLUDE_PATTERNFACTORY_H_

#include "CharacterRow.h"
#include <list>

class PatternFactory {
public:
	PatternFactory() {};
	virtual ~PatternFactory() {};

	virtual CharacterRow * createCharacterRow() = 0;

	std::list<CharacterRow *> createPattern(int rowAmount);

	void destroyPattern(std::list<CharacterRow *> pattern);
};

#endif /* INCLUDE_PATTERNFACTORY_H_ */
