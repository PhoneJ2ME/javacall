/*
 *
 * Copyright  1990-2007 Sun Microsystems, Inc. All Rights Reserved.
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
#include "javacall_defs.h"	//for NULL


char* javacall_static_properties_sections[] = {
    "application",
    "internal",
	NULL
};

static char* javacall_static_properties_application_keys[] = {
	"audio.encodings",
	"javax.microedition.io.Connector.protocolpath",
	"microedition.configuration",
	"microedition.jtwi.version",
	"microedition.locale",
	"microedition.media.version",
	"microedition.msa.version",
	"microedition.platform",
	"microedition.profiles",
	"supports.audio.capture",
	"supports.mixing",
	"supports.recording",
	"supports.video.capture",
	"video.encodings",
	"wireless.messaging.sms.smsc",
	"wireless.messaging.version",
	"com.sun.cldc.util.j2me.timezoneimpl.timezone",
	"microedition.commports",
	"microedition.io.file.FileConnection.version",
	"microedition.pim.version",
	"microedition.global.version",
	"microedition.hostname",
	"video.snapshot.encodings",
	"file.separator",
	"fileconn.dir.graphics",
	"fileconn.dir.graphics.name",
	"fileconn.dir.music",
	"fileconn.dir.music.name",
	"fileconn.dir.photos",
	"fileconn.dir.photos.name",
	"fileconn.dir.private",
	"fileconn.dir.private.name",
	"fileconn.dir.private.name",
	"fileconn.dir.recordings",
	"fileconn.dir.recordings.name",
	"fileconn.dir.roots.names",
	"fileconn.dir.tones",
	"fileconn.dir.tones.name",
	"fileconn.dir.videos",
	"fileconn.dir.videos.name",
	NULL
};

static char* javacall_static_properties_application_values[] = {
	"encoding=pcm",
	"com.sun.midp.io",
	"CLDC-1.1",
	"1.0",
	"en-US",
	"1.1",
	"1.0",
	"j2me",
	"MIDP-2.1",
	"true",
	"true",
	"true",
	"true",
	"encoding=png",
	"+17815511212",
	"1.1",
	"",
	"COM1",
	"1.0",
	"1.0",
	"1.0",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
};


static char* javacall_static_properties_internal_keys[] = {
	"com.sun.midp.io.j2me.cbs.DatagramPortIn",
	"com.sun.midp.io.j2me.sms.CBSPort",
	"com.sun.midp.io.j2me.sms.DatagramHost",
	"com.sun.midp.io.j2me.sms.DatagramPortIn",
	"com.sun.midp.io.j2me.sms.DatagramPortOut",
	"com.sun.midp.io.j2me.sms.Impl",
	"com.sun.midp.io.j2me.sms.PhoneNumber",
	"com.sun.midp.io.j2me.wma.DatagramHost",
	"com.sun.midp.lcdui.eventHandler",
	"com.sun.midp.lcdui.inputHandler",
	"destroyMIDletTimeout",
	"suspendAppTimeout",
	"suspendAlertTime",
	"DisableStartupErrorAlert",
	"btl2cap",
	"btspp",
	"btgoep",
	"socket",
	"datagram",
	"sip",
	"sips",
	"sms",
	"cbs",
	"mms",
	"PIMRootDir",
	"file.linebreak",
	"javax.microedition.pim.handler",
	"microedition.global.collation.abstractionlayer",
	"microedition.global.format.abstractionlayer",
	"microedition.global.resource.abstractionlayer",
	"microedition.global.root",
	"microedition.global.common",
	"microedition.global.collation",
	"microedition.global.collation._coltable.locales",
	"microedition.global.collation._coltable.maxcontr",
	"microedition.global.collation._coltableZH.locales",
	"microedition.global.collation._coltableZH.maxcontr",
	"microedition.global.collation._coltableJA.locales",
	"microedition.global.collation._coltableJA.maxcontr",
	"microedition.global.normalization",
	"microedition.global.normalization.maxdecomp",
	"system.i18n.encoding",
	"com.sun.midp.io.j2me.comm.buffersize",
	"system.i18n.lang",
	"system.jam_space",
	"VmDebuggerPort",
	"NONE",
	"AMS",
	"CORE",
	"LOWUI",
	"HIGHUI",
	"PROTOCOL",
	"RMS",
	"SECURITY",
	"SERVICES",
	"STORAGE",
	"PUSH",
	"MMAPI",
	"VSCL",
	"MIDPSTRING",
	"MALLOC",
	"CORE_STACK",
	"I18N",
	"HIGHUI_ITEM_LAYOUT",
	"HIGHUI_ITEM_REPAINT",
	"HIGHUI_FORM_LAYOUT",
	"HIGHUI_ITEM_PAINT",
	"TOOL",
	"JSR180",
	"EVENTS",
	"LC_MAX",
	"LOG_INFORMATION",
	"LOG_WARNING",
	"LOG_ERROR",
	"LOG_CRITICAL",
	"LOG_DISABLED",
	"REPORT_LEVEL",
	"INFO",
	"WARN",
	"ERRR",
	"CRIT",
	"NONE",
	"MAIN_MEMORY_CHUNK_SIZE",
	"JAVA_HEAP_SIZE",
	"MAX_ISOLATES",
	"VERT_SCROLLBAR_WIDTH",
	"SCROLLS_HORIZONTAL",
	"SCROLLS_VERTICAL",
	"POINTER_SUPPORTED",
	"MOTION_SUPPORTED",
	"REPEAT_SUPPORTED",
	"IS_DOUBLE_BUFFERED",
	"AMS_MEMORY_RESERVED_MVM",
	"AMS_MEMORY_LIMIT_MVM",
	"RMS_CACHE_LIMIT",
	"MONET_ENABLED",
	"NORMALWIDTH",
	"NORMALHEIGHT",
	"SUITE_MEMORY_LIMIT",
	"DISPLAY_IS_COLOR",
	"DISPLAY_NUM_COLOR",
	"ALPHA_LEVELS",
	NULL
};


static char* javacall_static_properties_internal_values[] = {
	"22200",
	"24680",
	"smsdatagramhost",
	"54321",
	"12345",
	"com.sun.midp.io.j2me.sms.DatagramImpl",
	"+5551212",
	"wmadatagramhost",
	"com.sun.midp.lcdui.DefaultEventHandler",
	"com.sun.midp.lcdui.DefaultInputMethodHandler",
	"5000",
	"2000",
	"900",
	"0",
	"com.sun.midp.jsr82.ProtocolPushImpl",
	"com.sun.midp.jsr82.ProtocolPushImpl",
	"com.sun.midp.jsr82.ProtocolPushImpl",
	"com.sun.midp.io.j2me.socket.ProtocolPushImpl",
	"com.sun.midp.io.j2me.datagram.ProtocolPushImpl",
	"gov.nist.core.ProtocolPushImpl",
	"gov.nist.core.ProtocolPushImpl",
	"com.sun.midp.wma.ProtocolPushImpl",
	"com.sun.midp.wma.ProtocolPushImpl",
	"com.sun.midp.io.j2me.mms.ProtocolPushImpl",
	"file:///C:/",
	"\r\n",
	"com.sun.kvem.midp.pim.PIMProxy",
	"com.sun.j2me.global.CollationAbstractionLayerImpl",
	"com.sun.j2me.global.FormatAbstractionLayerImpl",
	"com.sun.j2me.global.ResourceAbstractionLayerImpl",
	"global/",
	"common",
	"_coltable, _coltableZH, _coltableJA",
	""" = 0; en, en-US, he, he-IL = 3; sk, sk-SK = 4; cs, cs-CZ = 5; es, es-ES = 6",
	"3",
	"zh, zh-CN = 1",
	"3",
	"ja, ja-JP = 2",
	"4",
	"_nrmtable",
	"4",
	"ISO8859_1",
	"256",
	"en",
	"1000000",
	"2808",
	"4",
	"1",
	"1",
	"3",
	"3",
	"2",
	"2",
	"2",
	"2",
	"2",
	"2",
	"2",
	"4",
	"2",
	"2",
	"2",
	"1",
	"3",
	"3",
	"3",
	"3",
	"2",
	"3",
	"1",
	"3",
	"0",
	"1",
	"2",
	"3",
	"4",
	"2",
	"0",
	"1",
	"2",
	"3",
	"4",
	"8388608",
	"4194304",
	"4",
	"16",
	"true",
	"true",
	"true",
	"true",
	"true",
	"true",
	"1024",
	"-1",
	"3072",
	"false",
	"240",
	"320",
	"-1",
	"true",
	"65536",
	"256",
	NULL
};

char** javacall_static_properties_keys[] = {
	javacall_static_properties_application_keys,
	javacall_static_properties_internal_keys,
	NULL
};

char** javacall_static_properties_values[] = {
	javacall_static_properties_application_values,
	javacall_static_properties_internal_values,
	NULL
};
