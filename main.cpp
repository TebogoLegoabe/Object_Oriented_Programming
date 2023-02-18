#include<iostream>
/**
 * main - Object_Oriented_Programming
 * 
 * Return: 0 (Success)
*/
class abstractEmployee
{
    virtual void askForPromotion() = 0; //abstract function
};
class Employee:abstractEmployee
{
    public:
    void setName(std::string name){
        Name = name;
    }
    void setCompany(std::string company){
        Company = company;
    }
    void setAge(int age){
        Age = age;
    }
    std::string getName(){
        return Name;
    }
    std::string getCompany(){
        return Company;
    }
    int getAge(){
        return Age;
    }
    Employee(std::string name,std::string company,int age)
    {
        Name = name;
        Company = company;
        Age = age;
    };
    void introduce_yourself()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }
    void askForPromotion(){
        if(Age>30){
            std::cout << getName() << " got promoted" << std::endl;
        }
        else
        std::cout << "Sorry you do not meet the requirements for promotion" << std::endl;
    }
    void Work(){
        std::cout << getName() << " is working" << std::endl;
    }
    protected:
    //std::string Name;
    private:
     std::string Name;
    std::string Company;
    int Age;
};
class Developer:public Employee {
public:
std::string FavLanguage;
Developer(std::string name,std::string company,int age,std::string favLanguage)
:Employee(name,company,age)
{
    FavLanguage = favLanguage;
}
void fixBug(){
    std::cout << getName() << " fixed bug using " << FavLanguage << std::endl;
}
void Work(){
        std::cout << getName() << " not working" << std::endl;
    }
};
class Teacher:public Employee {
    public:
std::string Subject;
Teacher(std::string name,std::string company,int age,std::string subject)
:Employee(name,company,age){
    Subject = subject;
};
void prepareLesson() {
    std::cout << getName() << " is preparing " << Subject << " lesson " << std::endl;
}
void Work(){
        std::cout << getName() << " is teaching" << Subject << std::endl;
    }
};
int main()
{
   Employee obj = Employee("Tebogo","Amazon",45);
   //obj.askForPromotion();

   Developer obj2 = Developer("Tebogo","Amazon",45,"C++");
  // obj2.fixBug();

   Teacher obj3 = Teacher("Jack","DG",35,"Life_Science");
   obj3.prepareLesson();
   obj3.askForPromotion();
    obj2.Work();
   obj3.Work();
    obj.Work();
    
std::cin.get();
}
