// SPDX-License-Identifier: GPL-2.0+
/*
 * Virtual (QEMU based) ISP device driver
 * based on imx-pxp.c
 *
 * Copyright (c) 2024 Karthik Poduval <karthik.poduval@gmail.com>
 */

#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/regmap.h>
#include <media/v4l2-device.h>
#include <media/v4l2-ioctl.h>
#include <media/v4l2-common.h>
#include <media/videobuf2-dma-contig.h>
#include <media/v4l2-event.h>
#include <media/videobuf2-v4l2.h>


static int virt_isp_probe(struct platform_device *pdev)
{
	return ret;
}

static int virt_isp_remove(struct platform_device *pdev)
{
	return 0;
}

static const struct of_device_id virt_isp_dt_ids[] = {
	{ .compatible = "virtual,isp", .data = NULL },
	{ },
};
MODULE_DEVICE_TABLE(of, virt_isp_dt_ids);

static struct platform_driver virt_isp_driver = {
	.probe		= virt_isp_probe,
	.remove		= virt_isp_remove,
	.driver		= {
		.name	= MEM2MEM_NAME,
		.of_match_table = virt_isp_dt_ids,
	},
};

module_platform_driver(virt_isp_driver);

MODULE_DESCRIPTION("Virtual (QEMU Based) ISP");
MODULE_AUTHOR("Karthik Poduval <karthik.poduval@gmail.com>");
MODULE_LICENSE("GPL");
