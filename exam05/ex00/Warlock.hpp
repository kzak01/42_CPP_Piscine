#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock {
	private:
		std::string _name;
		std::string _title;

	public:
		Warlock(const std::string& name, const std::string& title);
		Warlock(const Warlock&) = delete;
		Warlock& operator=(const Warlock&) = delete;
		~Warlock();

		void setTitle(const std::string& title);
		const std::string& getName() const;
		const std::string& getTitle() const;

		void introduce() const;
};

#endif
