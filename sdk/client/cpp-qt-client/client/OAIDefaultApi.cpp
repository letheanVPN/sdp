/**
 * Lethean VPN Api
 * Distributed Virtual Private Marketplace
 *
 * The version of the OpenAPI document: 1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIDefaultApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIDefaultApi::OAIDefaultApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIDefaultApi::~OAIDefaultApi() {
}

void OAIDefaultApi::initializeServerConfigs(){
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    QList<OAIServerConfiguration> serverConf = QList<OAIServerConfiguration>();
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://dvpm.io"),
    "No description provided",
    QMap<QString, OAIServerVariable>()));
    _serverConfigs.insert("cacheStats", defaultConf);
    _serverIndices.insert("cacheStats", 0);
    _serverConfigs.insert("sigVerify", defaultConf);
    _serverIndices.insert("sigVerify", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIDefaultApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIDefaultApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIDefaultApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIDefaultApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIDefaultApi::setUsername(const QString &username) {
    _username = username;
}

void OAIDefaultApi::setPassword(const QString &password) {
    _password = password;
}


void OAIDefaultApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIDefaultApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIDefaultApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIDefaultApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    if(_serverConfigs.contains(operation)){
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    }else{
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIDefaultApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    for(auto e : _serverIndices.keys()){
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIDefaultApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIDefaultApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIDefaultApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIDefaultApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIDefaultApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIDefaultApi::getParamStylePrefix(QString style){
    if(style == "matrix"){
        return ";";
    }else if(style == "label"){
        return ".";
    }else if(style == "form"){
        return "&";
    }else if(style == "simple"){
        return "";
    }else if(style == "spaceDelimited"){
        return "&";
    }else if(style == "pipeDelimited"){
        return "&";
    }else{
        return "none";
    }
}

QString OAIDefaultApi::getParamStyleSuffix(QString style){
    if(style == "matrix"){
        return "=";
    }else if(style == "label"){
        return "";
    }else if(style == "form"){
        return "=";
    }else if(style == "simple"){
        return "";
    }else if(style == "spaceDelimited"){
        return "=";
    }else if(style == "pipeDelimited"){
        return "=";
    }else{
        return "none";
    }
}

QString OAIDefaultApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

    if(style == "matrix"){
        return (isExplode) ? ";" + name + "=" : ",";

    }else if(style == "label"){
        return (isExplode) ? "." : ",";

    }else if(style == "form"){
        return (isExplode) ? "&" + name + "=" : ",";

    }else if(style == "simple"){
        return ",";
    }else if(style == "spaceDelimited"){
        return (isExplode) ? "&" + name + "=" : " ";

    }else if(style == "pipeDelimited"){
        return (isExplode) ? "&" + name + "=" : "|";

    }else if(style == "deepObject"){
        return (isExplode) ? "&" : "none";

    }else {
        return "none";
    }
}

void OAIDefaultApi::cacheStats() {
    QString fullPath = QString(_serverConfigs["cacheStats"][_serverIndices.value("cacheStats")].URL()+"/v1/cache/index");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::cacheStatsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::cacheStatsCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit cacheStatsSignal();
        emit cacheStatsSignalFull(worker);
    } else {
        emit cacheStatsSignalE(error_type, error_str);
        emit cacheStatsSignalEFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sigVerify() {
    QString fullPath = QString(_serverConfigs["sigVerify"][_serverIndices.value("sigVerify")].URL()+"/v1/signature/get");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sigVerifyCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sigVerifyCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit sigVerifySignal();
        emit sigVerifySignalFull(worker);
    } else {
        emit sigVerifySignalE(error_type, error_str);
        emit sigVerifySignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
