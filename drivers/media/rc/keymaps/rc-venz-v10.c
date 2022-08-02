// SPDX-License-Identifier: GPL-2.0+
//
// Copyright (C) 2022 Christian Hewitt <christianshewitt@gmail.com>

#include <media/rc-map.h>
#include <linux/module.h>

//
// Keytable for the Venz V10 remote control
//

static struct rc_map_table venz_v10[] = {
	{ 0x847912, KEY_POWER },
	{ 0x847903, KEY_MUTE },

	{ 0x847921, KEY_EPG },
	{ 0x847922, KEY_ZOOMIN },
	{ 0x847923, KEY_ZOOMOUT },
	{ 0x847924, KEY_SCREEN }, // LAUNCHER

	// UP
	// DOWN
	// LEFT
	// RIGHT

	{ 0x847904, KEY_FAVORITES }, // TV-SYS
	{ 0x84790a, KEY_INFO }, // RATIO
	{ 0x84791f, KEY_LANGUAGE }, // TRACK
	{ 0x84791e, KEY_SUBTITLE }, // SUB-T

	{ 0x847929, KEY_RED },
	{ 0x847930, KEY_GREEN },
	{ 0x847931, KEY_YELLOW },
	{ 0x847932, KEY_BLUE },

	{ 0x847906, KEY_HOME },
	{ 0x84791b, KEY_CONFIG },

	{ 0x847905, KEY_UP },
	{ 0x847907, KEY_LEFT },
	{ 0x847908, KEY_OK },
	{ 0x847909, KEY_RIGHT },
	{ 0x847900, KEY_DOWN },

	{ 0x847920, KEY_CONTEXT_MENU },
	{ 0x84791a, KEY_BACK },

	{ 0x847910, KEY_VOLUMEUP },
	{ 0x84790f, KEY_VOLUMEDOWN },
	{ 0x847919, KEY_PLAYPAUSE },
	{ 0x84791c, KEY_STOP },
	{ 0x84791d, KEY_PREVIOUS },
	{ 0x847928, KEY_NEXT },

	{ 0x84790b, KEY_1 },
	{ 0x84790c, KEY_2 },
	{ 0x84790d, KEY_3 },
	{ 0x84790e, KEY_4 },
	{ 0x847911, KEY_5 },
	{ 0x847927, KEY_6 },
	{ 0x847913, KEY_7 },
	{ 0x847914, KEY_8 },
	{ 0x847915, KEY_9 },
	{ 0x847916, KEY_MENU }, // MOUSE
	{ 0x847917, KEY_0 },
	{ 0x847918, KEY_DELETE },
};

static struct rc_map_list venz_v10_map = {
	.map = {
		.scan     = venz_v10,
		.size     = ARRAY_SIZE(venz_v10),
		.rc_proto = RC_PROTO_NEC,
		.name     = RC_MAP_VENZ_V10,
	}
};

static int __init init_rc_map_venz_v10(void)
{
	return rc_map_register(&venz_v10_map);
}

static void __exit exit_rc_map_venz_v10(void)
{
	rc_map_unregister(&venz_v10_map);
}

module_init(init_rc_map_venz_v10)
module_exit(exit_rc_map_venz_v10)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Hewitt <christianshewitt@gmail.com");