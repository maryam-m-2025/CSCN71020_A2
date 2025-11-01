#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.c"  // Adjusted path for your project structure
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A2Tests
{
    TEST_CLASS(CSCN71020A2Tests)
    {
    public:

        // Task 1: One unit test for getPerimeter
        TEST_METHOD(TestGetPerimeter_ValidDimensions_ReturnsCorrectPerimeter)
        {
            // Arrange
            int length = 5;
            int width = 10;
            int expected = 30; // 2*(5+10) = 30

            // Act
            int actual = getPerimeter(&length, &width);

            // Assert
            Assert::AreEqual(expected, actual);
        }

        // Task 1: One unit test for getArea
        TEST_METHOD(TestGetArea_ValidDimensions_ReturnsCorrectArea)
        {
            // Arrange
            int length = 5;
            int width = 10;
            int expected = 50; // 5*10 = 50

            // Act
            int actual = getArea(&length, &width);

            // Assert
            Assert::AreEqual(expected, actual);
        }

        // Task 2: Three unit tests for setLength
        TEST_METHOD(TestSetLength_ValidMidRangeInput_SetsLengthCorrectly)
        {
            // Arrange
            int length = 1;

            // Act
            setLength(50, &length);

            // Assert
            Assert::AreEqual(50, length);
        }

        TEST_METHOD(TestSetLength_EdgeCaseMinimum_SetsLengthToOne)
        {
            // Arrange
            int length = 10;

            // Act
            setLength(1, &length);

            // Assert
            Assert::AreEqual(1, length);
        }

        TEST_METHOD(TestSetLength_EdgeCaseMaximum_SetsLengthToNinetyNine)
        {
            // Arrange
            int length = 1;

            // Act
            setLength(99, &length);

            // Assert
            Assert::AreEqual(99, length);
        }

        // Task 2: Three unit tests for setWidth
        TEST_METHOD(TestSetWidth_ValidMidRangeInput_SetsWidthCorrectly)
        {
            // Arrange
            int width = 1;

            // Act
            setWidth(75, &width);

            // Assert
            Assert::AreEqual(75, width);
        }

        TEST_METHOD(TestSetWidth_EdgeCaseMinimum_SetsWidthToOne)
        {
            // Arrange
            int width = 50;

            // Act
            setWidth(1, &width);

            // Assert
            Assert::AreEqual(1, width);
        }

        TEST_METHOD(TestSetWidth_EdgeCaseMaximum_SetsWidthToNinetyNine)
        {
            // Arrange
            int width = 1;

            // Act
            setWidth(99, &width);

            // Assert
            Assert::AreEqual(99, width);
        }
    };
}