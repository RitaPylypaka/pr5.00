#include "pch.h"
#include "CppUnitTest.h"
#include "../пр5.0/пр5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest50
{
	TEST_CLASS(UnitTest50)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, 3);
			Assert::AreEqual(t, 0.145796, 0.0000001);
		}
	};
}
