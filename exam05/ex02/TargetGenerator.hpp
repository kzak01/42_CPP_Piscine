#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> targetTypes;

		TargetGenerator(const TargetGenerator&);
		TargetGenerator& operator=(const TargetGenerator&);

	public:
		TargetGenerator() {}
		~TargetGenerator() {}

		void learnTargetType(ATarget* targetType) {
			if (targetType)
				targetTypes[targetType->getType()] = targetType;
		}
		void forgetTargetType(const std::string& targetType) {
			if (targetTypes.find(targetType) != targetTypes.end())
				targetTypes.erase(targetTypes.find(targetType));
		}
		ATarget* createTarget(const std::string& targetType) {
			ATarget* target = NULL;
			if (targetTypes.find(targetType) != targetTypes.end())
				target = targetTypes[targetType];
			return target;
		}
};

#endif
