#
# Lethean VPN Api
# Distributed Virtual Private Marketplace
# Version: 1
# Generated by OpenAPI Generator: https://openapi-generator.tech
#

<#
.SYNOPSIS

No summary available.

.DESCRIPTION

No description available.

.PARAMETER Endpoint
IP Addresses of endpoints for VPN service only
.PARAMETER Port
Port these settings apply to
.PARAMETER Parameters
mtu size parameter for vpn service only
.PARAMETER Terms
Terms for the service
.PARAMETER Policy
a JSON containing access policy - whitelist/blacklist default, allowed/blocked IPs and FQDNs in regex format. This is NOT sent to SDP. It is used by the Dispatcher to orchestrate restrictions on Server
.OUTPUTS

VpnSettingsEntity<PSCustomObject>
#>

function Initialize-VpnSettingsEntity {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("/((^s*((([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]).){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]))s*$)|(^s*((([0-9A-Fa-f]{1,4}:){7}([0-9A-Fa-f]{1,4}|:))|(([0-9A-Fa-f]{1,4}:){6}(:[0-9A-Fa-f]{1,4}|((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3})|:))|(([0-9A-Fa-f]{1,4}:){5}(((:[0-9A-Fa-f]{1,4}){1,2})|:((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3})|:))|(([0-9A-Fa-f]{1,4}:){4}(((:[0-9A-Fa-f]{1,4}){1,3})|((:[0-9A-Fa-f]{1,4})?:((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3}))|:))|(([0-9A-Fa-f]{1,4}:){3}(((:[0-9A-Fa-f]{1,4}){1,4})|((:[0-9A-Fa-f]{1,4}){0,2}:((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3}))|:))|(([0-9A-Fa-f]{1,4}:){2}(((:[0-9A-Fa-f]{1,4}){1,5})|((:[0-9A-Fa-f]{1,4}){0,3}:((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3}))|:))|(([0-9A-Fa-f]{1,4}:){1}(((:[0-9A-Fa-f]{1,4}){1,6})|((:[0-9A-Fa-f]{1,4}){0,4}:((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3}))|:))|(:(((:[0-9A-Fa-f]{1,4}){1,7})|((:[0-9A-Fa-f]{1,4}){0,5}:((25[0-5]|2[0-4]d|1dd|[1-9]?d)(.(25[0-5]|2[0-4]d|1dd|[1-9]?d)){3}))|:)))(%.+)?s*$))|(^s*((?=.{1,255}$)(?=.*[A-Za-z].*)[0-9A-Za-z](?:(?:[0-9A-Za-z]|-){0,61}[0-9A-Za-z])?(?:.[0-9A-Za-z](?:(?:[0-9A-Za-z]|-){0,61}[0-9A-Za-z])?)*)s*$)/")]
        [String]
        ${Endpoint},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^([0-9]{1,4}|[1-5][0-9]{4}|6[0-4][0-9]{3}|65[0-4][0-9]{2}|655[0-2][0-9]|6553[0-5])/([tT][cC][pP]|[uU][dD][pP])$")]
        [String]
        ${Port},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Parameters},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("[:print:]")]
        [String]
        ${Terms},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Policy}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => VpnSettingsEntity' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($Endpoint -eq $null) {
            throw "invalid value for 'Endpoint', 'Endpoint' cannot be null."
        }

        if ($Port -eq $null) {
            throw "invalid value for 'Port', 'Port' cannot be null."
        }

        if ($Parameters -eq $null) {
            throw "invalid value for 'Parameters', 'Parameters' cannot be null."
        }

        if ($Terms -eq $null) {
            throw "invalid value for 'Terms', 'Terms' cannot be null."
        }

        if ($Policy -eq $null) {
            throw "invalid value for 'Policy', 'Policy' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "endpoint" = ${Endpoint}
            "port" = ${Port}
            "parameters" = ${Parameters}
            "terms" = ${Terms}
            "policy" = ${Policy}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to VpnSettingsEntity<PSCustomObject>

.DESCRIPTION

Convert from JSON to VpnSettingsEntity<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

VpnSettingsEntity<PSCustomObject>
#>
function ConvertFrom-JsonToVpnSettingsEntity {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => VpnSettingsEntity' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in VpnSettingsEntity
        $AllProperties = ("endpoint", "port", "parameters", "terms", "policy")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'endpoint' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "endpoint"))) {
            throw "Error! JSON cannot be serialized due to the required property 'endpoint' missing."
        } else {
            $Endpoint = $JsonParameters.PSobject.Properties["endpoint"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "port"))) {
            throw "Error! JSON cannot be serialized due to the required property 'port' missing."
        } else {
            $Port = $JsonParameters.PSobject.Properties["port"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "parameters"))) {
            throw "Error! JSON cannot be serialized due to the required property 'parameters' missing."
        } else {
            $Parameters = $JsonParameters.PSobject.Properties["parameters"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "terms"))) {
            throw "Error! JSON cannot be serialized due to the required property 'terms' missing."
        } else {
            $Terms = $JsonParameters.PSobject.Properties["terms"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "policy"))) {
            throw "Error! JSON cannot be serialized due to the required property 'policy' missing."
        } else {
            $Policy = $JsonParameters.PSobject.Properties["policy"].value
        }

        $PSO = [PSCustomObject]@{
            "endpoint" = ${Endpoint}
            "port" = ${Port}
            "parameters" = ${Parameters}
            "terms" = ${Terms}
            "policy" = ${Policy}
        }

        return $PSO
    }

}

