# SPDX-License-Identifier: GPL-3.0-or-later
# SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

# Dependencies
plugin_telephony_test_deps = [
  libvalent_test_dep,
  plugin_telephony_deps,
]

plugin_telephony_tests = [
  'test-telephony-plugin',
  'test-telephony-preferences',
]

foreach test : plugin_telephony_tests
  test_program = executable(test, '@0@.c'.format(test),
                 c_args: test_c_args,
           dependencies: plugin_telephony_test_deps,
    include_directories: plugin_telephony_include_directories,
              link_args: test_link_args,
             link_whole: [libvalent_test, plugin_telephony],
  )

  test(test, test_program,
            env: tests_env,
    is_parallel: false,
          suite: ['plugins', 'telephony'],
  )
endforeach

