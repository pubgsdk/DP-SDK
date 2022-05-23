#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VaRest.EVaJson
enum class EVaJson : uint8_t
{
	EVaJson__None                  = 0,
	EVaJson__Null                  = 1,
	EVaJson__String                = 2,
	EVaJson__Number                = 3,
	EVaJson__Boolean               = 4,
	EVaJson__Array                 = 5,
	EVaJson__Object                = 6,
	EVaJson__EVaJson_MAX           = 7
};


// Enum VaRest.EVaRestHttpStatusCode
enum class EVaRestHttpStatusCode : uint8_t
{
	EVaRestHttpStatusCode__Unknown = 0,
	EVaRestHttpStatusCode__Continue = 1,
	EVaRestHttpStatusCode__SwitchProtocol = 2,
	EVaRestHttpStatusCode__Ok      = 3,
	EVaRestHttpStatusCode__Created = 4,
	EVaRestHttpStatusCode__Accepted = 5,
	EVaRestHttpStatusCode__Partial = 6,
	EVaRestHttpStatusCode__NoContent = 7,
	EVaRestHttpStatusCode__ResetContent = 8,
	EVaRestHttpStatusCode__PartialContent = 9,
	EVaRestHttpStatusCode__Ambiguous = 10,
	EVaRestHttpStatusCode__Moved   = 11,
	EVaRestHttpStatusCode__Redirect = 12,
	EVaRestHttpStatusCode__RedirectMethod = 13,
	EVaRestHttpStatusCode__NotModified = 14,
	EVaRestHttpStatusCode__UseProxy = 15,
	EVaRestHttpStatusCode__RedirectKeepVerb = 16,
	EVaRestHttpStatusCode__BadRequest = 17,
	EVaRestHttpStatusCode__Denied  = 18,
	EVaRestHttpStatusCode__PaymentReq = 19,
	EVaRestHttpStatusCode__Forbidden = 20,
	EVaRestHttpStatusCode__NotFound = 21,
	EVaRestHttpStatusCode__BadMethod = 22,
	EVaRestHttpStatusCode__NoneAcceptable = 23,
	EVaRestHttpStatusCode__ProxyAuthReq = 24,
	EVaRestHttpStatusCode__RequestTimeout = 25,
	EVaRestHttpStatusCode__Conflict = 26,
	EVaRestHttpStatusCode__Gone    = 27,
	EVaRestHttpStatusCode__LengthRequired = 28,
	EVaRestHttpStatusCode__PrecondFailed = 29,
	EVaRestHttpStatusCode__RequestTooLarge = 30,
	EVaRestHttpStatusCode__UriTooLong = 31,
	EVaRestHttpStatusCode__UnsupportedMedia = 32,
	EVaRestHttpStatusCode__TooManyRequests = 33,
	EVaRestHttpStatusCode__RetryWith = 34,
	EVaRestHttpStatusCode__ServerError = 35,
	EVaRestHttpStatusCode__NotSupported = 36,
	EVaRestHttpStatusCode__BadGateway = 37,
	EVaRestHttpStatusCode__ServiceUnavail = 38,
	EVaRestHttpStatusCode__GatewayTimeout = 39,
	EVaRestHttpStatusCode__VersionNotSup = 40,
	EVaRestHttpStatusCode__EVaRestHttpStatusCode_MAX = 41
};


// Enum VaRest.EVaRestRequestStatus
enum class EVaRestRequestStatus : uint8_t
{
	EVaRestRequestStatus__NotStarted = 0,
	EVaRestRequestStatus__Processing = 1,
	EVaRestRequestStatus__Failed   = 2,
	EVaRestRequestStatus__Failed_ConnectionError = 3,
	EVaRestRequestStatus__Succeeded = 4,
	EVaRestRequestStatus__EVaRestRequestStatus_MAX = 5
};


// Enum VaRest.EVaRestRequestContentType
enum class EVaRestRequestContentType : uint8_t
{
	EVaRestRequestContentType__x_www_form_urlencoded_url = 0,
	EVaRestRequestContentType__x_www_form_urlencoded_body = 1,
	EVaRestRequestContentType__json = 2,
	EVaRestRequestContentType__binary = 3,
	EVaRestRequestContentType__EVaRestRequestContentType_MAX = 4
};


// Enum VaRest.EVaRestRequestVerb
enum class EVaRestRequestVerb : uint8_t
{
	EVaRestRequestVerb__GET        = 0,
	EVaRestRequestVerb__POST       = 1,
	EVaRestRequestVerb__PUT        = 2,
	EVaRestRequestVerb__DEL        = 3,
	EVaRestRequestVerb__CUSTOM     = 4,
	EVaRestRequestVerb__EVaRestRequestVerb_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
