/*
 * CharacterRow.h
 * This is an abstract base class that represents a row of characters in a pattern.
 * This class knows about the total amount of rows in the pattern and the row index
 * assigned to it.
 *
 *  Created on: Aug 9, 2018
 *      Author: diebm
 */

#ifndef INCLUDE_CHARACTERROW_H_
#define INCLUDE_CHARACTERROW_H_

#include <string>

class CharacterRow {
protected:
	int rowIndex;
	int rowTotal;
public:
	CharacterRow() {
		rowIndex = 0;
		rowTotal = 0;
	};
	virtual ~CharacterRow() {};

	int getRowIndex() const {
		return rowIndex;
	}

	void setRowIndex(int rowIndex) {
		this->rowIndex = rowIndex;
	}

	int getRowTotal() const {
		return rowTotal;
	}

	void setRowTotal(int rowTotal) {
		this->rowTotal = rowTotal;
	}

	/**
	 * Creates a string with the characters of this row
	 * @return a string containing all characters of this row
	 */
	virtual std::string produceCharacters() = 0;
};

#endif /* INCLUDE_CHARACTERROW_H_ */
