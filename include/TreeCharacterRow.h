/*
 * TreeCharacterRow.h
 * This is a subclass of the CharacterRow abstract class. It implements the produceCharacters method
 * so that the the pattern drawn is a Christmas tree.
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#ifndef INCLUDE_TREECHARACTERROW_H_
#define INCLUDE_TREECHARACTERROW_H_

#include "CharacterRow.h"

class TreeCharacterRow: public CharacterRow {
public:
	TreeCharacterRow() {};
	virtual ~TreeCharacterRow() {};

	/**
	 * Creates a string with the characters of this row for the tree pattern
	 * @return a string containing all characters of this row
	 */
	std::string produceCharacters();
};

#endif /* INCLUDE_TREECHARACTERROW_H_ */
