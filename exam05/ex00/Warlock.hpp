
#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

using namespace std;

class Warlock {
	private:
		string name;
		string title;
	public:
		Warlock(const string& name, const string& title) : name(name), title(title) {
			cout << name << ": This look .." << endl;
		}
		~Warlock() {cout << name << ": My job .." << endl;}
		Warlock(const Warlock&) = delete;
		Warlock& operator=(const Warlock&) = delete;

		const string& getName() const {return name;}
		const string& getTitle() const {return title;}

		void setTitle(const string& title) {this->title = title;}

		void introduce() const { cout << name << "I am" << name << ", " << title << "!" << endl;}
};

#endif
