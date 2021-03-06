// SPDX-License-Identifier: BSD-3-Clause
/*
 *  Copyright 2020-2021 NXP
 */

/**
 * @Flash info
 *
 */
#ifndef __FLASH_INFO_H_
#define __FLASH_INFO_H_

#define SZ_16M_BYTES			0x1000000U

#if defined(CONFIG_MT25QU512A)
#define F_SECTOR_64K			0x10000U
#define F_PAGE_256			0x100U
#define F_SECTOR_4K			0x1000U
#define F_FLASH_SIZE_BYTES		0x4000000U
#define F_SECTOR_ERASE_SZ		F_SECTOR_64K
#ifdef CONFIG_FSPI_4K_ERASE
#define F_SECTOR_ERASE_SZ		F_SECTOR_4K
#endif

#elif defined(CONFIG_MX25U25645G)
#define F_SECTOR_64K			0x10000U
#define F_PAGE_256			0x100U
#define F_SECTOR_4K			0x1000U
#define F_FLASH_SIZE_BYTES		0x2000000U
#define F_SECTOR_ERASE_SZ		F_SECTOR_64K
#ifdef CONFIG_FSPI_4K_ERASE
#define F_SECTOR_ERASE_SZ		F_SECTOR_4K
#endif

#elif defined(CONFIG_MX25U51245G)
#define F_SECTOR_64K			0x10000U
#define F_PAGE_256			0x100U
#define F_SECTOR_4K			0x1000U
#define F_FLASH_SIZE_BYTES		0x4000000U
#define F_SECTOR_ERASE_SZ		F_SECTOR_64K
#ifdef CONFIG_FSPI_4K_ERASE
#define F_SECTOR_ERASE_SZ		F_SECTOR_4K
#endif

#elif defined(CONFIG_MT35XU512A)
#define F_SECTOR_128K			0x20000U
#define F_SECTOR_32K			0x8000U
#define F_PAGE_256			0x100U
#define F_SECTOR_4K			0x1000U
#define F_FLASH_SIZE_BYTES		0x4000000U
#define F_SECTOR_ERASE_SZ		F_SECTOR_128K
#ifdef CONFIG_FSPI_4K_ERASE
#define F_SECTOR_ERASE_SZ		F_SECTOR_4K
#endif

/* Waiting time for WARM Boot, it varies for different flash model*/
#ifdef NXP_WARM_BOOT
#define FLASH_WR_COMP_WAIT_BY_NOP_COUNT	0x20000
#endif

#elif defined(CONFIG_MT35XU02G)
#define F_SECTOR_128K			0x20000U
#define F_PAGE_256			0x100U
#define F_SECTOR_4K			0x1000U
#define F_FLASH_SIZE_BYTES		0x10000000U
#define F_SECTOR_ERASE_SZ		F_SECTOR_128K
#ifdef CONFIG_FSPI_4K_ERASE
#define F_SECTOR_ERASE_SZ		F_SECTOR_4K
#endif

#endif
#endif /* __FLASH_INFO_H_ */
