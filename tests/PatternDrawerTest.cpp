#include "PatternDrawer.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

#include "TreePatternFactory.h"
#include "XPatternFactory.h"
#include <iostream>
#include <sstream>

TEST_GROUP(PatternDrawer)
{
	PatternDrawer* patternDrawer;
	PatternFactory* patternFactory;

	// for stdout redirection
	std::streambuf* oldCoutStreamBuf;
	std::ostringstream strCout;

	void setup()
	{
		patternFactory = new TreePatternFactory();
		patternDrawer = new PatternDrawer();
		patternDrawer->setPatternFactory(patternFactory);
	}
	void teardown()
	{
		delete patternDrawer;
		delete patternFactory;
	}

	void redirectStdout() {
		oldCoutStreamBuf = std::cout.rdbuf();
		std::cout.rdbuf(strCout.rdbuf());
	}

	void restoreStdout() {
		std::cout.rdbuf(oldCoutStreamBuf);
	}
};

TEST(PatternDrawer, drawChristmasTree)
{
	patternDrawer->setRowTotal(7);

	redirectStdout();

	patternDrawer->draw();

	restoreStdout();

	const char * treeOutput = ""\
			"      *      \n"\
			"     ***     \n"\
			"    *****    \n"\
			"   *******   \n"\
			"  *********  \n"\
			" *********** \n"\
			"*************\n";

	STRCMP_EQUAL(treeOutput, strCout.str().data());
}

TEST(PatternDrawer, drawX)
{
	PatternFactory * xfactory = new XPatternFactory();

	patternDrawer->setPatternFactory(xfactory);

	patternDrawer->setRowTotal(5);

	redirectStdout();

	patternDrawer->draw();

	restoreStdout();

	const char * xOutput = ""\
			"*   *\n"\
			" * * \n"\
			"  *  \n"\
			" * * \n"\
			"*   *\n";

	STRCMP_EQUAL(xOutput, strCout.str().data());

	delete xfactory;
}

