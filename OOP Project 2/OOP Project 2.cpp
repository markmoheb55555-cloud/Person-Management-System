#include <iostream>
#include <string>

using namespace std;

class clsPerson
{
private:
    int _Id;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:
    clsPerson(int Id, string FirstName, string LastName, string Email, string PhoneNumber)
    {
        _Id = Id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    }

    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    void setEmail(string Email)
    {
        _Email = Email;
    }

    void setPhoneNumber(string PhoneNumber)
    {
        _PhoneNumber = PhoneNumber;
    }

    string getFirstName()
    {
        return _FirstName;
    }

    string getLastName()
    {
        return _LastName;
    }

    string getEmail()
    {
        return _Email;
    }

    string getPhoneNumber()
    {
        return _PhoneNumber;
    }

    int getId()
    {
        return _Id;
    }

    void Print()
    {
        cout << "Info" << endl;
        cout << "------------------------" << endl;
        cout << "ID\t\t: " << _Id << endl;
        cout << "First Name\t: " << _FirstName << endl;
        cout << "Last Name\t: " << _LastName << endl;
        cout << "Full Name\t: " << _FirstName + " " + _LastName << endl;
        cout << "Email\t\t: " << _Email << endl;
        cout << "Phone\t\t: " << _PhoneNumber << endl;
        cout << "------------------------" << endl;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    void SendSMS(string Message)
    {
        cout << "The following SMS sent successfully to phone: " << _PhoneNumber << endl;
        cout << Message << endl;
    }
};

int main()
{
    clsPerson Person1(90, "Hasan", "Ahmed", "hasan@example.com", "0123456789");

    Person1.Print();

    cout << endl;

    Person1.SendEmail("Welcome", "Hello Hasan, welcome to our system!");

    cout << endl;

    Person1.SendSMS("Your account has been created successfully!");

    cout << endl;

    Person1.setFirstName("John");
    cout << "After changing first name: " << Person1.getFirstName() << endl;

    return 0;
}

