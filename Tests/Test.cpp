#include <gtest/gtest.h>
#include <gmock/gmock.h>

class <TEST_CLASS> : public ::testing::Test
{
public:
    virtual void SetUp()
    {
        <SET_UP_FUNCTION()>
    }

    virtual void Teardown()
    {

    }

    <CLASS> <OBJECT_NAME>;

    <TEST_CLASS_VARIABLE_1>
    <TEST_CLASS_VARIABLE_2>

    void <SET_UP_FUNCTION()>
    {
        <SOME_LOGIC>
    }
};

TEST_F(<TEST_CLASS>, testcase1)
{

}

TEST_F(<TEST_CLASS>, testcase2)
{

}
