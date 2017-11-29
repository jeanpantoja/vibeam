#pragma once

#include <string>

namespace vibeam
{
namespace composition
{
	class Material
	{
	    public:
	    	/**
	    	* @param name std::string Name of material
	    	* @param density double Density in Kg/m^3 units
	    	* @param elasticity double Elasticity in Pa units
	    	* @param poisson double Poisson ratio
	    	*/
	    	Material(
	    	    const std::string & name,
	    	    double density,
	    	    double elasticity,
	    	    double poisson 
	    	);

	    	~Material() = default;

           /**
	    	* @return name std::string Name of material
	    	*/
	    	const std::string & name() const;

	        /**
	    	* @return double Density in Kg/m^3 units
	    	*/
	    	double density() const;

	        /**
	    	* @return double Elasticity modulus in Pa units
	    	*/
	    	double elasticity() const;

	        /**
	    	* @return double Shear modulus in Pa units
	    	*/
	    	double shear() const;

	    private:
	    	std::string _name;
	    	double _density;
	    	double _elasticity;
	    	double _poisson;
	};
}//namespace vibeam::composition
}//namespace vibeam
