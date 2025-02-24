/* SPDX-FileCopyrightText: 2008 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup edlattice
 */

#include "DNA_scene_types.h"

#include "WM_api.hh"

#include "ED_lattice.hh"
#include "ED_screen.hh"

#include "lattice_intern.h"

void ED_operatortypes_lattice()
{
  WM_operatortype_append(LATTICE_OT_select_all);
  WM_operatortype_append(LATTICE_OT_select_more);
  WM_operatortype_append(LATTICE_OT_select_less);
  WM_operatortype_append(LATTICE_OT_select_ungrouped);
  WM_operatortype_append(LATTICE_OT_select_random);
  WM_operatortype_append(LATTICE_OT_select_mirror);
  WM_operatortype_append(LATTICE_OT_make_regular);
  WM_operatortype_append(LATTICE_OT_flip);
}

void ED_keymap_lattice(wmKeyConfig *keyconf)
{
  wmKeyMap *keymap = WM_keymap_ensure(keyconf, "Lattice", 0, 0);
  keymap->poll = ED_operator_editlattice;
}
