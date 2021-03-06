/* onvifdeviceioDeviceBindingService.h
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef onvifdeviceioDeviceBindingService_H
#define onvifdeviceioDeviceBindingService_H
#include "onvifdeviceioH.h"
class SOAP_CMAC DeviceBindingService
{ public:
	struct soap *soap;
	bool soap_own;
	/// Variables globally declared in rcx.h (non-static)
	/// Constructor
	DeviceBindingService();
	/// Constructor to use/share an engine state
	DeviceBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	DeviceBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	DeviceBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~DeviceBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void DeviceBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	DeviceBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error or SOAP_OK)
	virtual	int dispatch();
	virtual	int dispatch(struct soap *soap);

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServices' (returns error code or SOAP_OK)
	virtual	int GetServices(_devicews__GetServices *devicews__GetServices, _devicews__GetServicesResponse &devicews__GetServicesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_devicews__GetServiceCapabilities *devicews__GetServiceCapabilities, _devicews__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
	virtual	int GetDeviceInformation(_devicews__GetDeviceInformation *devicews__GetDeviceInformation, _devicews__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
	virtual	int SetSystemDateAndTime(_devicews__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _devicews__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
	virtual	int GetSystemDateAndTime(_devicews__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _devicews__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
	virtual	int SetSystemFactoryDefault(_devicews__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _devicews__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
	virtual	int UpgradeSystemFirmware(_devicews__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _devicews__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
	virtual	int SystemReboot(_devicews__SystemReboot *devicews__SystemReboot, _devicews__SystemRebootResponse &devicews__SystemRebootResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
	virtual	int RestoreSystem(_devicews__RestoreSystem *devicews__RestoreSystem, _devicews__RestoreSystemResponse &devicews__RestoreSystemResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
	virtual	int GetSystemBackup(_devicews__GetSystemBackup *devicews__GetSystemBackup, _devicews__GetSystemBackupResponse &devicews__GetSystemBackupResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
	virtual	int GetSystemLog(_devicews__GetSystemLog *devicews__GetSystemLog, _devicews__GetSystemLogResponse &devicews__GetSystemLogResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
	virtual	int GetSystemSupportInformation(_devicews__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _devicews__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
	virtual	int GetScopes(_devicews__GetScopes *devicews__GetScopes, _devicews__GetScopesResponse &devicews__GetScopesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
	virtual	int SetScopes(_devicews__SetScopes *devicews__SetScopes, _devicews__SetScopesResponse &devicews__SetScopesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
	virtual	int AddScopes(_devicews__AddScopes *devicews__AddScopes, _devicews__AddScopesResponse &devicews__AddScopesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
	virtual	int RemoveScopes(_devicews__RemoveScopes *devicews__RemoveScopes, _devicews__RemoveScopesResponse &devicews__RemoveScopesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int GetDiscoveryMode(_devicews__GetDiscoveryMode *devicews__GetDiscoveryMode, _devicews__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int SetDiscoveryMode(_devicews__SetDiscoveryMode *devicews__SetDiscoveryMode, _devicews__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int GetRemoteDiscoveryMode(_devicews__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _devicews__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
	virtual	int SetRemoteDiscoveryMode(_devicews__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _devicews__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
	virtual	int GetDPAddresses(_devicews__GetDPAddresses *devicews__GetDPAddresses, _devicews__GetDPAddressesResponse &devicews__GetDPAddressesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
	virtual	int GetEndpointReference(_devicews__GetEndpointReference *devicews__GetEndpointReference, _devicews__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
	virtual	int GetRemoteUser(_devicews__GetRemoteUser *devicews__GetRemoteUser, _devicews__GetRemoteUserResponse &devicews__GetRemoteUserResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
	virtual	int SetRemoteUser(_devicews__SetRemoteUser *devicews__SetRemoteUser, _devicews__SetRemoteUserResponse &devicews__SetRemoteUserResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
	virtual	int GetUsers(_devicews__GetUsers *devicews__GetUsers, _devicews__GetUsersResponse &devicews__GetUsersResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
	virtual	int CreateUsers(_devicews__CreateUsers *devicews__CreateUsers, _devicews__CreateUsersResponse &devicews__CreateUsersResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
	virtual	int DeleteUsers(_devicews__DeleteUsers *devicews__DeleteUsers, _devicews__DeleteUsersResponse &devicews__DeleteUsersResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetUser' (returns error code or SOAP_OK)
	virtual	int SetUser(_devicews__SetUser *devicews__SetUser, _devicews__SetUserResponse &devicews__SetUserResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
	virtual	int GetWsdlUrl(_devicews__GetWsdlUrl *devicews__GetWsdlUrl, _devicews__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
	virtual	int GetCapabilities(_devicews__GetCapabilities *devicews__GetCapabilities, _devicews__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
	virtual	int SetDPAddresses(_devicews__SetDPAddresses *devicews__SetDPAddresses, _devicews__SetDPAddressesResponse &devicews__SetDPAddressesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
	virtual	int GetHostname(_devicews__GetHostname *devicews__GetHostname, _devicews__GetHostnameResponse &devicews__GetHostnameResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
	virtual	int SetHostname(_devicews__SetHostname *devicews__SetHostname, _devicews__SetHostnameResponse &devicews__SetHostnameResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
	virtual	int SetHostnameFromDHCP(_devicews__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _devicews__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
	virtual	int GetDNS(_devicews__GetDNS *devicews__GetDNS, _devicews__GetDNSResponse &devicews__GetDNSResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
	virtual	int SetDNS(_devicews__SetDNS *devicews__SetDNS, _devicews__SetDNSResponse &devicews__SetDNSResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
	virtual	int GetNTP(_devicews__GetNTP *devicews__GetNTP, _devicews__GetNTPResponse &devicews__GetNTPResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
	virtual	int SetNTP(_devicews__SetNTP *devicews__SetNTP, _devicews__SetNTPResponse &devicews__SetNTPResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
	virtual	int GetDynamicDNS(_devicews__GetDynamicDNS *devicews__GetDynamicDNS, _devicews__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
	virtual	int SetDynamicDNS(_devicews__SetDynamicDNS *devicews__SetDynamicDNS, _devicews__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
	virtual	int GetNetworkInterfaces(_devicews__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _devicews__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
	virtual	int SetNetworkInterfaces(_devicews__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _devicews__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
	virtual	int GetNetworkProtocols(_devicews__GetNetworkProtocols *devicews__GetNetworkProtocols, _devicews__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
	virtual	int SetNetworkProtocols(_devicews__SetNetworkProtocols *devicews__SetNetworkProtocols, _devicews__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
	virtual	int GetNetworkDefaultGateway(_devicews__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _devicews__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
	virtual	int SetNetworkDefaultGateway(_devicews__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _devicews__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
	virtual	int GetZeroConfiguration(_devicews__GetZeroConfiguration *devicews__GetZeroConfiguration, _devicews__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
	virtual	int SetZeroConfiguration(_devicews__SetZeroConfiguration *devicews__SetZeroConfiguration, _devicews__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int GetIPAddressFilter(_devicews__GetIPAddressFilter *devicews__GetIPAddressFilter, _devicews__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int SetIPAddressFilter(_devicews__SetIPAddressFilter *devicews__SetIPAddressFilter, _devicews__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int AddIPAddressFilter(_devicews__AddIPAddressFilter *devicews__AddIPAddressFilter, _devicews__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
	virtual	int RemoveIPAddressFilter(_devicews__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _devicews__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
	virtual	int GetAccessPolicy(_devicews__GetAccessPolicy *devicews__GetAccessPolicy, _devicews__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
	virtual	int SetAccessPolicy(_devicews__SetAccessPolicy *devicews__SetAccessPolicy, _devicews__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
	virtual	int CreateCertificate(_devicews__CreateCertificate *devicews__CreateCertificate, _devicews__CreateCertificateResponse &devicews__CreateCertificateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
	virtual	int GetCertificates(_devicews__GetCertificates *devicews__GetCertificates, _devicews__GetCertificatesResponse &devicews__GetCertificatesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
	virtual	int GetCertificatesStatus(_devicews__GetCertificatesStatus *devicews__GetCertificatesStatus, _devicews__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
	virtual	int SetCertificatesStatus(_devicews__SetCertificatesStatus *devicews__SetCertificatesStatus, _devicews__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
	virtual	int DeleteCertificates(_devicews__DeleteCertificates *devicews__DeleteCertificates, _devicews__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
	virtual	int GetPkcs10Request(_devicews__GetPkcs10Request *devicews__GetPkcs10Request, _devicews__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
	virtual	int LoadCertificates(_devicews__LoadCertificates *devicews__LoadCertificates, _devicews__LoadCertificatesResponse &devicews__LoadCertificatesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
	virtual	int GetClientCertificateMode(_devicews__GetClientCertificateMode *devicews__GetClientCertificateMode, _devicews__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
	virtual	int SetClientCertificateMode(_devicews__SetClientCertificateMode *devicews__SetClientCertificateMode, _devicews__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
	virtual	int GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
	virtual	int SetRelayOutputSettings(_devicews__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _devicews__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
	virtual	int SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
	virtual	int SendAuxiliaryCommand(_devicews__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _devicews__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
	virtual	int GetCACertificates(_devicews__GetCACertificates *devicews__GetCACertificates, _devicews__GetCACertificatesResponse &devicews__GetCACertificatesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
	virtual	int LoadCertificateWithPrivateKey(_devicews__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _devicews__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
	virtual	int GetCertificateInformation(_devicews__GetCertificateInformation *devicews__GetCertificateInformation, _devicews__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
	virtual	int LoadCACertificates(_devicews__LoadCACertificates *devicews__LoadCACertificates, _devicews__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
	virtual	int CreateDot1XConfiguration(_devicews__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _devicews__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
	virtual	int SetDot1XConfiguration(_devicews__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _devicews__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
	virtual	int GetDot1XConfiguration(_devicews__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _devicews__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
	virtual	int GetDot1XConfigurations(_devicews__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _devicews__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
	virtual	int DeleteDot1XConfiguration(_devicews__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _devicews__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
	virtual	int GetDot11Capabilities(_devicews__GetDot11Capabilities *devicews__GetDot11Capabilities, _devicews__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
	virtual	int GetDot11Status(_devicews__GetDot11Status *devicews__GetDot11Status, _devicews__GetDot11StatusResponse &devicews__GetDot11StatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
	virtual	int ScanAvailableDot11Networks(_devicews__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _devicews__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
	virtual	int GetSystemUris(_devicews__GetSystemUris *devicews__GetSystemUris, _devicews__GetSystemUrisResponse &devicews__GetSystemUrisResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
	virtual	int StartFirmwareUpgrade(_devicews__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _devicews__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
	virtual	int StartSystemRestore(_devicews__StartSystemRestore *devicews__StartSystemRestore, _devicews__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
	virtual	int GetStorageConfigurations(_devicews__GetStorageConfigurations *devicews__GetStorageConfigurations, _devicews__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
	virtual	int CreateStorageConfiguration(_devicews__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _devicews__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
	virtual	int GetStorageConfiguration(_devicews__GetStorageConfiguration *devicews__GetStorageConfiguration, _devicews__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
	virtual	int SetStorageConfiguration(_devicews__SetStorageConfiguration *devicews__SetStorageConfiguration, _devicews__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
	virtual	int DeleteStorageConfiguration(_devicews__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _devicews__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse) SOAP_PURE_VIRTUAL;
};
#endif
