#define TESTING_ENABLED 0

#if TESTING_ENABLED
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#endif


void test_mode_check(int argc, char *argv[])
{
#if TESTING_ENABLED
    std::cout << "TEST MODE ENABLED" << std::endl;
    std::cout << "STARTING TESTS ..." << std::endl;
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
#endif
    if (!TESTING_ENABLED)
    {
        std::cout << "TEST MODE DISABLED" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    test_mode_check(argc, argv);
}
