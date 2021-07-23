/**
 * Lethean VPN Api
 * Distributed Virtual Private Marketplace
 *
 * The version of the OpenAPI document: 1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';
import { CertificatesEntity } from './certificatesEntity';
import { ProxySettingsEntity } from './proxySettingsEntity';
import { TimeRangeEntity } from './timeRangeEntity';
import { VpnSettingsEntity } from './vpnSettingsEntity';

export class ServiceEntity {
    /**
    * ID of the service
    */
    'id': string;
    /**
    * Name of the service
    */
    'name': string;
    /**
    * Type of the service
    */
    'type': ServiceEntity.TypeEnum;
    /**
    * Per minute Cost of the service
    */
    'cost': string;
    /**
    * Amount of pre-paid minutes for first payment
    */
    'firstPrePaidMinutes'?: number;
    /**
    * Number of verifications needed for first payment
    */
    'firstVerificationsNeeded'?: number;
    /**
    * Amount of pre-paid minutes for subsequent payments
    */
    'subsequentPrePaidMinutes'?: number;
    /**
    * Number of verifications needed for subsequent payments
    */
    'subsequentVerificationsNeeded'?: number;
    /**
    * Whether or not refunds are allowed
    */
    'allowRefunds'?: boolean;
    /**
    * Service download speed in Mbits
    */
    'downloadSpeed': number;
    /**
    * Service upload speed in Mbits
    */
    'uploadSpeed': number;
    /**
    * array containing Proxy related settings. only available if service is of type proxy, null otherwise
    */
    'proxy'?: Array<ProxySettingsEntity>;
    /**
    * array containing VPN related settings. only available if service is of type vpn, null otherwise
    */
    'vpn'?: Array<VpnSettingsEntity>;
    'validity'?: TimeRangeEntity;
    /**
    * disable or not the service
    */
    'disable': boolean;
    /**
    * inside each service, there should be a field named certificates that has a list of IDs, referencing the certificates at the provider level.
    */
    'certificates'?: Array<CertificatesEntity>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "type",
            "baseName": "type",
            "type": "ServiceEntity.TypeEnum"
        },
        {
            "name": "cost",
            "baseName": "cost",
            "type": "string"
        },
        {
            "name": "firstPrePaidMinutes",
            "baseName": "firstPrePaidMinutes",
            "type": "number"
        },
        {
            "name": "firstVerificationsNeeded",
            "baseName": "firstVerificationsNeeded",
            "type": "number"
        },
        {
            "name": "subsequentPrePaidMinutes",
            "baseName": "subsequentPrePaidMinutes",
            "type": "number"
        },
        {
            "name": "subsequentVerificationsNeeded",
            "baseName": "subsequentVerificationsNeeded",
            "type": "number"
        },
        {
            "name": "allowRefunds",
            "baseName": "allowRefunds",
            "type": "boolean"
        },
        {
            "name": "downloadSpeed",
            "baseName": "downloadSpeed",
            "type": "number"
        },
        {
            "name": "uploadSpeed",
            "baseName": "uploadSpeed",
            "type": "number"
        },
        {
            "name": "proxy",
            "baseName": "proxy",
            "type": "Array<ProxySettingsEntity>"
        },
        {
            "name": "vpn",
            "baseName": "vpn",
            "type": "Array<VpnSettingsEntity>"
        },
        {
            "name": "validity",
            "baseName": "validity",
            "type": "TimeRangeEntity"
        },
        {
            "name": "disable",
            "baseName": "disable",
            "type": "boolean"
        },
        {
            "name": "certificates",
            "baseName": "certificates",
            "type": "Array<CertificatesEntity>"
        }    ];

    static getAttributeTypeMap() {
        return ServiceEntity.attributeTypeMap;
    }
}

export namespace ServiceEntity {
    export enum TypeEnum {
        Vpn = <any> 'vpn',
        Proxy = <any> 'proxy'
    }
}
