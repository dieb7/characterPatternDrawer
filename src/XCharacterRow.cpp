/*
 * xCharacterRow.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#include "XCharacterRow.h"

std::string XCharacterRow::produceCharacters() {
	// TODO: There are probably nicer ways to do this
	if (!rowTotal) { // we got nothing to print
		return std::string("");
	}

	std::string rowContent;

	for (int i = 0; i < rowTotal; i++) {
		rowContent.append(" ");
	}

	rowContent[rowIndex] = '*';

	rowContent[rowTotal - 1 - rowIndex] = '*';

	return rowContent;
}
