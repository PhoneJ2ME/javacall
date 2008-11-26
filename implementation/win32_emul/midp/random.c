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


#include "javacall_time.h"

/* IMPL_NOTE: The current implementation is unsafe and must be replaced
 * by something else by the porting engineers, and the replacement code
 * will be platform-specific.
 *
 * The problem this function solves is to obtain a set of really
 * unpredictable bits for use in cryptography.
 * Current time must not be used for that purpose because time is
 * predictable with a good precision, the accuracy of measurement
 * is limited (for example, a function that returns time in microseconds
 * may be just multiplying tenths of second by 100000), which makes the number
 * of really unpredictable bits small.
 */

long javacall_random_get_seed(unsigned char* outbuf, int bufsize) {
	javacall_int64 res = javacall_time_get_milliseconds_since_1970();
	int m = bufsize > sizeof(res) ? sizeof(res) : bufsize;
	int i;
	for(i=0; i<m; i++) {
		outbuf[i] = ((unsigned char*)(void*)&res)[i];
	}
	return m;
}

