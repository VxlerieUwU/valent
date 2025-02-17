// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: Andy Holmes <andrew.g.r.holmes@gmail.com>

#pragma once

#if !defined (VALENT_INSIDE) && !defined (VALENT_COMPILATION)
# error "Only <valent.h> can be included directly."
#endif

#include <gtk/gtk.h>

#include "../core/valent-object.h"

G_BEGIN_DECLS

#define VALENT_TYPE_APPLICATION (valent_application_get_type())

VALENT_AVAILABLE_IN_1_0
G_DECLARE_FINAL_TYPE (ValentApplication, valent_application, VALENT, APPLICATION, GtkApplication)

VALENT_AVAILABLE_IN_1_0
ValentApplication * _valent_application_new (void);

G_END_DECLS
