#include <iostream>

class Student
{
	public:
		std::string name;
		Student(std::string name) : name(name) {}
		virtual void display() { std::cout << "Student name: " << name << std::endl; }
		virtual ~Student() { std::cout << "Student " << name << " has been deleted." << std::endl; }
};

class MedicalStudent : public Student
{
	public:
		std::string spec;
		MedicalStudent(std::string name, std::string specialty) : Student(name), spec(specialty){}
		void display() { std::cout << "Student name: " << name << " | Specialty: " << spec << std::endl; }
};

int main()
{
	Student *student[] = {
		new Student("John"),
		new MedicalStudent("Jane", "Cardiology")
	};
	
	// Polymorphism is the ability to call a method with either the base class or derived class
	for (int i = 0; i < 2; i++)
		student[i]->display();
	
	for (int i = 0; i < 2; i++)
		delete student[i];

	return (0);
}

// Dynamic Polymorphism: by using the "virtual" keyword in the base class method,
// the derived class method will always be the one called
