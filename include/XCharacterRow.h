/*
 * xCharacterRow.h
 * This is a subclass of the CharacterRow abstract class. It implements the produceCharacters method
 * so that the the pattern drawn is an X
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#ifndef INCLUDE_XCHARACTERROW_H_
#define INCLUDE_XCHARACTERROW_H_

#include "CharacterRow.h"

class XCharacterRow: public CharacterRow {
public:
	XCharacterRow() {};
	virtual ~XCharacterRow() {};

	/**
	 * Creates a string with the characters of this row for the X pattern
	 * @return a string containing all characters of this row
	 */
	std::string produceCharacters();
};

#endif /* INCLUDE_XCHARACTERROW_H_ */
