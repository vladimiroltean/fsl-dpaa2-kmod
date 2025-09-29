/* SPDX-License-Identifier: (GPL-2.0+ OR BSD-3-Clause) */
/* Copyright 2013-2016 Freescale Semiconductor Inc.
 * Copyright 2019 NXP
 */
#ifndef _FSL_DPMAC_CMD_EXTENDED_H
#define _FSL_DPMAC_CMD_EXTENDED_H

#include <dpmac-cmd.h>

#define DPMAC_CMDID_SET_IRQ_ENABLE	DPMAC_CMD(0x012)
#define DPMAC_CMDID_GET_IRQ_ENABLE	DPMAC_CMD(0x013)
#define DPMAC_CMDID_SET_IRQ_MASK	DPMAC_CMD(0x014)
#define DPMAC_CMDID_GET_IRQ_MASK	DPMAC_CMD(0x015)
#define DPMAC_CMDID_GET_IRQ_STATUS	DPMAC_CMD(0x016)
#define DPMAC_CMDID_CLEAR_IRQ_STATUS	DPMAC_CMD(0x017)

#define DPMAC_CMDID_GET_LINK_CFG	DPMAC_CMD_V2(0x0c2)

#define DPMAC_CMDID_GET_STATISTICS	DPMAC_CMD(0x0c8)

struct dpmac_cmd_set_irq_enable {
	u8 enable;
	u8 pad[3];
	u8 irq_index;
};

struct dpmac_cmd_get_irq_enable {
	u32 pad;
	u8 irq_index;
};

struct dpmac_rsp_get_irq_enable {
	u8 enabled;
};

struct dpmac_cmd_set_irq_mask {
	u32 mask;
	u8 irq_index;
};

struct dpmac_cmd_get_irq_mask {
	u32 pad;
	u8 irq_index;
};

struct dpmac_rsp_get_irq_mask {
	u32 mask;
};

struct dpmac_cmd_get_irq_status {
	u32 status;
	u8 irq_index;
};

struct dpmac_rsp_get_irq_status {
	u32 status;
};

struct dpmac_cmd_clear_irq_status {
	u32 status;
	u8 irq_index;
};

struct dpmac_rsp_get_link_cfg {
	u64 options;
	u32 rate;
	u32 pad;
	u64 advertising;
};

struct dpmac_cmd_get_statistics {
	__le64 iova_cnt;
	__le64 iova_values;
	__le32 num_cnt;
};

#endif  /* _FSL_DPMAC_CMD_EXTENDED_H */
