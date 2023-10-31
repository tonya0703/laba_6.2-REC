#include "pch.h"
#include "CppUnitTest.h"
#include "../ap_6.2 REC/6.2 REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62REC
{
	TEST_CLASS(UnitTest62REC)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[] = { 1,3,-5,4,-6 };
			int S = FindMinIndex(t, 4, t[0], -1, 0);
			Assert::AreEqual(10, 10);
		}
	};
}
