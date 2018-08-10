/*
 * treeCharacterRow.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#include "TreeCharacterRow.h"

std::string TreeCharacterRow::produceCharacters() {
	// TODO: There are probably nicer ways to do this
	if (!rowTotal) { // we got nothing to print
		return std::string("");
	}

	std::string rowContent = "*";

	// inner stars
	for (int i = 0; i < rowIndex; i++) {
		rowContent.append("*");
		rowContent.append("*");
	}

	// outer padding
	for (int i = 0; i < rowTotal - rowIndex - 1; i++) {
		rowContent.insert(0, 1, ' ');
		rowContent.append(" ");
	}

	return rowContent;
}
