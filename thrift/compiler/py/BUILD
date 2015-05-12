#blade build --generate-dynamic
#sudo python setup.py install
#/usr/local/bin/python setup.py install

cc_library(
    name = "frontend",
    srcs = [
        'compiler.cc',
    ],
    deps = [
        '//thrift/compiler:thriftcompilerbase_',
        '//thrift/compiler:parse_',
        '//boost:boost_python',
        '#rt',
        '#python2.6'
    ],
    extra_cppflags = [
        '-std=gnu++0x',
        '-DHAVE_CONFIG_H',
        '-fPIC',
        '-DPIC',
        '-I/usr/include/python2.6'
    ],
    warning = 'no'
)
