#include <iostream>
//using namespace std;

class AbstractEmp
{
    virtual void ask4Promo() = 0;
    virtual void ask4Raise() = 0;
};

/*
    DEFAULT = PRIVATE
*/

class employee: AbstractEmp 
{
    /*
        Protected: allows child class to use properties inside it
    */
    /*
        Encapsulation 
    */
    protected:
        std::string name;
    private:
        std::string company;
        int age;
    public:

    /*
        Setter and Getter
    */
    
    void setName(std::string Name)
    {
        name = Name;
    }
    std::string getName()
    {
        return name;
    }

    void setCompany(std::string Company)
    {
        company = Company;
    }
    std::string getCompany()
    {
        return company;
    }

    void setAge(int Age)
    {
        if(Age >= 18)
        {
            age = Age;
        }
    }
    int getAge()
    {
        return age;
    }

    void intro ()
    {
        std::cout << "Name - " << name << std::endl;
        std::cout << "Company - " << company << std::endl;
        std::cout << "Age - " << age << std::endl;
    }
    /* 
        Constructor
        1. Same name as class
        2. No datatype
        3. Mostly use with "public"
    */
    employee(std::string Name, std::string Company, int Age)
    {
        name = Name;
        company = Company;
        age = Age;
    }

    /*
        Abstraction: Hiding complex things behind a procedure that makes those things look simple. EG: Smartphone makes taking photos easier. The hidden procedure behind smartphone taking a photo is called abstraction.
    */
    /*   
        1. Abstract classes are an abstraction around base classes which can be used to enforce certain functionality in all base classes.
        2. Abstract classes can be instantiated (using pointers only) eg. AbstractEmp *a1 = new employee(...); and not by creating objects of the abstract class.
        3. Abstract class pointers can point to memory addresses of instances of any of its base class
        4. Pure virtual functions can be used to enforce certain functionality in all base classes of an abstract class.
        5. Pure virtual functions will not have an implementation in the abstract class definitions, but will use a pure specifier (= 0)
        6. Virtual functions can have an implementation in the abstract class (think of it like the default functionality if none of the base classes have an implementation of that function)
    */
    
    void ask4Promo()
    {
        if (age > 30)
        {
            std::cout << name << " got promoted" << std::endl;
        }
        else
        {
            std::cout << name << " got denied for promotion" << std::endl;

        }
    }
    void ask4Raise()
    {
        if (age > 25)
        {
            std::cout << name << " got raised" << std::endl;
        }
        else
        {
            std::cout << name << " got denied for a raise" << std::endl;

        }
    }

    /*
        Polymorphism: ability of an object or a method to have many forms. EG. a parent class reference is used to refer to a child class
    */
    /*
        By making this method "virtual", it now becomes a default method for all of its child classes.
    */
    virtual void work()
    {
        std::cout << name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

/*
    Inheritance
*/

class developer: public employee
{
    public:
        std::string favLang;
    
    developer(std::string Name, std::string Company, int Age, std::string FavLang)
    :employee(Name, Company, Age) 
    {
        favLang = FavLang;
    }
    
    void FixBug()
    {
        std::cout<< name << " fixed bug using " << favLang << std::endl;
    }
    void work()
    {
        std::cout << name << " is writing code in " << favLang << std::endl;
    }
    
};

class teacher: public employee
{
    public:
    std::string subj;

    teacher(std::string Name, std::string Company, int Age, std::string Subj)
    :employee (Name, Company, Age)
    {
        subj = Subj;
    }
    void prepareLesson()
    {
        std::cout << name << " is preparing " << subj << " lesson." << std::endl;
    }
    void work()
    {
        std::cout << name << " is teaching " << subj << std::endl;
    }
};

int main()
{
    // employee emp1;
    // emp1.name = "Alex";
    // emp1.company = "Coles";
    // emp1.age = 19;
    // emp1.intro();

    employee emp1 = employee("Alex","Coles", 19);
    employee emp2 = employee("John","Coles", 40);
    emp1.intro();
    emp1.setAge(15);
    std::cout << "Age - " << emp1.getAge() << std::endl;
    emp1.ask4Promo();
    emp2.ask4Promo();
    emp1.ask4Raise();
    emp2.ask4Raise();

    developer d1 = developer("Alex", "IBM", 20, "C++");
    d1.FixBug();
    d1.ask4Promo();

    teacher t1 = teacher("Jojo", "HIGH", 200, "History");
    t1.prepareLesson();

    employee *e1 = &d1;
    employee *e2 = &t1;

    e1->work();
    e2->work();
}