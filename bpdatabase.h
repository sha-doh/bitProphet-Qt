#ifndef BPDATABASE_H
#define BPDATABASE_H

#include <QObject>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>


#include "bitprophet.h"

class bitProphet;

class bpDatabase : public QObject {
    Q_OBJECT
public:
    explicit bpDatabase(QObject *parent);
    ~bpDatabase();
    QString mPtrName;
    bool fileExists();
    bool hasAccountsTable();
    void createDatabase();
    bool createAccountsTable();
private:
    void say(QString sayThis, bool debug=0);
    bitProphet *mParent;
signals:

public slots:

};

#endif // BPDATABASE_H