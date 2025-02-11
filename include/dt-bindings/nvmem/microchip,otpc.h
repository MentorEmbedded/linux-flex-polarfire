/* SPDX-License-Identifier: GPL-2.0 */

#ifndef _DT_BINDINGS_NVMEM_MICROCHIP_OTPC_H
#define _DT_BINDINGS_NVMEM_MICROCHIP_OTPC_H

/*
 * Need have it as a multiple of 4 as NVMEM memory is registered with
 * stride = 4.
 */
#define OTP_PKT(id)			((id) * 4)

/*
 * Temperature calibration packet length for SAMA7G5: 4 words header,
 * 18 words payload.
 */
#define OTP_PKT_SAMA7G5_TEMP_CALIB_LEN	(19 * 4)

#endif
