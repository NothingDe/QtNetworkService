/**********************************************************
Author: 微信公众号(你才小学生)
WeChat public platform: nicaixiaoxuesheng
Email:  2088201923@qq.com
**********************************************************/
#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QObject>
#include <QUdpSocket>

class UdpServer : public QObject
{
    Q_OBJECT
public:
    explicit UdpServer(QObject *parent = nullptr,
                       const QHostAddress &address = QHostAddress(QHostAddress::Any),
                       quint16 port = 0,
                       QUdpSocket::BindMode mode = QUdpSocket::DefaultForPlatform);

signals:
    void finish(QByteArray result);

public slots:
    void receiver();

private:
    explicit UdpServer(QObject *parent = nullptr);

private:
    QUdpSocket *m_udpServer;
};

#endif // UDPSERVER_H