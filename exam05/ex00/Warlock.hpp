#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;

	public:
		Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
			std::cout << name << ": This look .." << std::endl;
		}
		Warlock(const Warlock&) = delete;
		Warlock& operator=(const Warlock&) = delete;
		~Warlock() {
			std::cout << name << ": My job .." << std::endl;
		}

		const std::string& getName() const {return name;}
		const std::string& getTitle() const {return title;}
		void setTitle(const std::string& title) {this->title = title;}

		void introduce() const {
			std::cout << name << ": I am" << name << ", " << title << "!" << std::endl;
		}
};

#endif
