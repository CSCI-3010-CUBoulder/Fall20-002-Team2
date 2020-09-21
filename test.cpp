#define CATCH_CONFIG_MAIN 
#include "functions_to_implement.cpp"
#include "catch.hpp"

TEST_CASE( "testing Sign", "[Sign]" ) {
    REQUIRE( Sign(-1.0) == -1.0 );
    REQUIRE( Sign(1.0) == 1.0 );
    REQUIRE( Sign(-54.0) == -1.0 );
    REQUIRE( Sign(54.0) == 1.0 );

}
