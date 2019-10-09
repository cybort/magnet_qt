#ifndef SIDEMODEL_H
#define SIDEMODEL_H

#include <QObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

class sideModel : public QObject
{
    Q_OBJECT
public:
    explicit sideModel(QObject *parent = nullptr);
    QString site;
    QString group;
    QString name;
    QString size;
    QString count;
    QString source;
    QString magnet;

signals:


public slots:
};



#endif // SIDEMODEL_H
