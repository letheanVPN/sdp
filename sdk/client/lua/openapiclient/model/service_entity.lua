--[[
  Lethean VPN Api
 
  Distributed Virtual Private Marketplace
 
  The version of the OpenAPI document: 1
  
  Generated by: https://openapi-generator.tech
]]

-- service_entity class
local service_entity = {}
local service_entity_mt = {
	__name = "service_entity";
	__index = service_entity;
}

local function cast_service_entity(t)
	return setmetatable(t, service_entity_mt)
end

local function new_service_entity(id, name, type, cost, first_pre_paid_minutes, first_verifications_needed, subsequent_pre_paid_minutes, subsequent_verifications_needed, allow_refunds, download_speed, upload_speed, proxy, vpn, validity, disable, certificates)
	return cast_service_entity({
		["id"] = id;
		["name"] = name;
		["type"] = type;
		["cost"] = cost;
		["firstPrePaidMinutes"] = first_pre_paid_minutes;
		["firstVerificationsNeeded"] = first_verifications_needed;
		["subsequentPrePaidMinutes"] = subsequent_pre_paid_minutes;
		["subsequentVerificationsNeeded"] = subsequent_verifications_needed;
		["allowRefunds"] = allow_refunds;
		["downloadSpeed"] = download_speed;
		["uploadSpeed"] = upload_speed;
		["proxy"] = proxy;
		["vpn"] = vpn;
		["validity"] = validity;
		["disable"] = disable;
		["certificates"] = certificates;
	})
end

return {
	cast = cast_service_entity;
	new = new_service_entity;
}
