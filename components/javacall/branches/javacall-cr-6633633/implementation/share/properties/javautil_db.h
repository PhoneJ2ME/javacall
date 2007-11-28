/*
 * $LastChangedDate: 2006-03-29 20:41:10 +0200 $  
 */
 
/* 
 * Copyright  1990-2006 Sun Microsystems, Inc. All rights reserved.
 * SUN PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

#ifndef _DB_H_
#define _DB_H_

/*---------------------------------------------------------------------------
   								Includes
 ---------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------
  							Types
 ---------------------------------------------------------------------------*/

typedef struct _string_db_ {
	int				n ;		/** Number of entries in string_db */
	int				size ;	/** Storage size */
	char 		**	val ;	/** List of string values */
	char 		**  key ;	/** List of string keys */
	unsigned	 *	hash ;	/** List of hash values for keys */
} string_db ;


/*---------------------------------------------------------------------------
  							Function prototypes
 ---------------------------------------------------------------------------*/

/**
 * Calculate the HASH value of the key
 * 
 * @param key the input key value
 * @return the HASH value of the provided key. the return value should 
 *          be at least 32bit size
 */
unsigned string_db_hash(char * key);

/**
 * Creates a new database object
 * 
 * @param size the size of the database (use 0 for default size)
 * @return new database object
 */
string_db * string_db_new(int size);

/**
 * Deletes a database object
 * 
 * @param d the database object created by calling string_db_new
 */
void string_db_del(string_db * d);

/**
 * Get the value of the provided key as string. Id key not found, return def
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to search in the database
 * @param def   if key not found in the database, return def
 * @return the value of the key (or def if key not found)
 */
char * string_db_getstr(string_db * d, char * key, char * def);


/**
 * Get the value of the provided key as char. Id key not found, return def
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to search in the database
 * @param def   if key not found in the database, return def
 * @return the value of the key (or def if key not found)
 */
char string_db_getchar(string_db * d, char * key, char def) ;

/**
 * Get the value of the provided key as int. Id key not found, return def
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to search in the database
 * @param def   if key not found in the database, return def
 * @return the value of the key (or def if key not found)
 */
int string_db_getint(string_db * d, char * key, int def);

/**
 * Get the value of the provided key as double. Id key not found, return def
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to search in the database
 * @param def   if key not found in the database, return def
 * @return the value of the key (or def if key not found)
 */
double string_db_getdouble(string_db * d, char * key, double def);

/**
 * Set new value for key as string. 
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to modify/add to the database
 * @param val   the value of the key to set
 * @return void
 */
void string_db_set(string_db * d, char * key, char * val);

/**
 * Delete a key from the database
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to delete
 * @return void
 */
void string_db_unset(string_db * d, char * key);


/**
 * Set new value for key as int. 
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to modify/add to the database
 * @param val   the value of the key to set
 * @return void
 */
void string_db_setint(string_db * d, char * key, int val);

/**
 * Set new value for key as double. 
 * 
 * @param d     database object allocated using string_db_new
 * @param key   the key to modify/add to the database
 * @param val   the value of the key to set
 * @return void
 */
void string_db_setdouble(string_db * d, char * key, double val);

/**
 * Dump the content of the database to an open file
 * 
 * @param d                database object allocated using string_db_new
 * @param unicodeFileName  output file name
 * @param fileNameLen      file name length
 * @return void
 */
void string_db_dump(string_db * d, unsigned short* unicodeFileName, int fileNameLen);

#endif
