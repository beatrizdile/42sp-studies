#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);
	public:
		~Warlock();
		Warlock(std::string name, std::string title);
		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(std::string const str);
		void introduce() const;
};
