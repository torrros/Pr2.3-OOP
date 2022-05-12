#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\Pr2.3 OOP\Pr2.3 OOP\Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r1(1,2), r2(1, 1);
			Assert::IsTrue(r1 / r2 == Rational(1, 2));
		}
	};
}
