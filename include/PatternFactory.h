/*
 * PatternFactory.h
 * This is an abstract base class that creates CharacterRow objects. It is used to
 * implement the factory object pattern. So that subclasses can define the type of
 * CharacterRow subclasses it provides.
 * Subclasses only need to implement the createCharacterRow method.
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

	/**
	 * Creates a new CharacterRow object
	 * @return a CharacterRow object
	 */
	virtual CharacterRow * createCharacterRow() = 0;

	/**
	 * Creates a sequence of CharacterRow objects on a list to be iterated
	 * @return a CharacterRow list
	 */
	std::list<CharacterRow *> createPattern(int rowAmount);

	/**
	 * Destroys a CharacterRow list
	 */
	void destroyPattern(std::list<CharacterRow *> pattern);
};

#endif /* INCLUDE_PATTERNFACTORY_H_ */
