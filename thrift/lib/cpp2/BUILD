#python -mthrift_compiler.main --gen cpp2 Sasl.thrift

cc_library(
	name = "saslstubs",
	srcs = [
		'gen-cpp2/Sasl_constants.cpp',
		'gen-cpp2/Sasl_types.cpp',
	    'gen-cpp2/SaslAuthService.cpp',
		'gen-cpp2/SaslAuthService_client.cpp',
        'protocol/DebugProtocol.cpp'
	],
	deps = [
		'//folly:folly',
		'//thirdparty/openssl:ssl',
		'//thirdparty/gperftools-2.0/src:profiler',
        '#gssapi_krb5',
		'#rt'
	],
	extra_cppflags = [
		'-I../..',
		'-std=gnu++0x',
		'-DHAVE_CONFIG_H',
		'-fPIC',
		'-DPIC'
	],
	warning = 'no'
)

cc_library(
	name = "thriftcpp2",
	srcs = [
		'Version.cpp',
		'async/HeaderClientChannel.cpp',
		'async/HeaderServerChannel.cpp',
		'async/StubSaslClient.cpp',
		'async/StubSaslServer.cpp',
		'async/SaslEndpoint.cpp',
		'async/GssSaslClient.cpp',
		'async/GssSaslServer.cpp',
		'async/Cpp2Channel.cpp',
        'async/ProtectionHandler.cpp',
		'async/AsyncProcessor.cpp',
		'async/DuplexChannel.cpp',
		'protocol/Serializer.cpp',
		'protocol/SimpleJSONProtocol.cpp',
		'protocol/DebugProtocol.cpp',
		'protocol/BinaryProtocol.cpp',
		'protocol/VirtualProtocol.cpp',
		'protocol/CompactProtocol.cpp',
		'security/KerberosSASLHandshakeClient.cpp',
		'security/KerberosSASLHandshakeServer.cpp',
		'security/KerberosSASLHandshakeUtils.cpp',
		'security/KerberosSASLThreadManager.cpp',
		'security/SecurityKillSwitch.cpp',
		'server/Cpp2Connection.cpp',
		'server/Cpp2Worker.cpp',
		'server/ThriftServer.cpp',
		'cpp/EventHandlerBase.cpp',
		'cpp/transport/THeaderTransport.cpp',
		'cpp/util/ScopedServerThread.cpp',
		'cpp/util/SocketRetriever.cpp',
		'cpp/util/VarintUtils.cpp',
		'cpp/util/FdUtils.cpp',
		'cpp/util/THttpParser.cpp',
		'cpp/util/PausableTimer.cpp',
		'cpp/util/kerberos/Krb5Util.cpp',
		'cpp/util/kerberos/Krb5OlderVersionStubs.cpp',
		'cpp/util/kerberos/Krb5CredentialsCacheManager.cpp',
		'cpp/util/kerberos/Krb5CCacheStore.cpp',
		'cpp/util/kerberos/Krb5Tgts.cpp',
        'cpp/concurrency/NumaThreadManager.cpp'
	],
	deps = [
		':saslstubs',
		'//thrift/lib/cpp:thrift',
		'//boost:boost_thread',
		'#numa'
	],
	extra_cppflags = [
		'-I../..',
		'-std=gnu++0x',
		'-DHAVE_CONFIG_H',
		'-fPIC',
		'-DPIC'
	],
	warning = 'no'
)
