cc_library(
	name = "thrift",
	srcs = [
		'EventHandlerBase.cpp',
		'Thrift.cpp',
		'VirtualProfiling.cpp',
        'async/TAsyncSocketFactory.cpp',
        'async/TAsyncSSLSocketFactory.cpp',
        'async/TBinaryAsyncChannel.cpp',
        'async/TEventConnection.cpp',
        'async/TEventServer.cpp',
        'async/TEventTask.cpp',
        'async/TEventWorker.cpp',
        'async/TFramedAsyncChannel.cpp',
        'async/THeaderAsyncChannel.cpp',
        'async/THttpAsyncChannel.cpp',
        'async/TUnframedAsyncChannel.cpp',
	    'concurrency/ThreadManager.cpp',
		'concurrency/TimerManager.cpp',
	    'concurrency/Util.cpp',
		'protocol/TDebugProtocol.cpp',
	    'protocol/TJSONProtocol.cpp',
		'protocol/TBase64Utils.cpp',
	    'protocol/TMultiplexedProtocol.cpp',
	    'transport/TTransportException.cpp',
		'transport/TFDTransport.cpp',
	    'transport/TFileTransport.cpp',
	    'transport/TSimpleFileTransport.cpp',
	    'transport/THeaderTransport.cpp',
		'transport/THttpTransport.cpp',
	    'transport/THttpClient.cpp',
		'transport/THttpServer.cpp',
	    'transport/TSocket.cpp',
		'transport/TSSLSocket.cpp',
        'transport/TSocketOverHttpTunnel.cpp',
	    'transport/TSocketPool.cpp',
		'transport/TServerSocket.cpp',
	    'transport/TSSLServerSocket.cpp',
		'transport/TTransportUtils.cpp',
	    'transport/TBufferTransports.cpp',
		'transport/THeader.cpp',
	    'server/TServer.cpp',
		'processor/PeekProcessor.cpp',
	    'util/FdUtils.cpp',
		'util/THttpParser.cpp',
		'util/SocketRetriever.cpp',
	    'util/VarintUtils.cpp',
        'util/PausableTimer.cpp',
		'concurrency/Mutex.cpp',
	    'concurrency/Monitor.cpp',
		'concurrency/PosixThreadFactory.cpp',
	    'concurrency/ProfiledMutex.cpp'
	],
	deps = [
		'//folly:folly',
		'//thirdparty/openssl:ssl',
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
	name = "thriftz",
	srcs = [
		'async/TZlibAsyncChannel.cpp',
        'transport/TZlibTransport.cpp'
	],
	deps = [
		'//folly:folly',
		'//thirdparty/openssl:ssl',
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
