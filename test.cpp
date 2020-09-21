#define CATCH_CONFIG_MAIN 
#include "functions_to implement.cpp"

TEST_CASE( "testing Sign", "[Sign]" ) {
    REQUIRE( Sign(-1) == 1 );
    REQUIRE( Sign(1) == -1 );
    REQUIRE( Sign(-54) == 54 );
    REQUIRE( Sign(54) == -54 );

}
