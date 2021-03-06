// qnetworkaccessmanager.sip generated by MetaSIP
//
// This file is part of the QtNetwork Python extension module.
//
// Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt4.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


%If (Qt_4_4_0 -)

class QNetworkAccessManager : QObject
{
%TypeHeaderCode
#include <qnetworkaccessmanager.h>
%End

public:
    enum Operation
    {
        HeadOperation,
        GetOperation,
        PutOperation,
        PostOperation,
%If (Qt_4_6_0 -)
        DeleteOperation,
%End
%If (Qt_4_7_0 -)
        CustomOperation,
%End
    };

    explicit QNetworkAccessManager(QObject *parent /TransferThis/ = 0);
    virtual ~QNetworkAccessManager();
    QNetworkProxy proxy() const;
    void setProxy(const QNetworkProxy &proxy);
    QNetworkCookieJar *cookieJar() const;
    void setCookieJar(QNetworkCookieJar *cookieJar /Transfer/);
    QNetworkReply *head(const QNetworkRequest &request);
    QNetworkReply *get(const QNetworkRequest &request);
    QNetworkReply *post(const QNetworkRequest &request, QIODevice *data);
    QNetworkReply *post(const QNetworkRequest &request, const QByteArray &data);
%If (Qt_4_8_0 -)
    QNetworkReply *post(const QNetworkRequest &request, QHttpMultiPart *multiPart);
%End
    QNetworkReply *put(const QNetworkRequest &request, QIODevice *data);
    QNetworkReply *put(const QNetworkRequest &request, const QByteArray &data);
%If (Qt_4_8_0 -)
    QNetworkReply *put(const QNetworkRequest &request, QHttpMultiPart *multiPart);
%End

signals:
    void proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *authenticator);
    void authenticationRequired(QNetworkReply *reply, QAuthenticator *authenticator);
    void finished(QNetworkReply *reply);
%If (PyQt_OpenSSL)
    void sslErrors(QNetworkReply *reply, const QList<QSslError> &errors);
%End
%If (Qt_4_7_0 -)
    void networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility accessible);
%End

protected:
    virtual QNetworkReply *createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest &request, QIODevice *device = 0) /AbortOnException,DisallowNone/;

public:
%If (Qt_4_5_0 -)
    QNetworkProxyFactory *proxyFactory() const;
%End
%If (Qt_4_5_0 -)
    void setProxyFactory(QNetworkProxyFactory *factory /Transfer/);
%End
%If (Qt_4_5_0 -)
    QAbstractNetworkCache *cache() const;
%End
%If (Qt_4_5_0 -)
    void setCache(QAbstractNetworkCache *cache /Transfer/);
%End
%If (Qt_4_6_0 -)
    QNetworkReply *deleteResource(const QNetworkRequest &request);
%End
%If (Qt_4_7_0 -)

    enum NetworkAccessibility
    {
        UnknownAccessibility,
        NotAccessible,
        Accessible,
    };

%End
%If (Qt_4_7_0 -)
    QNetworkReply *sendCustomRequest(const QNetworkRequest &request, const QByteArray &verb, QIODevice *data = 0);
%End
%If (Qt_4_7_0 -)
    void setConfiguration(const QNetworkConfiguration &config);
%End
%If (Qt_4_7_0 -)
    QNetworkConfiguration configuration() const;
%End
%If (Qt_4_7_0 -)
    QNetworkConfiguration activeConfiguration() const;
%End
%If (Qt_4_7_0 -)
    void setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility accessible);
%End
%If (Qt_4_7_0 -)
    QNetworkAccessManager::NetworkAccessibility networkAccessible() const;
%End
%If (Qt_5_0_0 -)
    void clearAccessCache();
%End
};

%End
