def options(ctx):
    ctx.load('compiler_cxx')

def configure(ctx):
    ctx.load('compiler_cxx flex bison')

def build(bld):
    sources = bld.path.ant_glob('*.cpp') + ['LangS.l', 'LangS.y' ]
    langs = bld(features='c cxx cxxprogram', source=sources, target='LangS', includes='.')
