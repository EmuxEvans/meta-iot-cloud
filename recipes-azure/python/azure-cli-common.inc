#
# Helper class for azure-cli-* recipes
#

require azure-cli.inc

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__init__.pyc
}
