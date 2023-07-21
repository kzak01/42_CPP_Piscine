#ifndef DUMMY_HPP
# define DUMMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget {
	public:
		Dummy() : ATarget("Target Practice Dummy") {}

		ATarget* clone() const {return new Dummy();}
};

#endif
