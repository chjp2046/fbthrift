#first excute the following two command.
#/bin/sh ../build-aux/ylwrap thrifty.yy y.tab.c thrifty.cc y.tab.h thrifty.h y.output thrifty.output -- bison -y  -d
#/bin/sh ../build-aux/ylwrap thriftl.ll lex.yy.c thriftl.cc -- flex

cc_library(
	name = "thriftcompilerbase",
	srcs = [
		'common.cc',
        'parse/t_type.cc',
		'parse/t_typedef.cc'
	],
	deps = [
		'#pthread',
		'//folly:follybase'
	],
	extra_cppflags = [
		'-I../..',
		'-std=gnu++0x',
		'-DHAVE_CONFIG_H',
		'-DTHRIFTY_HH=\"thrift/compiler/thrifty.h\"',
		'-fPIC',
		'-DPIC'
	],
	warning = 'no',
    link_all_symbols=0
)


cc_library(
	name = "parse",
	srcs = [
        'thrifty.cc',
        'thriftl.cc'
	],
	deps = [
		'#pthread',
        '//boost:boost_system',
        ':thriftcompilerbase'
	],
	extra_cppflags = [
		'-I../..',
		'-std=gnu++0x',
		'-DHAVE_CONFIG_H',
		'-DTHRIFTY_HH=\\\"thrift/compiler/thrifty.h\\\"',
		'-fPIC',
		'-DPIC'
	],
	warning = 'no'
)



cc_binary(
	name = "thrift1",
	srcs = [
		'main.cc',
		'generate/t_generator.cc',
	    'generate/t_cpp_generator.cc',
		'generate/t_java_generator.cc',
	    'generate/t_csharp_generator.cc',
		'generate/t_py_generator.cc',
	    'generate/t_rb_generator.cc',
		'generate/t_perl_generator.cc',
	    'generate/t_php_generator.cc',
		'generate/t_erl_generator.cc',
	    'generate/t_cocoa_generator.cc',
		'generate/t_st_generator.cc',
	    'generate/t_ocaml_generator.cc',
		'generate/t_hs_generator.cc',
	    'generate/t_xsd_generator.cc',
		'generate/t_html_generator.cc',
	    'generate/t_js_generator.cc'
	],
	deps = [
		'//folly:folly',
		':thriftcompilerbase',
		':parse'
	],
	extra_cppflags = [
		'-I../..',
		'-std=gnu++0x',
		'-DHAVE_CONFIG_H',
		'-DTHRIFTY_HH=\\\"thrift/compiler/thrifty.h\\\"',
		'-fPIC',
		'-DPIC'
	],
	warning = 'no'
)

cc_library(
	name = "glog",
	prebuilt = 1,
	deps = [
		'#pthread',
        ':gflags'
	]
)

cc_library(
	name = "gflags",
	prebuilt = 1,
	deps = [
		'#pthread',
	]
)
cc_library(
	name = "follybase",
	prebuilt = 1,
	deps = [
         ':glog',
         ':gflags',
         ':ssl',
         ':crypto',
         ':double-conversion',
         ':event',
         ':snappy',
         '//boost:boost_thread',
         '//boost:boost_filesystem',
         '//boost:boost_system',
         '//boost:boost_regex',
         ':lz4',
         '#lzma',
         '#z',
         '#pthread'
	]
)
cc_library(
	name = "double-conversion",
	prebuilt = 1,
	deps = [
	]
)

cc_library(
	name = "event",
	prebuilt = 1,
	deps = [
        ':ssl',
        '#rt',
        '#pthread'
	]
)

cc_library(
	name = "ssl",
	prebuilt = 1,
	deps = [
        ':crypto'
	]
)
cc_library(
	name = "crypto",
	prebuilt = 1,
	deps = [
        '#dl'
	]
)

cc_library(
	name = "snappy",
	prebuilt = 1,
	deps = [
	]
)


cc_library(
	name = "lz4",
	prebuilt = 1,
	deps = [
	]
)

cc_library(
	name = "thriftcompilerbase_",
	prebuilt = 1,
	deps = [
		'#pthread',
		':follybase'
	]
)


cc_library(
	name = "parse_",
	prebuilt = 1,
	deps = [
		'#pthread',
        '//boost:boost_system',
        ':thriftcompilerbase_'
	]
)
