#include "fbmodel.h"

//QString FBModel::login = "";
//QString FBModel::password = "";

//void FBModel::setUserLogin(QString login)
//{
//   FBModel::login = login;
//}

//QString FBModel::getUserLogin()
//{
//    return login;
//}

//void FBModel::setUserPassword(QString password)
//{
//    FBModel::password = password;
//}

//QString FBModel::getUserPassword()
//{
//    return password;
//}

const FBModel& FBModel::getInstance()
{
    static FBModel singletonInstance;
    return singletonInstance;
}

FBModel::FBModel()
{
}

bool FBModel::isLoginPasswordCorrect(QString login, QString password)
{
    QString trueLogin = "admin";
    QString truePassword = "admin";
    if ((login == trueLogin) && (password == truePassword))
    {
        return true;
    }
    else
    {
        return false;
    }
}
