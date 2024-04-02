/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("test1", "Sum of array elements is computed") {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {-1, -2, -3, -4, -5};
    REQUIRE(sumArray(arr1, 5) == 15);
    REQUIRE(sumArray(arr2, 5) == -15);
}

TEST_CASE("test2", "Maximum element is found in 2D array") {
    int arr1[2][100] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[3][100] = {{-1, -2, -3}, {-4, 5, -6}, {7, 8, 9}};
    REQUIRE(maxElement(arr1, 2, 3) == 6);
    REQUIRE(maxElement(arr2, 3, 3) == 9);
}

TEST_CASE("test3", "Diagonal sum is correct for square 2D arrays") {
    int arr1[3][100] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    int arr2[4][100] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    REQUIRE(diagonalSum(arr1, 3) == 6);
    REQUIRE(diagonalSum(arr2, 4) == 34);
}

TEST_CASE("test4", "Target element index is correctly identified or -1 if not found") {
    int arr[] = {10, 20, 30, 40, 50};
    REQUIRE(findIndex(arr, 5, 30) == 2);
    REQUIRE(findIndex(arr, 5, 60) == -1);
}

TEST_CASE("test5", "Array is correctly transposed") {
    int input[2][100] = {{1, 2}, {3, 4}};
    int expected[2][100] = {{1, 3}, {2, 4}};
    int output[2][100];
    
    transpose(input, output, 2, 2);
    
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            REQUIRE(output[i][j] == expected[i][j]);
        }
    }
}