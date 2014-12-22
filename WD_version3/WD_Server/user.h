#ifndef USER_H
#define USER_H

#include <QString>
#include <QVector>
#include <QStringList>

enum userClass {BUYER, MEMBER, SELLER};

class User
{
public:
    User();
    virtual ~User();
    User(int id, QString userName, QString password, double balance = 0.0);
    void recharge(double money);

protected:
    int id;
    QString userName;
    QString password;
    double balance;

public:
    int getId() const;
    QString getUserName();
    QString getPassword();
    double getBalance();
    virtual userClass getClass() = 0;
};

#endif // USER_H