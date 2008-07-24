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

#ifndef __JAVACALL_DOM_MUTATIONEVENT_H_
#define __JAVACALL_DOM_MUTATIONEVENT_H_

/**
 * @file javacall_dom_mutationevent.h
 * @ingroup JSR290DOM
 * @brief Javacall DOM interfaces for MutationEvent
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
 * Returns  <code>relatedNode</code> is used to identify a secondary node related 
 * to a mutation event. For example, if a mutation event is dispatched 
 * to a node indicating that its parent has changed, the 
 * <code>relatedNode</code> is the changed parent. If an event is 
 * instead dispatched to a subtree indicating a node was changed within 
 * it, the <code>relatedNode</code> is the changed node. In the case of 
 * the DOMAttrModified event it indicates the <code>Attr</code> node 
 * which was modified, added, or removed. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_get_related_node(javacall_handle handle,
                                            /* OUT */ javacall_handle* ret_value);

/**
 * Returns  <code>prevValue</code> indicates the previous value of the 
 * <code>Attr</code> node in DOMAttrModified events, and of the 
 * <code>CharacterData</code> node in DOMCharDataModified events. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_OUT_OF_MEMORY if length of the returend string is more then 
 *                                specified in ret_value_len,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_get_prev_value(javacall_handle handle,
                                          /* OUT */ javacall_utf16_string ret_value,
                                          /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Returns  <code>newValue</code> indicates the new value of the <code>Attr</code> 
 * node in DOMAttrModified events, and of the <code>CharacterData</code> 
 * node in DOMCharDataModified events. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_OUT_OF_MEMORY if length of the returend string is more then 
 *                                specified in ret_value_len,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_get_new_value(javacall_handle handle,
                                         /* OUT */ javacall_utf16_string ret_value,
                                         /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Returns  <code>attrName</code> indicates the name of the changed 
 * <code>Attr</code> node in a DOMAttrModified event. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_OUT_OF_MEMORY if length of the returend string is more then 
 *                                specified in ret_value_len,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_get_attr_name(javacall_handle handle,
                                         /* OUT */ javacall_utf16_string ret_value,
                                         /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Returns  <code>attrChange</code> indicates the type of change which triggered 
 * the DOMAttrModified event. The values can be <code>MODIFICATION</code>
 * , <code>ADDITION</code>, or <code>REMOVAL</code>. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_get_attr_change(javacall_handle handle,
                                           /* OUT */ javacall_int16* ret_value);

/**
 *  The <code>initMutationEvent</code> method is used to initialize the 
 * value of a <code>MutationEvent</code> object and has the same 
 * behavior as <code>Event.initEvent()</code>. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * @param type_arg  Refer to the <code>Event.initEvent()</code> method for 
 *   a description of this parameter. 
 * @param can_bubble_arg  Refer to the <code>Event.initEvent()</code> 
 *   method for a description of this parameter. 
 * @param cancelable_arg  Refer to the <code>Event.initEvent()</code> 
 *   method for a description of this parameter. 
 * @param related_node_arg Pointer to the object of
 *    Specifies <code>MutationEvent.relatedNode</code>.
 *   This value may be NULL.
 * @param prev_value_arg  Specifies <code>MutationEvent.prevValue</code>. 
 *   This value may be NULL. 
 * @param new_value_arg  Specifies <code>MutationEvent.newValue</code>. 
 *   This value may be NULL. 
 * @param attr_name_arg  Specifies <code>MutationEvent.attrname</code>. 
 *   This value may be NULL. 
 * @param attr_change_arg  Specifies <code>MutationEvent.attrChange</code>. 
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_init_mutation_event(javacall_handle handle,
                                               javacall_const_utf16_string type_arg,
                                               javacall_bool can_bubble_arg,
                                               javacall_bool cancelable_arg,
                                               javacall_handle related_node_arg,
                                               javacall_const_utf16_string prev_value_arg,
                                               javacall_const_utf16_string new_value_arg,
                                               javacall_const_utf16_string attr_name_arg,
                                               javacall_int16 attr_change_arg);

/**
 *  The <code>initMutationEventNS</code> method is used to initialize the 
 * value of a <code>MutationEvent</code> object and has the same 
 * behavior as <code>Event.initEventNS()</code>. 
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * @param namespace_uri_arg  Refer to the <code>Event.initEventNS()</code> 
 *   method for a description of this parameter. 
 * @param type_arg  Refer to the <code>Event.initEventNS()</code> method 
 *   for a description of this parameter. 
 * @param can_bubble_arg  Refer to the <code>Event.initEventNS()</code> 
 *   method for a description of this parameter. 
 * @param cancelable_arg  Refer to the <code>Event.initEventNS()</code> 
 *   method for a description of this parameter. 
 * @param related_node_arg Pointer to the object of
 *    Refer to the 
 *   <code>MutationEvent.initMutationEvent()</code> method for a 
 *   description of this parameter. 
 * @param prev_value_arg  Refer to the 
 *   <code>MutationEvent.initMutationEvent()</code> method for a 
 *   description of this parameter. 
 * @param new_value_arg  Refer to the 
 *   <code>MutationEvent.initMutationEvent()</code> method for a 
 *   description of this parameter. 
 * @param attr_name_arg  Refer to the 
 *   <code>MutationEvent.initMutationEvent()</code> method for a 
 *   description of this parameter. 
 * @param attr_change_arg  Refer to the 
 *   <code>MutationEvent.initMutationEvent()</code> method for a 
 *   description of this parameter.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_init_mutation_event_ns(javacall_handle handle,
                                                  javacall_const_utf16_string namespace_uri_arg,
                                                  javacall_const_utf16_string type_arg,
                                                  javacall_bool can_bubble_arg,
                                                  javacall_bool cancelable_arg,
                                                  javacall_handle related_node_arg,
                                                  javacall_const_utf16_string prev_value_arg,
                                                  javacall_const_utf16_string new_value_arg,
                                                  javacall_const_utf16_string attr_name_arg,
                                                  javacall_int16 attr_change_arg);

/** 
 * Deletes object representing this mutationevent
 * 
 * @param handle Pointer to the object representing this mutationevent.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_mutationevent_finalize(javacall_handle handle);


/** @} */

#ifdef __cplusplus
}
#endif

#endif /* ifndef __JAVACALL_DOM_MUTATIONEVENT_H_ */
