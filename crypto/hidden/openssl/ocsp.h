/* $OpenBSD: ocsp.h,v 1.3 2024/07/08 17:01:54 beck Exp $ */
/*
 * Copyright (c) 2023 Bob Beck <beck@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _LIBCRYPTO_OCSP_H
#define _LIBCRYPTO_OCSP_H

#ifndef _MSC_VER
#include_next <openssl/ocsp.h>
#else
#include "../include/openssl/ocsp.h"
#endif
#include "crypto_namespace.h"

LCRYPTO_USED(OCSP_RESPID_new);
LCRYPTO_USED(OCSP_RESPID_free);
LCRYPTO_USED(d2i_OCSP_RESPID);
LCRYPTO_USED(i2d_OCSP_RESPID);
LCRYPTO_USED(OCSP_CERTID_dup);
LCRYPTO_USED(OCSP_sendreq_bio);
LCRYPTO_USED(OCSP_sendreq_new);
LCRYPTO_USED(OCSP_sendreq_nbio);
LCRYPTO_USED(OCSP_REQ_CTX_free);
LCRYPTO_USED(OCSP_REQ_CTX_set1_req);
LCRYPTO_USED(OCSP_REQ_CTX_add1_header);
LCRYPTO_USED(OCSP_cert_to_id);
LCRYPTO_USED(OCSP_cert_id_new);
LCRYPTO_USED(OCSP_request_add0_id);
LCRYPTO_USED(OCSP_request_add1_nonce);
LCRYPTO_USED(OCSP_basic_add1_nonce);
LCRYPTO_USED(OCSP_check_nonce);
LCRYPTO_USED(OCSP_copy_nonce);
LCRYPTO_USED(OCSP_request_set1_name);
LCRYPTO_USED(OCSP_request_add1_cert);
LCRYPTO_USED(OCSP_request_sign);
LCRYPTO_USED(OCSP_response_status);
LCRYPTO_USED(OCSP_response_get1_basic);
LCRYPTO_USED(OCSP_resp_get0_signature);
LCRYPTO_USED(OCSP_resp_get0_tbs_sigalg);
LCRYPTO_USED(OCSP_resp_get0_respdata);
LCRYPTO_USED(OCSP_resp_get0_signer);
LCRYPTO_USED(OCSP_resp_count);
LCRYPTO_USED(OCSP_resp_get0);
LCRYPTO_USED(OCSP_resp_get0_produced_at);
LCRYPTO_USED(OCSP_resp_get0_certs);
LCRYPTO_USED(OCSP_resp_get0_id);
LCRYPTO_USED(OCSP_resp_find);
LCRYPTO_USED(OCSP_single_get0_status);
LCRYPTO_USED(OCSP_resp_find_status);
LCRYPTO_USED(OCSP_check_validity);
LCRYPTO_USED(OCSP_request_verify);
LCRYPTO_USED(OCSP_parse_url);
LCRYPTO_USED(OCSP_id_issuer_cmp);
LCRYPTO_USED(OCSP_id_cmp);
LCRYPTO_USED(OCSP_request_onereq_count);
LCRYPTO_USED(OCSP_request_onereq_get0);
LCRYPTO_USED(OCSP_onereq_get0_id);
LCRYPTO_USED(OCSP_id_get0_info);
LCRYPTO_USED(OCSP_request_is_signed);
LCRYPTO_USED(OCSP_response_create);
LCRYPTO_USED(OCSP_basic_add1_status);
LCRYPTO_USED(OCSP_basic_add1_cert);
LCRYPTO_USED(OCSP_basic_sign);
LCRYPTO_USED(OCSP_crlID_new);
LCRYPTO_USED(OCSP_accept_responses_new);
LCRYPTO_USED(OCSP_archive_cutoff_new);
LCRYPTO_USED(OCSP_url_svcloc_new);
LCRYPTO_USED(OCSP_REQUEST_get_ext_count);
LCRYPTO_USED(OCSP_REQUEST_get_ext_by_NID);
LCRYPTO_USED(OCSP_REQUEST_get_ext_by_OBJ);
LCRYPTO_USED(OCSP_REQUEST_get_ext_by_critical);
LCRYPTO_USED(OCSP_REQUEST_get_ext);
LCRYPTO_USED(OCSP_REQUEST_delete_ext);
LCRYPTO_USED(OCSP_REQUEST_get1_ext_d2i);
LCRYPTO_USED(OCSP_REQUEST_add1_ext_i2d);
LCRYPTO_USED(OCSP_REQUEST_add_ext);
LCRYPTO_USED(OCSP_ONEREQ_get_ext_count);
LCRYPTO_USED(OCSP_ONEREQ_get_ext_by_NID);
LCRYPTO_USED(OCSP_ONEREQ_get_ext_by_OBJ);
LCRYPTO_USED(OCSP_ONEREQ_get_ext_by_critical);
LCRYPTO_USED(OCSP_ONEREQ_get_ext);
LCRYPTO_USED(OCSP_ONEREQ_delete_ext);
LCRYPTO_USED(OCSP_ONEREQ_get1_ext_d2i);
LCRYPTO_USED(OCSP_ONEREQ_add1_ext_i2d);
LCRYPTO_USED(OCSP_ONEREQ_add_ext);
LCRYPTO_USED(OCSP_BASICRESP_get_ext_count);
LCRYPTO_USED(OCSP_BASICRESP_get_ext_by_NID);
LCRYPTO_USED(OCSP_BASICRESP_get_ext_by_OBJ);
LCRYPTO_USED(OCSP_BASICRESP_get_ext_by_critical);
LCRYPTO_USED(OCSP_BASICRESP_get_ext);
LCRYPTO_USED(OCSP_BASICRESP_delete_ext);
LCRYPTO_USED(OCSP_BASICRESP_get1_ext_d2i);
LCRYPTO_USED(OCSP_BASICRESP_add1_ext_i2d);
LCRYPTO_USED(OCSP_BASICRESP_add_ext);
LCRYPTO_USED(OCSP_SINGLERESP_get_ext_count);
LCRYPTO_USED(OCSP_SINGLERESP_get_ext_by_NID);
LCRYPTO_USED(OCSP_SINGLERESP_get_ext_by_OBJ);
LCRYPTO_USED(OCSP_SINGLERESP_get_ext_by_critical);
LCRYPTO_USED(OCSP_SINGLERESP_get_ext);
LCRYPTO_USED(OCSP_SINGLERESP_delete_ext);
LCRYPTO_USED(OCSP_SINGLERESP_get1_ext_d2i);
LCRYPTO_USED(OCSP_SINGLERESP_add1_ext_i2d);
LCRYPTO_USED(OCSP_SINGLERESP_add_ext);
LCRYPTO_USED(OCSP_SINGLERESP_get0_id);
LCRYPTO_USED(OCSP_SINGLERESP_new);
LCRYPTO_USED(OCSP_SINGLERESP_free);
LCRYPTO_USED(d2i_OCSP_SINGLERESP);
LCRYPTO_USED(i2d_OCSP_SINGLERESP);
LCRYPTO_USED(OCSP_CERTSTATUS_new);
LCRYPTO_USED(OCSP_CERTSTATUS_free);
LCRYPTO_USED(d2i_OCSP_CERTSTATUS);
LCRYPTO_USED(i2d_OCSP_CERTSTATUS);
LCRYPTO_USED(OCSP_REVOKEDINFO_new);
LCRYPTO_USED(OCSP_REVOKEDINFO_free);
LCRYPTO_USED(d2i_OCSP_REVOKEDINFO);
LCRYPTO_USED(i2d_OCSP_REVOKEDINFO);
LCRYPTO_USED(OCSP_BASICRESP_new);
LCRYPTO_USED(OCSP_BASICRESP_free);
LCRYPTO_USED(d2i_OCSP_BASICRESP);
LCRYPTO_USED(i2d_OCSP_BASICRESP);
LCRYPTO_USED(OCSP_RESPDATA_new);
LCRYPTO_USED(OCSP_RESPDATA_free);
LCRYPTO_USED(d2i_OCSP_RESPDATA);
LCRYPTO_USED(i2d_OCSP_RESPDATA);
LCRYPTO_USED(OCSP_RESPID_new);
LCRYPTO_USED(OCSP_RESPID_free);
LCRYPTO_USED(d2i_OCSP_RESPID);
LCRYPTO_USED(i2d_OCSP_RESPID);
LCRYPTO_USED(OCSP_RESPONSE_new);
LCRYPTO_USED(OCSP_RESPONSE_free);
LCRYPTO_USED(d2i_OCSP_RESPONSE);
LCRYPTO_USED(i2d_OCSP_RESPONSE);
LCRYPTO_USED(d2i_OCSP_RESPONSE_bio);
LCRYPTO_USED(i2d_OCSP_RESPONSE_bio);
LCRYPTO_USED(OCSP_RESPBYTES_new);
LCRYPTO_USED(OCSP_RESPBYTES_free);
LCRYPTO_USED(d2i_OCSP_RESPBYTES);
LCRYPTO_USED(i2d_OCSP_RESPBYTES);
LCRYPTO_USED(OCSP_ONEREQ_new);
LCRYPTO_USED(OCSP_ONEREQ_free);
LCRYPTO_USED(d2i_OCSP_ONEREQ);
LCRYPTO_USED(i2d_OCSP_ONEREQ);
LCRYPTO_USED(OCSP_CERTID_new);
LCRYPTO_USED(OCSP_CERTID_free);
LCRYPTO_USED(d2i_OCSP_CERTID);
LCRYPTO_USED(i2d_OCSP_CERTID);
LCRYPTO_USED(OCSP_REQUEST_new);
LCRYPTO_USED(OCSP_REQUEST_free);
LCRYPTO_USED(d2i_OCSP_REQUEST);
LCRYPTO_USED(i2d_OCSP_REQUEST);
LCRYPTO_USED(d2i_OCSP_REQUEST_bio);
LCRYPTO_USED(i2d_OCSP_REQUEST_bio);
LCRYPTO_USED(OCSP_SIGNATURE_new);
LCRYPTO_USED(OCSP_SIGNATURE_free);
LCRYPTO_USED(d2i_OCSP_SIGNATURE);
LCRYPTO_USED(i2d_OCSP_SIGNATURE);
LCRYPTO_USED(OCSP_REQINFO_new);
LCRYPTO_USED(OCSP_REQINFO_free);
LCRYPTO_USED(d2i_OCSP_REQINFO);
LCRYPTO_USED(i2d_OCSP_REQINFO);
LCRYPTO_USED(OCSP_CRLID_new);
LCRYPTO_USED(OCSP_CRLID_free);
LCRYPTO_USED(d2i_OCSP_CRLID);
LCRYPTO_USED(i2d_OCSP_CRLID);
LCRYPTO_USED(OCSP_SERVICELOC_new);
LCRYPTO_USED(OCSP_SERVICELOC_free);
LCRYPTO_USED(d2i_OCSP_SERVICELOC);
LCRYPTO_USED(i2d_OCSP_SERVICELOC);
LCRYPTO_USED(OCSP_response_status_str);
LCRYPTO_USED(OCSP_cert_status_str);
LCRYPTO_USED(OCSP_crl_reason_str);
LCRYPTO_USED(OCSP_REQUEST_print);
LCRYPTO_USED(OCSP_RESPONSE_print);
LCRYPTO_USED(OCSP_basic_verify);
LCRYPTO_USED(ERR_load_OCSP_strings);
#if defined(LIBRESSL_NAMESPACE)
extern LCRYPTO_USED(OCSP_RESPID_it);
extern LCRYPTO_USED(OCSP_SINGLERESP_it);
extern LCRYPTO_USED(OCSP_CERTSTATUS_it);
extern LCRYPTO_USED(OCSP_REVOKEDINFO_it);
extern LCRYPTO_USED(OCSP_BASICRESP_it);
extern LCRYPTO_USED(OCSP_RESPDATA_it);
extern LCRYPTO_USED(OCSP_RESPID_it);
extern LCRYPTO_USED(OCSP_RESPONSE_it);
extern LCRYPTO_USED(OCSP_RESPBYTES_it);
extern LCRYPTO_USED(OCSP_ONEREQ_it);
extern LCRYPTO_USED(OCSP_CERTID_it);
extern LCRYPTO_USED(OCSP_REQUEST_it);
extern LCRYPTO_USED(OCSP_SIGNATURE_it);
extern LCRYPTO_USED(OCSP_REQINFO_it);
extern LCRYPTO_USED(OCSP_CRLID_it);
extern LCRYPTO_USED(OCSP_SERVICELOC_it);
#endif

#endif /* _LIBCRYPTO_OCSP_H */
