/*
 * Copyright © 2020-2022 Matt Robinson
 *
 * SPDX-License-Identifier: MIT
 */

// Disable server password auth as crypt() isn't available under Android
#define DROPBEAR_SVR_PASSWORD_AUTH 0

// Disable client password auth as getpass() isn't available under Android
#define DROPBEAR_CLI_PASSWORD_AUTH 0

// Speed up symmetrical ciphers and hashes at the expense of larger binaries
//#define DROPBEAR_SMALL_CODE 0

// Build all but the most verbose level of trace messages into the binaries
#define DEBUG_TRACE 4

#define COMPAT_USER_SHELLS "/system/bin/sh"

#define DROPBEAR_DEFPORT "33284"
#define DSS_PRIV_FILENAME "dropbear_dss_host_key"
#define RSA_PRIV_FILENAME "dropbear_rsa_host_key"
#define ECDSA_PRIV_FILENAME "dropbear_ecdsa_host_key"
#define ED25519_PRIV_FILENAME "dropbear_ed25519_host_key"

