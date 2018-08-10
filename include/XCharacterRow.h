/*
 * xCharacterRow.h
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
	std::string produceCharacters();
};

#endif /* INCLUDE_XCHARACTERROW_H_ */
