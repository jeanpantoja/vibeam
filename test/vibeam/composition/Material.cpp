#include<string>

#include <catch.hpp>

#include "vibeam/composition/Material.hpp"

using vibeam::composition::Material;

#define NAME "gold"
#define DENSITY 19300.0
#define ELASTICITY 79.0E9
#define POISSON 0.44
#define SHEAR 27430555555.55


SCENARIO( "After material creation", "[vibeam::composition::Material]" )
{
    Material m( NAME , DENSITY, ELASTICITY, POISSON );

    GIVEN( "A material with name[gold]"  )
    {
        WHEN( "when asking your name" )
        {   
            THEN( "the answer must be gold" )
            {
                REQUIRE( m.name() == NAME );
            }
        }
    }

    GIVEN( "A material with density[2.0]" )
    {
        WHEN( "when asking your density" )
        {   
            THEN( "the answer must be 2.0 " )
            {
                REQUIRE( m.density() == DENSITY );
            }
        }
    }

    GIVEN( "A material with elasticity[4.0]" )
    {
        WHEN( "when asking your elasticity" )
        {   
            THEN( "the answer must be 4.0" )
            {
                REQUIRE( m.elasticity() == ELASTICITY );
            }
        }
    }

    GIVEN( "A material with poisson[3.0] elasticity[4.0]" )
    {
        WHEN( "when asking your shear" )
        {   
            THEN( "the shear must be approximated of 0.5 " )
            {
                REQUIRE( m.shear() ==  Approx( SHEAR ) );
            }
        }
    }
}