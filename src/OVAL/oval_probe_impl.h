/*
 * Copyright 2009-2010 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      "Daniel Kopecek" <dkopecek@redhat.com>
 */

#include "config.h"
#pragma once
#ifndef OVAL_PROBE_IMPL_H
#define OVAL_PROBE_IMPL_H

#include <config.h>
#ifdef ENABLE_PROBES

#include <seap-types.h>
#include "oval_definitions_impl.h"
#include "oval_agent_api_impl.h"
#include "oval_parser_impl.h"
#include "oval_string_map_impl.h"
#include "public/oval_system_characteristics.h"
#include "../common/util.h"
#include "public/oval_probe.h"
#include "probes/_probe-api.h"

#include "public/oval_probe_session.h"
#include "public/oval_probe_handler.h"
#include "public/oval_probe.h"

OSCAP_HIDDEN_START;

#define OVAL_PROBE_SCHEME "pipe"

#ifndef OVAL_PROBE_DIR
# define OVAL_PROBE_DIR    "/usr/libexec/openscap"
#endif

#define OVAL_PROBE_MAXRETRY 3

const char *oval_subtype2str(oval_subtype_t subtype);
oval_subtype_t oval_str2subtype(const char *str);

typedef struct {
        oval_subtype_t type;
        char          *name;
} oval_subtypedsc_t;

OSCAP_HIDDEN_END;

extern encache_t *OSCAP_GSYM(encache);

#endif /* ENABLE_PROBES */
#endif /* OVAL_PROBE_IMPL_H */
