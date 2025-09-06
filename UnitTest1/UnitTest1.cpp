#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_02/Truth.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFormula)
		{

			Truth t1(false, false, false);
			Assert::IsTrue(t1.getFormula());  

			Truth t2(false, false, true);
			Assert::IsTrue(t2.getFormula());

			Truth t3(false, true, false);
			Assert::IsTrue(t3.getFormula());

			Truth t4(false, true, true);
			Assert::IsTrue(t4.getFormula());

			Truth t5(true, false, false);
			Assert::IsFalse(t5.getFormula());

			Truth t6(true, false, true);
			Assert::IsTrue(t6.getFormula());

			Truth t7(true, true, false);
			Assert::IsTrue(t7.getFormula());

			Truth t8(true, true, true);
			Assert::IsTrue(t8.getFormula());
		}
	};
}
