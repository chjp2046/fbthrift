cc_library(
	name = "Service",
	srcs = [
		'gen-cpp2/Service_constants.cpp',
		'gen-cpp2/Service_types.cpp',
		'gen-cpp2/TestService.cpp',
		'gen-cpp/Service_reflection.cpp'
	],
	deps = [
		'//thirdparty/libevent:event',
		'//thirdparty/gperftools-2.0/src:profiler',
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
