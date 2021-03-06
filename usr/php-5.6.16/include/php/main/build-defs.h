/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig S�ther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--prefix=${OPENSHIFT_PHP_VERSION_DIR}' '--localstatedir=${OPENSHIFT_PHP_DIR}' '--with-mcrypt=${OPENSHIFT_PHP_LIBS_DIR}' '--with-layout=PHP' '--with-curl' '--with-zlib' '--with-mhash' '--with-mysql' '--with-pgsql' '--with-mysqli' '--with-pdo-mysql' '--with-pdo-pgsql' '--with-openssl' '--with-xmlrpc' '--with-xsl' '--with-bz2' '--with-gettext' '--with-readline' '--with-kerberos' '--with-gd' '--with-jpeg-dir' '--with-png-dir' '--with-xpm-dir' '--with-freetype-dir' '--without-pear' '--disable-debug' '--enable-gd-native-ttf' '--enable-fpm' '--enable-cli' '--enable-inline-optimization' '--enable-exif' '--enable-wddx' '--enable-zip' '--enable-bcmath' '--enable-calendar' '--enable-ftp' '--enable-mbstring' '--enable-soap' '--enable-sockets' '--enable-shmop' '--enable-dba' '--enable-sysvsem' '--enable-sysvshm' '--enable-sysvmsg' '--enable-intl' '--enable-opcache'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	""
#define PHP_MYSQL_LIBS		""
#define PHP_MYSQL_TYPE		""
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "${OPENSHIFT_PHP_DIR}/ext"
#define PHP_PREFIX              "${OPENSHIFT_PHP_VERSION_DIR}"
#define PHP_BINDIR              "${OPENSHIFT_PHP_VERSION_DIR}/bin"
#define PHP_SBINDIR             "${OPENSHIFT_PHP_VERSION_DIR}/sbin"
#define PHP_MANDIR              "${OPENSHIFT_PHP_VERSION_DIR}/php/man"
#define PHP_LIBDIR              "${OPENSHIFT_PHP_VERSION_DIR}/lib/php"
#define PHP_DATADIR             "${OPENSHIFT_PHP_VERSION_DIR}/share/php"
#define PHP_SYSCONFDIR          "${OPENSHIFT_PHP_VERSION_DIR}/etc"
#define PHP_LOCALSTATEDIR       "${OPENSHIFT_PHP_DIR}"
#define PHP_CONFIG_FILE_PATH    "${OPENSHIFT_PHP_VERSION_DIR}/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
