<<<<<<< HEAD
#define CATCH_CONFIG_MAIN 
#include "functions_to_implement.cpp"
#include "catch.hpp"

TEST_CASE( "testing Sign", "[Sign]" ) {
    REQUIRE( Sign(-1.0) == -1.0 );
    REQUIRE( Sign(1.0) == 1.0 );
    REQUIRE( Sign(-54.0) == -1.0 );
    REQUIRE( Sign(54.0) == 1.0 );

}
=======
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"


TEST_CASE ("Factorials are computed", "[Factorial]" ) {
    REQUIRE (Factorial(0) == 1);
    REQUIRE (Factorial(1) == 1 );
    REQUIRE (Factorial(2) == 2 );
    REQUIRE (Factorial(3) == 6 );
    REQUIRE (Factorial(10) == 3628800 );
}

TEST_CASE ("Checks the sign of an integer", "[Sign]"){
    REQUIRE (Sign(0) == 0);
    REQUIRE (Sign(1) == 1);
    REQUIRE (Sign(-1) == -1);
    REQUIRE (Sign(43234) == 1);
    REQUIRE (Sign(-342343) == -1);
}
>>>>>>> fb896437fcba5d690c965a0705d6ed46652af7cb
