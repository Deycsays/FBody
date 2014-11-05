#ifndef FBMODEL_H
#define FBMODEL_H
#include <QString>

class FBModel
{
public:
    static const FBModel& getInstance();

    //    static void setUserLogin(QString);
    //    static QString getUserLogin();

    //    static void setUserPassword(QString);
    //    static QString getUserPassword();

    static bool isLoginPasswordCorrect(QString login, QString password);
private:
    //    static QString login;
    //    static QString password;

    //it's singleton
    FBModel();
    FBModel(const FBModel&);
    FBModel& operator=(const FBModel);
};

#endif // FBMODEL_H
