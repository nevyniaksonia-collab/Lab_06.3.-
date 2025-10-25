#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3.рек/Lab_06.3.рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int arr[5];
            create(arr, 5, 1, 10, 0);
            for (int i = 0; i < 5; i++) 
            Assert::IsTrue(arr[i] >= 1 && arr[i] <= 10);
		}
        TEST_METHOD(TestMethod2)
        {
            int arr1[] = { 1,2,3 };
            int arr2[] = { 1,3,2 };
            Assert::IsTrue(isNonDec(arr1, 3, 0));
            Assert::IsFalse(isNonDec(arr2, 3, 0));
        }
        TEST_METHOD(TestMethod3)
            {
            int arr[4];
            SecondCreate(arr, 4, 0, 5, 0);
            for (int i = 0; i < 4; i++) Assert::IsTrue(arr[i] >= 0 && arr[i] <= 5);
            int arr2[] = { 2,2,5,7 };
            Assert::IsTrue(SecondIsNonDec(arr2, 4, 0));
        }
	};
}

           

       