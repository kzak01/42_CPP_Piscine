#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(const Warlock&);
		Warlock& operator=(const Warlock&);

	public:
		Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
			std::cout << name << ": This looks like another boring day." << std::endl;
		}
		~Warlock() {
			std::cout << name << ": My job here is done!" << std::endl;
		}

		const std::string& getName() const {return name;}
		const std::string& getTitle() const {return title;}
		void setTitle(const std::string& title) {this->title = title;}

		void introduce() const {
			std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
		}
};

#endif
