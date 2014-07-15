/******************************************************************************
 * Copyright (c) 2004, 2008 IBM Corporation
 * All rights reserved.
 * This program and the accompanying materials
 * are made available under the terms of the BSD License
 * which accompanies this distribution, and is available at
 * http://www.opensource.org/licenses/bsd-license.php
 *
 * Contributors:
 *     IBM Corporation - initial implementation
 *****************************************************************************/


#ifndef _PCI_H
#define _PCI_H
#include <netdriver_int.h>
#include <of.h>

int pci_calc_bar_size (long long puid, int bus, int devfn, int bar);
int pci_get_bar_start (long long puid, int bus, int devfn, int bar);
void pci_set_bar_start (long long puid, int bus, int devfn, int bar, int value);

unsigned int read_io(void *addr, size_t sz);
int write_io(void *addr, unsigned int value, size_t sz);

#endif
