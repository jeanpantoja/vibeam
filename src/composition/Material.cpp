#include "vibeam/composition/Material.hpp"

namespace vibeam
{
namespace composition
{
    Material::Material(
        const std::string & name,
        double density,
        double elasticity,
        double poisson
    )
        : _name( name )
        , _density( density )
        , _elasticity( elasticity )
        , _poisson( poisson )
    {
    }

    const std::string & Material::name() const
    {
    	return _name;
    }

    double Material::density() const
    {
    	return _density;
    }

    double Material::elasticity() const
    {
        return _elasticity;
    }

    double Material::shear() const
    {
    	return _elasticity / ( 2 * ( 1 + _poisson ) );
    }

}//namespace vibeam::composition
}//namespace vibeam
