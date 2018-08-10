/*
 * TreeCharacterRow.h
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
	std::string produceCharacters();
};

#endif /* INCLUDE_TREECHARACTERROW_H_ */
