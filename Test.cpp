#include <iostream>
#include <string>
#include "doctest.h"
#include "PhoneticFinder.hpp"



using namespace phonetic;
using namespace std;



TEST_CASE("Test replacement of p and b") \\teacher
{
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}



TEST_CASE("Test replacement of g and j") \\me
{
    string text = "searching in google";
    CHECK(find(text, "google") == string("google"));
    CHECK(find(text, "joojle") == string("google"));
    CHECK(find(text, "goojle") == string("google"));
    CHECK(find(text, "joogle") == string("google"));
    CHECK(find(text, "searchinj") == string("searching"));
}



TEST_CASE("Test replacement of lower-case and upper-case") \\teacher
{
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
}



TEST_CASE("Test replacement of lower-case and upper-case") \\me
{
     string text = "A Lot oF pEoplE Think diFFerenTLy";
     CHECK(find(text, "oF") == string("oF"));
     CHECK(find(text, "of") == string("oF"));
     CHECK(find(text, "OF") == string("oF"));
     CHECK(find(text, "LoT") == string("Lot"));
     CHECK(find(text, "lot") == string("Lot"));
     CHECK(find(text, "LOT") == string("Lot"));
     CHECK(find(text, "PEOPLE") == string("pEoplE"));
     CHECK(find(text, "pEoplE") == string("pEoplE"));
     CHECK(find(text, "people") == string("pEoplE"));
     CHECK(find(text, "think") == string("Think"));
     CHECK(find(text, "THINK") == string("Think"));
     CHECK(find(text, "diFFerenTLy") == string("diFFerenTLy"));
     CHECK(find(text, "differenTLy") == string("diFFerenTLy"));
     CHECK(find(text, "differently") == string("diFFerenTLy"));
     }
     
     


TEST_CASE("text not found") \\me
{
     string text = "i Love my Parents";
     CHECK_THROWS(find(text, "pare"));
     CHECK_THROWS(find(text, "z"));
     CHECK_THROWS(find(text, "D"));
     CHECK_THROWS(find(text, "Lo"));
     CHECK_THROWS(find(text, "pa"));
     CHECK_THROWS(find(text, "lov"));
     CHECK_THROWS(find(text, "we"));
     CHECK_THROWS(find(text, "paren"));
     CHECK_THROWS(find(text, "moon"));
     CHECK_THROWS(find(text, "sun"));
     CHECK_THROWS(find(text, " "));
     CHECK_THROWS(find(text, ", ,"));
     CHECK_THROWS(find(text, "no one"));
     CHECK_THROWS(find(text, "and or"));
}
 
 
TEST_CASE("Appears twice or more") \\me
{
      string text = "A Lot oF OF A pEoplE Think diFFerenTLy Think";
      CHECK(find(text, "OF") == string("oF"));
      CHECK(find(text, "THINK") == string("Think"));
}
 
 
 
 
 
 
 
 
