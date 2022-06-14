
#include <iostream>
using namespace std;

class OfficeWorker {
protected:
    string name;
public:
    OfficeWorker() {}
    OfficeWorker(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void activityPrint() {}
};

class OfficeManager: public OfficeWorker {
protected:
    float zarplata;
public:
    OfficeManager() {}
    OfficeManager(string name,float zarplata) {
        this->name = name;
        this->zarplata = zarplata;
    }
    float getZarplata() {
        return zarplata;
    }
    void activityPrint() {
        getName();
        getZarplata();
        cout << "The office manager - " << "'" << name << "'" << "performs the following duties:" << endl;
        cout << "<provides preparation of meetings and business meetings>"  << endl;
        cout << "manager's salary: " << zarplata << endl << endl;
    }
};

class Clerk : public OfficeWorker {
protected:
    float zarplata;
public:
    Clerk() {}
    Clerk(string name, float zarplata) {
        this->name = name;
        this->zarplata = zarplata;
    }
    float getZarplata() {
        return zarplata;
    }
    void activityPrint() {
        getName();
        getZarplata();
        cout << "The clerk - " << "'" << name << "'" << "performs the following duties:" << endl;
        cout << "<The clerk is responsible for: - reception, accounting, processing and registration of correspondence>"  << endl;
        cout << "clerk's salary: " << zarplata << endl << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "RUS");

    OfficeManager manager1{ "Sara", 43500 };
    OfficeManager manager2{ "Oleg", 27800 };
    Clerk clerk1{ "Petrovich",35000 };
    Clerk clerk2{ "Anna",72500 };

    manager1.activityPrint();
    manager2.activityPrint();
    clerk1.activityPrint();
    clerk2.activityPrint();
}

