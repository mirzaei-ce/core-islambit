Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in `./configure`
and tests weren't explicitly disabled.

After configuring, they can be run with `make check`.

To run the islambitd tests manually, launch `src/test/test_islambit`.

To add more islambitd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the `test/` directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the islambit-qt tests manually, launch `src/qt/test/test_islambit-qt`

To add more islambit-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
