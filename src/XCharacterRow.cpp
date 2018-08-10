/*
 * xCharacterRow.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#include "XCharacterRow.h"

std::string XCharacterRow::produceCharacters() {
	if (!rowTotal) {
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
