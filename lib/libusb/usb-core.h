/*****************************************************************************
 * Copyright (c) 2013 IBM Corporation
 * All rights reserved.
 * This program and the accompanying materials
 * are made available under the terms of the BSD License
 * which accompanies this distribution, and is available at
 * http://www.opensource.org/licenses/bsd-license.php
 *
 * Contributors:
 *     IBM Corporation - initial implementation
 *****************************************************************************/

#ifndef __USB_CORE_H
#define __USB_CORE_H

#include <stdio.h>

enum usb_hcd_type {
	USB_OHCI = 1,
	USB_EHCI = 2,
	USB_XHCI = 3,
};

struct usb_hcd_ops {
	const char *name;
	void (*init)(void);
	void (*detect)(void);
	void (*disconnect)(void);
	struct usb_hcd_ops *next;
	unsigned int usb_type;
};

extern void usb_hcd_register(struct usb_hcd_ops *ops);

#endif