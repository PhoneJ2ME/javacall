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

#ifndef __JAVACALL_DOM_EVENT_H_
#define __JAVACALL_DOM_EVENT_H_

/**
 * @file javacall_dom_event.h
 * @ingroup JSR290DOM
 * @brief Javacall DOM interfaces for Event
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
 * Returns the name of the event (case-sensitive). The name must be an XML name.
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_OUT_OF_MEMORY if length of the returend string is more then 
 *                                specified in ret_value_len,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_type(javacall_handle handle,
                            /* OUT */ javacall_utf16_string ret_value,
                            /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Returns used to indicate the <code>EventTarget</code> to which the event was 
 * originally dispatched. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_target(javacall_handle handle,
                              /* OUT */ javacall_handle* ret_value);

/**
 * Returns used to indicate the <code>EventTarget</code> whose 
 * <code>EventListeners</code> are currently being processed. This is 
 * particularly useful during capturing and bubbling. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_current_target(javacall_handle handle,
                                      /* OUT */ javacall_handle* ret_value);

/**
 * Returns  The namespace URI associated with this event at creation time, or 
 * <code>NULL</code> if it is unspecified. 
 * <br> For events initialized with a DOM Level 2 Events method 
 * this is always <code>NULL</code>. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_OUT_OF_MEMORY if length of the returend string is more then 
 *                                specified in ret_value_len,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_namespace_uri(javacall_handle handle,
                                     /* OUT */ javacall_utf16_string ret_value,
                                     /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Returns used to indicate which phase of event flow is currently being 
 * evaluated. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_event_phase(javacall_handle handle,
                                   /* OUT */ javacall_int16* ret_value);

/**
 * Returns used to indicate whether or not an event is a bubbling event. If the 
 * event can bubble the value is true, else the value is false. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_bubbles(javacall_handle handle,
                               /* OUT */ javacall_bool* ret_value);

/**
 * Returns used to indicate whether or not an event can have its default action 
 * prevented. If the default action can be prevented the value is true, 
 * else the value is false. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_cancelable(javacall_handle handle,
                                  /* OUT */ javacall_bool* ret_value);

/**
 * Returns used to indicate whether <code>Event.preventDefault()</code> has been 
 * called for this event. 
 * <p><b>Note:</b>  Calling  <code>Event.preventDefault()</code> 
 * for a non-cancelable event has no effect.
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_default_prevented(javacall_handle handle,
                                         /* OUT */ javacall_bool* ret_value);

/**
 * Returns  Used to specify the time (in milliseconds relative to the epoch) at 
 * which the event was created. Due to the fact that some systems may 
 * not provide this information the value of <code>timeStamp</code> may 
 * be not available for all events. When not available, a value of 0 
 * will be returned. Examples of epoch time are the time of the system 
 * start or 0:0:0 UTC 1st January 1970. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_get_time_stamp(javacall_handle handle,
                                  /* OUT */ javacall_int64* ret_value);

/**
 * The <code>stopPropagation</code> method is used prevent further 
 * propagation of an event during event flow. If this method is called 
 * by any <code>EventListener</code> the event will cease propagating 
 * through the tree. The event will complete dispatch to all listeners 
 * on the current <code>EventTarget</code> before event flow stops. This 
 * method may be used during any stage of event flow.
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_stop_propagation(javacall_handle handle);

/**
 * If an event is cancelable, the <code>preventDefault</code> method is 
 * used to signify that the event is to be canceled, meaning any default 
 * action normally taken by the implementation as a result of the event 
 * will not occur. If, during any stage of event flow, the 
 * <code>preventDefault</code> method is called the event is canceled. 
 * Any default action associated with the event will not occur. Calling 
 * this method for a non-cancelable event has no effect. Once 
 * <code>preventDefault</code> has been called it will remain in effect 
 * throughout the remainder of the event's propagation. This method may 
 * be used during any stage of event flow. 
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_prevent_default(javacall_handle handle);

/**
 * The <code>initEvent</code> method is used to initialize the value of an 
 * <code>Event</code> created through the <code>DocumentEvent</code> 
 * interface. This method may only be called before the 
 * <code>Event</code> has been dispatched via the 
 * <code>dispatchEvent</code> method, though it may be called multiple 
 * times during that phase if necessary. If called multiple times the 
 * final invocation takes precedence. If called from a subclass of 
 * <code>Event</code> interface only the values specified in the 
 * <code>initEvent</code> method are modified, all other attributes are 
 * left unchanged.
 * 
 * @param handle Pointer to the object representing this event.
 * @param event_type_arg Specifies the event type. This type may be any 
 *   event type currently defined in this specification or a new event 
 *   type.. The string must be an XML name. Any new event type must not 
 *   begin with any upper, lower, or mixed case version of the string 
 *   "DOM". This prefix is reserved for future DOM event sets. It is 
 *   also strongly recommended that third parties adding their own 
 *   events use their own prefix to avoid confusion and lessen the 
 *   probability of conflicts with other new events.
 * @param can_bubble_arg Specifies whether or not the event can bubble.
 * @param cancelable_arg Specifies whether or not the event's default 
 *   action can be prevented.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_init_event(javacall_handle handle,
                              javacall_const_utf16_string event_type_arg,
                              javacall_bool can_bubble_arg,
                              javacall_bool cancelable_arg);

/**
 *  The <code>initEventNS</code> method is used to initialize the value of 
 * an <code>Event</code> object and has the same behavior as 
 * <code>Event.initEvent()</code>. 
 * 
 * @param handle Pointer to the object representing this event.
 * @param namespace_uri_arg  Specifies <code>Event.namespaceURI</code>, the 
 *   namespace URI associated with this event, or <code>NULL</code> if 
 *   no namespace. 
 * @param event_type_arg  Refer to the <code>Event.initEvent()</code> 
 *   method for a description of this parameter. 
 * @param can_bubble_arg  Refer to the <code>Event.initEvent()</code> 
 *   method for a description of this parameter. 
 * @param cancelable_arg  Refer to the <code>Event.initEvent()</code> 
 *   method for a description of this parameter.
 *
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 *         JAVACALL_INVALID_ARGUMENT when the handle is NULL
 */
javacall_result
javacall_dom_event_init_event_ns(javacall_handle handle,
                                 javacall_const_utf16_string namespace_uri_arg,
                                 javacall_const_utf16_string event_type_arg,
                                 javacall_bool can_bubble_arg,
                                 javacall_bool cancelable_arg);

/** 
 * Deletes object representing this event
 * 
 * @param handle Pointer to the object representing this event.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_event_finalize(javacall_handle handle);


/** @} */

#ifdef __cplusplus
}
#endif

#endif /* ifndef __JAVACALL_DOM_EVENT_H_ */
