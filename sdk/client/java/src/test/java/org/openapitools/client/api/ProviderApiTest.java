/*
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


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.ServiceEntity;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for ProviderApi
 */
@Ignore
public class ProviderApiTest {

    private final ProviderApi api = new ProviderApi();

    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void findAllTest() throws ApiException {
        List<ServiceEntity> response = api.findAll();

        // TODO: test validations
    }
    
}
