#include <gtest/gtest.h>

#include <template-begin/params.hpp>

TEST(CppTemplateBegin, Params)
{
	// assign by type
	ASSERT_EQ(two<int>(2), 4);
	ASSERT_EQ(two<float>(3.14f), 6.28f);
	ASSERT_EQ(two<double>(5.12l), 10.24l);

	// auto deduce
	ASSERT_EQ(two(2), 4);
	ASSERT_EQ(two(3.14f), 6.28f);
	ASSERT_EQ(two(5.12l), 10.24l);

	ASSERT_EQ(two(std::string("12")), "1212");
}