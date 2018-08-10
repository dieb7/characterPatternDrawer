/*
 * CharacterRow.h
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

	virtual std::string produceCharacters() = 0;
};

#endif /* INCLUDE_CHARACTERROW_H_ */
