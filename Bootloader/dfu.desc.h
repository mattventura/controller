// Originally Generated from MCHCK Toolkit
/* Copyright (c) Jacob Alexander 2014 <haata@kiibohd.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __DFU_DESC_H
#define __DFU_DESC_H

// ----- Local Includes -----

#include "mchck.h"



// ----- Variables -----

const struct usbd_device dfu_device;

usbd_init_fun_t init_usb_bootloader;



// ----- Structs -----

struct usb_config_1 {
	struct usb_desc_config_t config;
	struct dfu_function_desc usb_function_0;
};

#endif

