/*
 * XPatternFactory.h
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#ifndef XPATTERNFACTORY_H_
#define XPATTERNFACTORY_H_

#include "PatternFactory.h"
#include "XCharacterRow.h"

class XPatternFactory: public PatternFactory {
public:
	XPatternFactory() {};
	virtual ~XPatternFactory() {};

	CharacterRow * createCharacterRow() {
		return new XCharacterRow();
	}
};

#endif /* XPATTERNFACTORY_H_ */
