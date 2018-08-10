/*
 * PatternDrawer.h
 * This class draws a pattern. It uses a PatternFactory object to create the
 * CharacterRow objects it needs. This PatternFactory object can be swapped
 * so that this class can draw different patterns. Besides the PatternFactory
 * object it needs to know total number of rows for the pattern.
 *
 *  Created on: Aug 10, 2018
 *      Author: diebm
 */

#ifndef INCLUDE_PATTERNDRAWER_H_
#define INCLUDE_PATTERNDRAWER_H_

#include "PatternFactory.h"

class PatternDrawer {
	PatternFactory * patternFactory;
	int rowTotal;
public:
	PatternDrawer();
	virtual ~PatternDrawer() {};

	PatternFactory* getPatternFactory() {
		return patternFactory;
	}

	void setPatternFactory(PatternFactory* patternFactory) {
		this->patternFactory = patternFactory;
	}

	int getRowTotal() const {
		return rowTotal;
	}

	void setRowTotal(int rowTotal) {
		this->rowTotal = rowTotal;
	}


	/**
	 * Draws a pattern.
	 */
	void draw();
};

#endif /* INCLUDE_PATTERNDRAWER_H_ */
