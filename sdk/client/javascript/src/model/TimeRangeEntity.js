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
 *
 */

import ApiClient from '../ApiClient';

/**
 * The TimeRangeEntity model module.
 * @module model/TimeRangeEntity
 * @version 1
 */
class TimeRangeEntity {
    /**
     * Constructs a new <code>TimeRangeEntity</code>.
     * @alias module:model/TimeRangeEntity
     * @param from {Date} YYYY-MM-DDT00:00:00Z
     * @param to {Date} YYYY-MM-DDT00:00:00Z
     */
    constructor(from, to) { 
        
        TimeRangeEntity.initialize(this, from, to);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, from, to) { 
        obj['from'] = from;
        obj['to'] = to;
    }

    /**
     * Constructs a <code>TimeRangeEntity</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TimeRangeEntity} obj Optional instance to populate.
     * @return {module:model/TimeRangeEntity} The populated <code>TimeRangeEntity</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TimeRangeEntity();

            if (data.hasOwnProperty('from')) {
                obj['from'] = ApiClient.convertToType(data['from'], 'Date');
            }
            if (data.hasOwnProperty('to')) {
                obj['to'] = ApiClient.convertToType(data['to'], 'Date');
            }
        }
        return obj;
    }


}

/**
 * YYYY-MM-DDT00:00:00Z
 * @member {Date} from
 */
TimeRangeEntity.prototype['from'] = undefined;

/**
 * YYYY-MM-DDT00:00:00Z
 * @member {Date} to
 */
TimeRangeEntity.prototype['to'] = undefined;






export default TimeRangeEntity;

