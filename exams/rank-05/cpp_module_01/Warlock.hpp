#include <iostream>

class Warlock {
	private:
		Warlock& operator=(Warlock const & other);
		Warlock();
		Warlock(Warlock const & other);
		std::string title;
		std::string name;
	public:
		~Warlock();
		Warlock(std::string name, std::string title);
		std::string const & getTitle() const;
		std::string const & getName() const;
		void setTitle(std::string const & str);
		void introduce() const;
};
