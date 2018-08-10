#include "TreePatternFactory.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(TreePatternFactory)
{
	TreePatternFactory* treePatternFactory;

	void setup()
	{
		treePatternFactory = new TreePatternFactory();
	}
	void teardown()
	{
		delete treePatternFactory;
	}
};

TEST(TreePatternFactory, CreateArbitrarySizePattern)
{
	std::list<CharacterRow *> pattern = treePatternFactory->createPattern(10);

	LONGS_EQUAL(pattern.size(), 10);
	
	treePatternFactory->destroyPattern(pattern);

	pattern = treePatternFactory->createPattern(22);

	LONGS_EQUAL(pattern.size(), 22);
	
	treePatternFactory->destroyPattern(pattern);
}

