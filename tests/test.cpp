#include "catch.hpp"
#include <stack.hpp>

TEST_CASE("Check functions", "[stack]") {
	SECTION("Check INIT")
	{
		Stack<int> IntArr;
		REQUIRE(IntArr.count() == 0);
	}
	SECTION("Check POP")
	{
		Stack<int> IntArr;
		IntArr.push(1);
		IntArr.push(2);
		IntArr.push(3);
		IntArr.pop();
		IntArr.pop();
		REQUIRE(IntArr.count() == 1);
	}
	SECTION("Check EMPTY")
	{
		Stack<int> IntArr;
		IntArr.push(1);
		IntArr.push(2);
		IntArr.push(3);
		IntArr.pop();
		IntArr.pop();
		IntArr.pop();
		REQUIRE(IntArr.count() == 0);
	}
	SECTION("Check PUSH")
	{
		Stack<int> IntArr;
		IntArr.push(1);
		IntArr.push(2);
		IntArr.push(3);
		REQUIRE(IntArr.count() == 3);
	}
}
