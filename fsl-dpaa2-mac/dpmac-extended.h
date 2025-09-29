/* SPDX-License-Identifier: (GPL-2.0+ OR BSD-3-Clause) */
/* Copyright 2013-2016 Freescale Semiconductor Inc.
 * Copyright 2019, 2024 NXP
 */
#ifndef __FSL_DPMAC_EXTENDED_H
#define __FSL_DPMAC_EXTENDED_H

#include <dpmac.h>

/**
 * struct dpmac_link_cfg - Structure representing DPMAC link configuration
 * @rate: Link's rate - in Mbps
 * @options: Enable/Disable DPMAC link cfg features (bitmap)
 * @advertising: Speeds that are advertised for autoneg (bitmap)
 */
struct dpmac_link_cfg {
	u32 rate;
	u64 options;
	u64 advertising;
};

int dpmac_get_link_cfg(struct fsl_mc_io *mc_io,
		       u32 cmd_flags,
		       u16 token,
		       struct dpmac_link_cfg *cfg);

/**
 * DPMAC IRQ Index and Events
 */

/**
 * IRQ index
 */
#define DPMAC_IRQ_INDEX				0
/**
 * IRQ event - indicates a change in link state
 */
#define DPMAC_IRQ_EVENT_LINK_CFG_REQ		0x00000001
/**
 * IRQ event - Indicates that the link state changed
 */
#define DPMAC_IRQ_EVENT_LINK_CHANGED		0x00000002
/**
 * IRQ event - Indicate if the phy needs to suspend or resume
 */
#define DPMAC_IRQ_EVENT_LINK_UP_REQ		0x00000004
#define DPMAC_IRQ_EVENT_LINK_DOWN_REQ		0x00000008

int dpmac_set_irq_enable(struct fsl_mc_io *mc_io,
			 u32 cmd_flags,
			 u16 token,
			 u8 irq_index,
			 u8 en);

int dpmac_get_irq_enable(struct fsl_mc_io *mc_io,
			 u32 cmd_flags,
			 u16 token,
			 u8 irq_index,
			 u8 *en);

int dpmac_set_irq_mask(struct fsl_mc_io *mc_io,
		       u32 cmd_flags,
		       u16 token,
		       u8 irq_index,
		       u32 mask);

int dpmac_get_irq_mask(struct fsl_mc_io *mc_io,
		       u32 cmd_flags,
		       u16 token,
		       u8 irq_index,
		       u32 *mask);

int dpmac_get_irq_status(struct fsl_mc_io *mc_io,
			 u32 cmd_flags,
			 u16 token,
			 u8 irq_index,
			 u32 *status);

int dpmac_clear_irq_status(struct fsl_mc_io *mc_io,
			   u32 cmd_flags,
			   u16 token,
			   u8 irq_index,
			   u32 status);

int dpmac_get_statistics(struct fsl_mc_io *mc_io, u32 cmd_flags, u16 token,
			 u64 iova_cnt, u64 iova_values, u32 num_cnt);

#endif /* __FSL_DPMAC_H */
