#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.4 rekur/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 2;
			int a[n] = { 1, 2 };
			t = Max(a, n, 1, a[0]);
			Assert::AreEqual(2, t);
		}
	};
}
