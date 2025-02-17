// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

#pragma once

#include <valent.h>

G_BEGIN_DECLS

#define VALENT_TYPE_PACKETLESS_PLUGIN (valent_packetless_plugin_get_type())

G_DECLARE_FINAL_TYPE (ValentPacketlessPlugin, valent_packetless_plugin, VALENT, PACKETLESS_PLUGIN, ValentDevicePlugin)

G_MODULE_EXPORT void valent_packetless_plugin_register_types (PeasObjectModule *module);

G_END_DECLS

