def options(ctx):
    ctx.load('compiler_cxx')

def configure(ctx):
    ctx.load('compiler_cxx')
    ctx.find_program('flex', var='FLEX')
    ctx.find_program('bison', var='BISON')

def build(bld):
    sources = bld.path.ant_glob('*.cpp') + ['LangS.tab.cpp', 'LangS.yy.cpp' ]
    bld(rule = '${FLEX} -o ${TGT} ${SRC}', source= 'LangS.l', target = 'LangS.yy.cpp')
    bld(rule = '${BISON} -d ${SRC}', source= 'LangS.ypp', target = ['LangS.tab.cpp','LangS.tab.hpp'])
    langs = bld(features='c cxx cxxprogram', source=sources, target='LangS', includes='.')


