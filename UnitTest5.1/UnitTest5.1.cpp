#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.1/Pr5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s = 2000;
			double t = 2;
			double expected = 0.25;
			double result = h(t, sqrt(s * s + t * t));
			Assert::AreEqual(0.25, result);
		}
	};
}
