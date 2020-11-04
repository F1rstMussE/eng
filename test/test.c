#include"ctest.h"
#include"en.h"

CTEST(check_for_load,loading_valid_file){
        char text[20][40];
        char name[] = "base.txt";
        ASSERT_EQUAL(1,load(text,name));
}
CTEST(check_for_load,loading_invalid_file){
        char text[20][40];
        char name[] = "words.txt";
        ASSERT_EQUAL(0,load(text,name));
}
CTEST(Primary_word_check,Cat){
        char text[20][40];
        char name[] = "base.txt";
        char texts[40] = {'-','C','a','t'};
        load(text,name);
        ASSERT_EQUAL(1,check(text,1,texts,2));
}
CTEST(Primary_word_invalid_check,Dog){
        char text[20][40];
        char name[] = "base.txt";
        char texts[40] = {'-','D','o','g'};
        load(text,name);
        ASSERT_EQUAL(0,check(text,1,texts,2));
}
