// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

#pragma once

#include <gio/gio.h>

G_BEGIN_DECLS

#define VALENT_INSIDE

// libvalent-core
#include "core/valent-certificate.h"
#include "core/valent-component.h"
#include "core/valent-context.h"
#include "core/valent-core-enums.h"
#include "core/valent-debug.h"
#include "core/valent-global.h"
#include "core/valent-macros.h"
#include "core/valent-object.h"
#include "core/valent-transfer.h"
#include "core/valent-version.h"

// libvalent-components
#include "clipboard/valent-clipboard.h"
#include "clipboard/valent-clipboard-adapter.h"

#include "contacts/valent-contacts.h"
#include "contacts/valent-contacts-adapter.h"
#include "contacts/valent-contact-store.h"
#include "contacts/valent-eds.h"

#include "input/valent-input.h"
#include "input/valent-input-adapter.h"
#include "input/valent-input-keydef.h"

#include "media/valent-media.h"
#include "media/valent-media-adapter.h"
#include "media/valent-media-enums.h"
#include "media/valent-media-player.h"

#include "mixer/valent-mixer.h"
#include "mixer/valent-mixer-adapter.h"
#include "mixer/valent-mixer-enums.h"
#include "mixer/valent-mixer-stream.h"

#include "notifications/valent-notification.h"
#include "notifications/valent-notifications.h"
#include "notifications/valent-notifications-adapter.h"

#include "session/valent-session.h"
#include "session/valent-session-adapter.h"

// libvalent-device
#include "device/valent-channel.h"
#include "device/valent-channel-service.h"
#include "device/valent-device.h"
#include "device/valent-device-enums.h"
#include "device/valent-device-manager.h"
#include "device/valent-device-plugin.h"
#include "device/valent-device-transfer.h"
#include "device/valent-packet.h"

// libvalent-ui
#include "ui/valent-application.h"
#include "ui/valent-application-plugin.h"
#include "ui/valent-device-gadget.h"
#include "ui/valent-device-preferences-page.h"
#include "ui/valent-preferences-page.h"
#include "ui/valent-ui-utils.h"

#undef VALENT_INSIDE

G_END_DECLS
