#
# *****************************************************************************
#
# @file       ${OUTFILENAME}
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2011-2015.
# @brief      Autogenerated NSIS header file, built using template
#             ${TEMPLATE}
#
# @see        The GNU Public License (GPL) Version 3
#
# *****************************************************************************
#

; Some names, paths and constants
!define OP_BIG_NAME "${OP_BIG_NAME}"
!define GCS_BIG_NAME "${GCS_BIG_NAME}"
!define GCS_SMALL_NAME "${GCS_SMALL_NAME}"
!define PACKAGE_LBL "${PACKAGE_LBL}"
!define PACKAGE_NAME "${PACKAGE_NAME}"
!define PACKAGE_SEP "${PACKAGE_SEP}"
!define PACKAGE_DIR "..\..\build\package"
!define FIRMWARE_DIR "firmware"
!define OUT_FILE "$${PACKAGE_NAME}$${PACKAGE_SEP}$${PACKAGE_LBL}$${PACKAGE_SEP}win32.exe"

; Installer version info
!define PRODUCT_VERSION "0.0.0.0"
!define FILE_VERSION "${TAG_OR_BRANCH}:${HASH8}${DIRTY} ${DATETIME}"
!define BUILD_DESCRIPTION "${PACKAGE_LBL} built from ${ORIGIN}, committed ${DATETIME} as ${HASH}"
