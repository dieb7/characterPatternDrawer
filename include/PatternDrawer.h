/*
 * PatternDrawer.h
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

	void draw();
};

#endif /* INCLUDE_PATTERNDRAWER_H_ */
