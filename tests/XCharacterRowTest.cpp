#include "XCharacterRow.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(XCharacterRow)
{
	XCharacterRow* xCharacterRow;

	void setup()
	{
		xCharacterRow = new XCharacterRow();
	}
	void teardown()
	{
		delete xCharacterRow;
	}
};

TEST(XCharacterRow, noRows)
{
	xCharacterRow->setRowIndex(0);
	xCharacterRow->setRowTotal(0);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("", rowContent.data());
}

TEST(XCharacterRow, firstRow1row)
{
	xCharacterRow->setRowIndex(0);
	xCharacterRow->setRowTotal(1);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("*", rowContent.data());
}

TEST(XCharacterRow, firstRow2rows)
{
	xCharacterRow->setRowIndex(0);
	xCharacterRow->setRowTotal(2);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("**", rowContent.data());
}

TEST(XCharacterRow, secondRow2rows)
{
	xCharacterRow->setRowIndex(1);
	xCharacterRow->setRowTotal(2);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("**", rowContent.data());
}

TEST(XCharacterRow, firstRow5rows)
{
	xCharacterRow->setRowIndex(0);
	xCharacterRow->setRowTotal(5);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("*   *", rowContent.data());
}

TEST(XCharacterRow, secondRow5rows)
{
	xCharacterRow->setRowIndex(1);
	xCharacterRow->setRowTotal(5);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL(" * * ", rowContent.data());
}

TEST(XCharacterRow, thirdRow5rows)
{
	xCharacterRow->setRowIndex(2);
	xCharacterRow->setRowTotal(5);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("  *  ", rowContent.data());
}

TEST(XCharacterRow, fourthRow5rows)
{
	xCharacterRow->setRowIndex(3);
	xCharacterRow->setRowTotal(5);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL(" * * ", rowContent.data());
}

TEST(XCharacterRow, fifthRow5rows)
{
	xCharacterRow->setRowIndex(4);
	xCharacterRow->setRowTotal(5);

	std::string rowContent = xCharacterRow->produceCharacters();

	STRCMP_EQUAL("*   *", rowContent.data());
}

