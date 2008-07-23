/*
* Copyright  1990-2008 Sun Microsystems, Inc. All Rights Reserved.
* DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
* 
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License version
* 2 only, as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License version 2 for more details (a copy is
* included at /legal/license.txt).
* 
* You should have received a copy of the GNU General Public License
* version 2 along with this work; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
* 02110-1301 USA
* 
* Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
* Clara, CA 95054 or visit www.sun.com if you need additional
* information or have any questions.
*/

#ifndef __JAVACALL_DOM_NODELIST_H_
#define __JAVACALL_DOM_NODELIST_H_

/**
 * @file javacall_dom_nodelist.h
 * @ingroup JSR290DOM
 * @brief Javacall DOM interfaces for NodeList
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <javacall_dom.h>

/**
 * @defgroup JSR290DOM JSR290 DOM API
 *
 * The following API definitions are required by DOM part of the JSR-290.
 *
 * @{
 */

/**
 * Returns the <code>index</code>th item in the collection. If 
 * <code>index</code> is greater than or equal to the number of nodes in 
 * the list, this returns <code>NULL</code>. The range of valid child
 *  node indices is 0 to <code>length-1</code> inclusive.
 * 
 * @param handle Pointer to the object representing this nodelist.
 * @param index Index into the collection.
 * @param ret_value Pointer to the object representing 
 *   the node at the <code>index</code>th position in the 
 *   <code>NodeList</code>, or <code>NULL</code> if that is not a valid 
 *   index.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_nodelist_item(javacall_handle handle,
                           javacall_int32 index,
                           /* OUT */ javacall_handle* ret_value);

/**
 * Returns the number of nodes in the list. The range of valid child node indices 
 * is 0 to <code>length-1</code> inclusive. 
 * 
 * @param handle Pointer to the object representing this nodelist.
 * @param ret_value The number of nodes in the list
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_nodelist_get_length(javacall_handle handle,
                                 /* OUT */ javacall_int32* ret_value);

/** 
 * Deletes object representing this nodelist
 * 
 * @param handle Pointer to the object representing this nodelist.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_nodelist_finalize(javacall_handle handle);


/** @} */

#ifdef __cplusplus
}
#endif

#endif /* ifndef __JAVACALL_DOM_NODELIST_H_ */
