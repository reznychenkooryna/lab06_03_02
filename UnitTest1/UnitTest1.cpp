#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_03_02/Lab_06_03_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 6;
			int a[n] = { 1, 2, 3, 4, 5, 6 };
			int expected = 9;
			int result = SumEvenIndices(a, n);
			Assert::AreEqual(expected, result);
		}
	};
}
