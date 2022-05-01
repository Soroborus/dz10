#ifndef PEOPLE_H
#define PEOPLE_H
class Human {
protected:
	std::string surname, name, midname;
	int age=0;
public:
	Human() {

	}

	
	Human(std::string a, std::string b, std::string c, int l) {
		age = l;
		surname = a;
		name = b;
		midname = c;

	}
	virtual void print() = 0;

	
		
	
	
	~Human(){

	}
};

class Student:public Human {
public:
	Student() {

	}
	virtual void print() {
		std::cout <<"Student"<<this->name << " " << surname << " " << midname << " " << age << "y.o.";
		if (OnLesson) {
			std::cout << " is on lesson" << std::endl;
		}
		else {
			std::cout << " is not on lesson" << std::endl;
		}
	}
	Student(std::string a, std::string b, std::string c, int l) :Human ( a,  b,  c, l) {

	}
	~Student(){

	}
private:
	bool OnLesson=0;
};

class Boss :public Human {
private:
	int NumberOfWorkers=0;
public:
	Boss() {

	}
	Boss(std::string a, std::string b, std::string c, int l) :Human(a, b, c, l) {

	}
	~Boss() {

	}
	virtual void print() {
		std::cout <<"Boss "<< this->name << " " << surname << " " << midname << " " << age << "y.o." << " has " << NumberOfWorkers << " workers" << std::endl;
	}
};
#endif
