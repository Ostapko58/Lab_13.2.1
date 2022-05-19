#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_13.2.1/Lab_13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Z, 2);
		}
	};
}
