#include "TreeCharacterRow.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"
#include <string>

TEST_GROUP(TreeCharacterRow)
{
	TreeCharacterRow* treeCharacterRow;

	void setup()
	{
		treeCharacterRow = new TreeCharacterRow();
	}
	void teardown()
	{
		delete treeCharacterRow;
	}
};

TEST(TreeCharacterRow, noRows)
{
	treeCharacterRow->setRowIndex(0);
	treeCharacterRow->setRowTotal(0);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL("", rowContent.data());
}

TEST(TreeCharacterRow, firstRow1row)
{
	treeCharacterRow->setRowIndex(0);
	treeCharacterRow->setRowTotal(1);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL("*", rowContent.data());
}

TEST(TreeCharacterRow, firstRow2rows)
{
	treeCharacterRow->setRowIndex(0);
	treeCharacterRow->setRowTotal(2);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL(" * ", rowContent.data());
}

TEST(TreeCharacterRow, secondRow2rows)
{
	treeCharacterRow->setRowIndex(1);
	treeCharacterRow->setRowTotal(2);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL("***", rowContent.data());
}

TEST(TreeCharacterRow, firstRow3rows)
{
	treeCharacterRow->setRowIndex(0);
	treeCharacterRow->setRowTotal(3);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL("  *  ", rowContent.data());
}

TEST(TreeCharacterRow, secondRow3rows)
{
	treeCharacterRow->setRowIndex(1);
	treeCharacterRow->setRowTotal(3);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL(" *** ", rowContent.data());
}

TEST(TreeCharacterRow, thirdRow3rows)
{
	treeCharacterRow->setRowIndex(2);
	treeCharacterRow->setRowTotal(3);

	std::string rowContent = treeCharacterRow->produceCharacters();

	STRCMP_EQUAL("*****", rowContent.data());
}
