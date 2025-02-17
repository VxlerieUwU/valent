// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

#pragma once

#include <adwaita.h>

#include "../core/valent-object.h"

G_BEGIN_DECLS

#define VALENT_TYPE_WINDOW (valent_window_get_type())

_VALENT_EXTERN
G_DECLARE_FINAL_TYPE (ValentWindow, valent_window, VALENT, WINDOW, AdwApplicationWindow)

G_END_DECLS
