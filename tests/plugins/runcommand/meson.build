# SPDX-License-Identifier: GPL-3.0-or-later
# SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

# Dependencies
plugin_runcommand_test_deps = [
  libvalent_test_dep,
  plugin_runcommand_deps,
]

plugin_runcommand_tests = [
  'test-runcommand-editor',
  'test-runcommand-plugin',
  'test-runcommand-preferences',
]

foreach test : plugin_runcommand_tests
  test_program = executable(test, '@0@.c'.format(test),
                 c_args: test_c_args,
           dependencies: plugin_runcommand_test_deps,
    include_directories: plugin_runcommand_include_directories,
              link_args: test_link_args,
             link_whole: [libvalent_test, plugin_runcommand],
  )

  test(test, test_program,
            env: tests_env,
    is_parallel: false,
          suite: ['plugins', 'runcommand'],
  )
endforeach

