#include <gtest/gtest.h>

#include "../include/time_converter.h"

TEST(TimeConverterTest, ConvertAM) {
    ASSERT_EQ(time_converter(12, 0, "am"), "0000");   // полночь
    ASSERT_EQ(time_converter(1, 30, "am"), "0130");   // раннее утро
    ASSERT_EQ(time_converter(11, 59, "am"), "1159");  // перед полуднем
}

TEST(TimeConverterTest, ConvertPM) {
    ASSERT_EQ(time_converter(12, 0, "pm"), "1200");   // полдень
    ASSERT_EQ(time_converter(12, 59, "pm"), "1259");  // час дня
    ASSERT_EQ(time_converter(1, 0, "pm"), "1300");    // 13:00
    ASSERT_EQ(time_converter(6, 45, "pm"), "1845");   // вечер
    ASSERT_EQ(time_converter(11, 59, "pm"), "2359");  // перед полуночью
}

TEST(TimeConverterTest, BoundaryCases) {
    ASSERT_EQ(time_converter(12, 0, "am"), "0000");   // ровно полночь
    ASSERT_EQ(time_converter(12, 0, "pm"), "1200");   // ровно полдень
    ASSERT_EQ(time_converter(12, 59, "am"), "0059");  // 00:59
    ASSERT_EQ(time_converter(11, 0, "am"), "1100");   // ровно 11 утра
}

TEST(TimeConverterTest, ZeroMinutes) {
    ASSERT_EQ(time_converter(1, 0, "am"), "0100");
    ASSERT_EQ(time_converter(1, 0, "pm"), "1300");
}
