/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 * Copyright 2018-2020, paldier <paldier@hotmail.com>.
 * All Rights Reserved.
 * 
 */

#ifndef __MERLINR_H__
#define __MERLINR_H__
#if defined(K3C)
#define DEFUUID "74d916d8-7c69-4a44-acda-71a8feba2903"
extern void k3c_lan_led(void);
extern void k3c_init_led(void);
extern void k3c_init(void);
extern void k3c_init_done(void);
extern void k3c_uuid(void);
#endif
#if defined(RTCONFIG_UUPLUGIN)
extern void exec_uu_merlinr(void);
#endif
#if defined(RTCONFIG_FRS_LIVE_UPDATE) 
#if defined(RTCONFIG_BCMARM) || defined(RTCONFIG_LANTIQ) || defined(RTCONFIG_QCA) || defined(RTCONFIG_HND_ROUTER) || defined(RTCONFIG_RALINK)
extern int merlinr_firmware_check_update_main(int argc, char *argv[]);
#endif
#endif

#if defined(RTCONFIG_SOFTCENTER)
enum {
	SOFTCENTER_WAN=1,
	SOFTCENTER_NAT,
	SOFTCENTER_MOUNT
};
extern void softcenter_eval(int sig);
#endif
#endif

