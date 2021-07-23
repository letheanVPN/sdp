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

#include "OAICertificatesEntity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICertificatesEntity::OAICertificatesEntity(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICertificatesEntity::OAICertificatesEntity() {
    this->initializeModel();
}

OAICertificatesEntity::~OAICertificatesEntity() {}

void OAICertificatesEntity::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAICertificatesEntity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICertificatesEntity::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAICertificatesEntity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICertificatesEntity::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    return obj;
}

double OAICertificatesEntity::getId() const {
    return id;
}
void OAICertificatesEntity::setId(const double &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAICertificatesEntity::is_id_Set() const{
    return m_id_isSet;
}

bool OAICertificatesEntity::is_id_Valid() const{
    return m_id_isValid;
}

bool OAICertificatesEntity::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICertificatesEntity::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace OpenAPI
