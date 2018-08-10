/*
 * TreePatternFactory.h
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#ifndef INCLUDE_TREEPATTERNFACTORY_H_
#define INCLUDE_TREEPATTERNFACTORY_H_

#include "PatternFactory.h"
#include "TreeCharacterRow.h"

class TreePatternFactory: public PatternFactory {
public:
	TreePatternFactory() {};
	virtual ~TreePatternFactory() {};

	CharacterRow * createCharacterRow() {
		return new TreeCharacterRow();
	}
};

#endif /* INCLUDE_TREEPATTERNFACTORY_H_ */
