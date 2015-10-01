














/** Define outside of namespace so the C++ is happy. */
struct _IO_FILE;
/** The opaque type of streams.  This is the definition used elsewhere. */
typedef _IO_FILE FILE;





/**
 * Integral type unchanged by default argument promotions that can<br>
 * hold any value corresponding to members of the extended character<br>
 * set, as well as at least one value that does not correspond to any<br>
 * member of the extended character set.
 */
typedef unsigned int wint_t;
/** Conversion state information. */
typedef struct __mbstate_t {
	int __count;
	__value_union __value;
	union  __value_union {
		wint_t __wch;
		char[4] __wchb;
	};
} __mbstate_t;
typedef struct _G_fpos_t {
	__off_t __pos;
	__mbstate_t __state;
} _G_fpos_t;
typedef struct _G_fpos64_t {
	__off64_t __pos;
	__mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t;
typedef int _G_int32_t;
typedef unsigned int _G_uint16_t;
typedef unsigned int _G_uint32_t;





namespace std {

}



/** These are "formatting flags" matching the iostream fmtflags enum values. */
struct _IO_jump_t;
struct _IO_FILE;
/** Handle lock. */
typedef void _IO_lock_t;
/** A streammarker remembers a position in a buffer. */
struct _IO_marker {
	_IO_marker* _next;
	_IO_FILE* _sbuf;
	int _pos;
};
/** This is the structure from the libstdc++ codecvt class. */
enum __codecvt_result {
	__codecvt_ok,
	__codecvt_partial,
	__codecvt_error,
	__codecvt_noconv
};
struct _IO_FILE {
	int _flags; /* High-order word is _IO_MAGIC; rest is flags. */
	char* _IO_read_ptr; /* Current read pointer */
	char* _IO_read_end; /* End of get area. */
	char* _IO_read_base; /* Start of putback+get area. */
	char* _IO_write_base; /* Start of put area. */
	char* _IO_write_ptr; /* Current put pointer. */
	char* _IO_write_end; /* End of put area. */
	char* _IO_buf_base; /* Start of reserve area. */
	char* _IO_buf_end; /* End of reserve area. */
	char* _IO_save_base; /* Pointer to start of non-current get area. */
	char* _IO_backup_base; /* Pointer to first valid character of backup area */
	char* _IO_save_end; /* Pointer to end of non-current get area. */
	_IO_marker* _markers;
	_IO_FILE* _chain;
	int _fileno;
	int _flags2;
	__off_t _old_offset; /* This used to be _offset but it's too small.  */
	unsigned short _cur_column;
	signed char _vtable_offset;
	char[1] _shortbuf;
	_IO_lock_t* _lock;
	__off64_t _offset;
	void* __pad1;
	void* __pad2;
	void* __pad3;
	void* __pad4;
	size_t __pad5;
	int _mode;
	char[15 * sizeof(int) - 4 * sizeof(void*) - sizeof(size_t)] _unused2;
};
struct _IO_FILE_plus;
extern _IO_FILE_plus _IO_2_1_stdin_;
extern _IO_FILE_plus _IO_2_1_stdout_;
extern _IO_FILE_plus _IO_2_1_stderr_;
/**
 * Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.<br>
 * Return number of bytes read.
 */
typedef __ssize_t __io_read_fn(void* __cookie, char* __buf, size_t __nbytes);
/**
 * Write N bytes pointed to by BUF to COOKIE.  Write all N bytes<br>
 * unless there is an error.  Return number of bytes written, or -1 if<br>
 * there is an error without writing anything.  If the file has been<br>
 * opened for append (__mode.__append set), then set the file pointer<br>
 * to the end of the file and then do the write; if not, just write at<br>
 * the current file pointer.
 */
typedef __ssize_t __io_write_fn(void* __cookie, __const char* __buf, size_t __n);
/**
 * Move COOKIE's file position to *POS bytes from the<br>
 * beginning of the file (if W is SEEK_SET),<br>
 * the current position (if W is SEEK_CUR),<br>
 * or the end of the file (if W is SEEK_END).<br>
 * Set *POS to the new file position.<br>
 * Returns zero if successful, nonzero if not.
 */
typedef int __io_seek_fn(void* __cookie, __off64_t* __pos, int __w);
/** Close COOKIE. */
typedef int __io_close_fn(void* __cookie);
/** Original signature : <code>int __underflow(_IO_FILE*)</code> */
extern int __underflow(_IO_FILE* _IO_FILEPtr1);
/** Original signature : <code>int __uflow(_IO_FILE*)</code> */
extern int __uflow(_IO_FILE* _IO_FILEPtr1);
/** Original signature : <code>int __overflow(_IO_FILE*, int)</code> */
extern int __overflow(_IO_FILE* _IO_FILEPtr1, int int1);
/** Original signature : <code>int _IO_getc(_IO_FILE*)</code> */
extern int _IO_getc(_IO_FILE* __fp);
/** Original signature : <code>int _IO_putc(int, _IO_FILE*)</code> */
extern int _IO_putc(int __c, _IO_FILE* __fp);
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
/** The type of the second argument to `fgetpos' and `fsetpos'. */
typedef _G_fpos_t fpos_t;
/** Standard streams. */
extern _IO_FILE* stdin; /* Standard input stream.  */
extern _IO_FILE* stdout; /* Standard output stream.  */
extern _IO_FILE* stderr; /* Standard error output stream.  */




extern ""C"" {
/**
	 * use those to be sure nothing nasty will happen if<br>
	 * your library and includes mismatch<br>
	 * Original signature : <code>void xmlCheckVersion(int)</code>
	 */
	void xmlCheckVersion(int version);
}



extern ""C"" {
/**
	 * xmlChar:<br>
	 * * This is a basic byte in an UTF-8 encoded string.<br>
	 * It's unsigned allowing to pinpoint case where char * are assigned<br>
	 * to xmlChar * (possibly making serialization back impossible).
	 */
	typedef unsigned char xmlChar;
	/**
	 * xmlChar handling<br>
	 * Original signature : <code>xmlChar* xmlStrdup(const xmlChar*)</code>
	 */
	xmlChar* xmlStrdup(const xmlChar* cur);
	/** Original signature : <code>xmlChar* xmlStrndup(const xmlChar*, int)</code> */
	xmlChar* xmlStrndup(const xmlChar* cur, int len);
	/** Original signature : <code>xmlChar* xmlCharStrndup(const char*, int)</code> */
	xmlChar* xmlCharStrndup(const char* cur, int len);
	/** Original signature : <code>xmlChar* xmlCharStrdup(const char*)</code> */
	xmlChar* xmlCharStrdup(const char* cur);
	/** Original signature : <code>xmlChar* xmlStrsub(const xmlChar*, int, int)</code> */
	xmlChar* xmlStrsub(const xmlChar* str, int start, int len);
	/** Original signature : <code>xmlChar* xmlStrchr(const xmlChar*, xmlChar)</code> */
	const xmlChar* xmlStrchr(const xmlChar* str, xmlChar val);
	/** Original signature : <code>xmlChar* xmlStrstr(const xmlChar*, const xmlChar*)</code> */
	const xmlChar* xmlStrstr(const xmlChar* str, const xmlChar* val);
	/** Original signature : <code>xmlChar* xmlStrcasestr(const xmlChar*, const xmlChar*)</code> */
	const xmlChar* xmlStrcasestr(const xmlChar* str, const xmlChar* val);
	/** Original signature : <code>int xmlStrcmp(const xmlChar*, const xmlChar*)</code> */
	int xmlStrcmp(const xmlChar* str1, const xmlChar* str2);
	/** Original signature : <code>int xmlStrncmp(const xmlChar*, const xmlChar*, int)</code> */
	int xmlStrncmp(const xmlChar* str1, const xmlChar* str2, int len);
	/** Original signature : <code>int xmlStrcasecmp(const xmlChar*, const xmlChar*)</code> */
	int xmlStrcasecmp(const xmlChar* str1, const xmlChar* str2);
	/** Original signature : <code>int xmlStrncasecmp(const xmlChar*, const xmlChar*, int)</code> */
	int xmlStrncasecmp(const xmlChar* str1, const xmlChar* str2, int len);
	/** Original signature : <code>int xmlStrEqual(const xmlChar*, const xmlChar*)</code> */
	int xmlStrEqual(const xmlChar* str1, const xmlChar* str2);
	/** Original signature : <code>int xmlStrQEqual(const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	int xmlStrQEqual(const xmlChar* pref, const xmlChar* name, const xmlChar* str);
	/** Original signature : <code>int xmlStrlen(const xmlChar*)</code> */
	int xmlStrlen(const xmlChar* str);
	/** Original signature : <code>xmlChar* xmlStrcat(xmlChar*, const xmlChar*)</code> */
	xmlChar* xmlStrcat(xmlChar* cur, const xmlChar* add);
	/** Original signature : <code>xmlChar* xmlStrncat(xmlChar*, const xmlChar*, int)</code> */
	xmlChar* xmlStrncat(xmlChar* cur, const xmlChar* add, int len);
	/** Original signature : <code>xmlChar* xmlStrncatNew(const xmlChar*, const xmlChar*, int)</code> */
	xmlChar* xmlStrncatNew(const xmlChar* str1, const xmlChar* str2, int len);
	/** Original signature : <code>int xmlStrPrintf(xmlChar*, int, const xmlChar*, null)</code> */
	int xmlStrPrintf(xmlChar* buf, int len, const xmlChar* msg, ...);
	/** Original signature : <code>int xmlStrVPrintf(xmlChar*, int, const xmlChar*, va_list)</code> */
	int xmlStrVPrintf(xmlChar* buf, int len, const xmlChar* msg, va_list ap);
	/** Original signature : <code>int xmlGetUTF8Char(const unsigned char*, int*)</code> */
	int xmlGetUTF8Char(const unsigned char* utf, int* len);
	/** Original signature : <code>int xmlCheckUTF8(const unsigned char*)</code> */
	int xmlCheckUTF8(const unsigned char* utf);
	/** Original signature : <code>int xmlUTF8Strsize(const xmlChar*, int)</code> */
	int xmlUTF8Strsize(const xmlChar* utf, int len);
	/** Original signature : <code>xmlChar* xmlUTF8Strndup(const xmlChar*, int)</code> */
	xmlChar* xmlUTF8Strndup(const xmlChar* utf, int len);
	/** Original signature : <code>xmlChar* xmlUTF8Strpos(const xmlChar*, int)</code> */
	const xmlChar* xmlUTF8Strpos(const xmlChar* utf, int pos);
	/** Original signature : <code>int xmlUTF8Strloc(const xmlChar*, const xmlChar*)</code> */
	int xmlUTF8Strloc(const xmlChar* utf, const xmlChar* utfchar);
	/** Original signature : <code>xmlChar* xmlUTF8Strsub(const xmlChar*, int, int)</code> */
	xmlChar* xmlUTF8Strsub(const xmlChar* utf, int start, int len);
	/** Original signature : <code>int xmlUTF8Strlen(const xmlChar*)</code> */
	int xmlUTF8Strlen(const xmlChar* utf);
	/** Original signature : <code>int xmlUTF8Size(const xmlChar*)</code> */
	int xmlUTF8Size(const xmlChar* utf);
	/** Original signature : <code>int xmlUTF8Charcmp(const xmlChar*, const xmlChar*)</code> */
	int xmlUTF8Charcmp(const xmlChar* utf1, const xmlChar* utf2);
}
extern ""C"" {
/** xmlIO.h */
	typedef _xmlParserInputBuffer xmlParserInputBuffer;
	typedef xmlParserInputBuffer* xmlParserInputBufferPtr;
	typedef _xmlOutputBuffer xmlOutputBuffer;
	typedef xmlOutputBuffer* xmlOutputBufferPtr;
	/** parser.h */
	typedef _xmlParserInput xmlParserInput;
	typedef xmlParserInput* xmlParserInputPtr;
	typedef _xmlParserCtxt xmlParserCtxt;
	typedef xmlParserCtxt* xmlParserCtxtPtr;
	typedef _xmlSAXLocator xmlSAXLocator;
	typedef xmlSAXLocator* xmlSAXLocatorPtr;
	typedef _xmlSAXHandler xmlSAXHandler;
	typedef xmlSAXHandler* xmlSAXHandlerPtr;
	/** entities.h */
	typedef _xmlEntity xmlEntity;
	typedef xmlEntity* xmlEntityPtr;
	/**
	 * xmlBufferAllocationScheme:<br>
	 * * A buffer allocation scheme can be defined to either match exactly the<br>
	 * need or double it's allocated size each time it is found too small.
	 */
	typedef enum xmlBufferAllocationScheme {
		XML_BUFFER_ALLOC_DOUBLEIT /* double each time one need to grow */,
		XML_BUFFER_ALLOC_EXACT /* grow only to the minimal size */,
		XML_BUFFER_ALLOC_IMMUTABLE /* immutable buffer */,
		XML_BUFFER_ALLOC_IO /* special allocation scheme used for I/O */
	} xmlBufferAllocationScheme;
	/**
	 * xmlBuffer:<br>
	 * * A buffer structure.
	 */
	typedef _xmlBuffer xmlBuffer;
	typedef xmlBuffer* xmlBufferPtr;
	struct _xmlBuffer {
		xmlChar* content; /* The buffer content UTF8 */
		unsigned int use; /* The buffer size used */
		unsigned int size; /* The buffer size */
		xmlBufferAllocationScheme alloc; /* The realloc method */
		xmlChar* contentIO; /* in IO mode we may have a different base */
	};
	/**
	 * The different element types carried by an XML tree.<br>
	 * * NOTE: This is synchronized with DOM Level1 values<br>
	 *       See http://www.w3.org/TR/REC-DOM-Level-1/<br>
	 * * Actually this had diverged a bit, and now XML_DOCUMENT_TYPE_NODE should<br>
	 * be deprecated to use an XML_DTD_NODE.
	 */
	typedef enum xmlElementType {
		XML_ELEMENT_NODE = 1,
		XML_ATTRIBUTE_NODE = 2,
		XML_TEXT_NODE = 3,
		XML_CDATA_SECTION_NODE = 4,
		XML_ENTITY_REF_NODE = 5,
		XML_ENTITY_NODE = 6,
		XML_PI_NODE = 7,
		XML_COMMENT_NODE = 8,
		XML_DOCUMENT_NODE = 9,
		XML_DOCUMENT_TYPE_NODE = 10,
		XML_DOCUMENT_FRAG_NODE = 11,
		XML_NOTATION_NODE = 12,
		XML_HTML_DOCUMENT_NODE = 13,
		XML_DTD_NODE = 14,
		XML_ELEMENT_DECL = 15,
		XML_ATTRIBUTE_DECL = 16,
		XML_ENTITY_DECL = 17,
		XML_NAMESPACE_DECL = 18,
		XML_XINCLUDE_START = 19,
		XML_XINCLUDE_END = 20,
		XML_DOCB_DOCUMENT_NODE = 21
	} xmlElementType;
	/**
	 * xmlNotation:<br>
	 * * A DTD Notation definition.
	 */
	typedef _xmlNotation xmlNotation;
	typedef xmlNotation* xmlNotationPtr;
	struct _xmlNotation {
		const xmlChar* name; /* Notation name */
		const xmlChar* PublicID; /* Public identifier, if any */
		const xmlChar* SystemID; /* System identifier, if any */
	};
	/**
	 * xmlAttributeType:<br>
	 * * A DTD Attribute type definition.
	 */
	typedef enum xmlAttributeType {
		XML_ATTRIBUTE_CDATA = 1,
		XML_ATTRIBUTE_ID,
		XML_ATTRIBUTE_IDREF,
		XML_ATTRIBUTE_IDREFS,
		XML_ATTRIBUTE_ENTITY,
		XML_ATTRIBUTE_ENTITIES,
		XML_ATTRIBUTE_NMTOKEN,
		XML_ATTRIBUTE_NMTOKENS,
		XML_ATTRIBUTE_ENUMERATION,
		XML_ATTRIBUTE_NOTATION
	} xmlAttributeType;
	/**
	 * xmlAttributeDefault:<br>
	 * * A DTD Attribute default definition.
	 */
	typedef enum xmlAttributeDefault {
		XML_ATTRIBUTE_NONE = 1,
		XML_ATTRIBUTE_REQUIRED,
		XML_ATTRIBUTE_IMPLIED,
		XML_ATTRIBUTE_FIXED
	} xmlAttributeDefault;
	/**
	 * xmlEnumeration:<br>
	 * * List structure used when there is an enumeration in DTDs.
	 */
	typedef _xmlEnumeration xmlEnumeration;
	typedef xmlEnumeration* xmlEnumerationPtr;
	struct _xmlEnumeration {
		_xmlEnumeration* next; /* next one */
		const xmlChar* name; /* Enumeration name */
	};
	/**
	 * xmlAttribute:<br>
	 * * An Attribute declaration in a DTD.
	 */
	typedef _xmlAttribute xmlAttribute;
	typedef xmlAttribute* xmlAttributePtr;
	struct _xmlAttribute {
		void* _private; /* application data */
		xmlElementType type; /* XML_ATTRIBUTE_DECL, must be second ! */
		const xmlChar* name; /* Attribute name */
		_xmlNode* children; /* NULL */
		_xmlNode* last; /* NULL */
		_xmlDtd* parent; /* -> DTD */
		_xmlNode* next; /* next sibling link  */
		_xmlNode* prev; /* previous sibling link  */
		_xmlDoc* doc; /* the containing document */
		_xmlAttribute* nexth; /* next in hash table */
		xmlAttributeType atype; /* The attribute type */
		xmlAttributeDefault def; /* the default */
		const xmlChar* defaultValue; /* or the default value */
		xmlEnumerationPtr tree; /* or the enumeration tree if any */
		const xmlChar* prefix; /* the namespace prefix if any */
		const xmlChar* elem; /* Element holding the attribute */
	};
	/**
	 * xmlElementContentType:<br>
	 * * Possible definitions of element content types.
	 */
	typedef enum xmlElementContentType {
		XML_ELEMENT_CONTENT_PCDATA = 1,
		XML_ELEMENT_CONTENT_ELEMENT,
		XML_ELEMENT_CONTENT_SEQ,
		XML_ELEMENT_CONTENT_OR
	} xmlElementContentType;
	/**
	 * xmlElementContentOccur:<br>
	 * * Possible definitions of element content occurrences.
	 */
	typedef enum xmlElementContentOccur {
		XML_ELEMENT_CONTENT_ONCE = 1,
		XML_ELEMENT_CONTENT_OPT,
		XML_ELEMENT_CONTENT_MULT,
		XML_ELEMENT_CONTENT_PLUS
	} xmlElementContentOccur;
	/**
	 * xmlElementContent:<br>
	 * * An XML Element content as stored after parsing an element definition<br>
	 * in a DTD.
	 */
	typedef _xmlElementContent xmlElementContent;
	typedef xmlElementContent* xmlElementContentPtr;
	struct _xmlElementContent {
		xmlElementContentType type; /* PCDATA, ELEMENT, SEQ or OR */
		xmlElementContentOccur ocur; /* ONCE, OPT, MULT or PLUS */
		const xmlChar* name; /* Element name */
		_xmlElementContent* c1; /* first child */
		_xmlElementContent* c2; /* second child */
		_xmlElementContent* parent; /* parent */
		const xmlChar* prefix; /* Namespace prefix */
	};
	/**
	 * xmlElementTypeVal:<br>
	 * * The different possibilities for an element content type.
	 */
	typedef enum xmlElementTypeVal {
		XML_ELEMENT_TYPE_UNDEFINED = 0,
		XML_ELEMENT_TYPE_EMPTY = 1,
		XML_ELEMENT_TYPE_ANY,
		XML_ELEMENT_TYPE_MIXED,
		XML_ELEMENT_TYPE_ELEMENT
	} xmlElementTypeVal;
}

extern ""C"" {
/**
	 * xmlRegexpPtr:<br>
	 * * A libxml regular expression, they can actually be far more complex<br>
	 * thank the POSIX regex expressions.
	 */
	typedef _xmlRegexp xmlRegexp;
	typedef xmlRegexp* xmlRegexpPtr;
	/**
	 * xmlRegExecCtxtPtr:<br>
	 * * A libxml progressive regular expression evaluation context
	 */
	typedef _xmlRegExecCtxt xmlRegExecCtxt;
	typedef xmlRegExecCtxt* xmlRegExecCtxtPtr;
}



extern ""C"" {
/** The dictionnary. */
	typedef _xmlDict xmlDict;
	typedef xmlDict* xmlDictPtr;
	/**
	 * Constructor and destructor.<br>
	 * Original signature : <code>xmlDictPtr xmlDictCreate()</code>
	 */
	xmlDictPtr xmlDictCreate();
	/** Original signature : <code>xmlDictPtr xmlDictCreateSub(xmlDictPtr)</code> */
	xmlDictPtr xmlDictCreateSub(xmlDictPtr sub);
	/** Original signature : <code>int xmlDictReference(xmlDictPtr)</code> */
	int xmlDictReference(xmlDictPtr dict);
	/** Original signature : <code>void xmlDictFree(xmlDictPtr)</code> */
	void xmlDictFree(xmlDictPtr dict);
	/**
	 * Lookup of entry in the dictionnary.<br>
	 * Original signature : <code>xmlChar* xmlDictLookup(xmlDictPtr, const xmlChar*, int)</code>
	 */
	const xmlChar* xmlDictLookup(xmlDictPtr dict, const xmlChar* name, int len);
	/** Original signature : <code>xmlChar* xmlDictExists(xmlDictPtr, const xmlChar*, int)</code> */
	const xmlChar* xmlDictExists(xmlDictPtr dict, const xmlChar* name, int len);
	/** Original signature : <code>xmlChar* xmlDictQLookup(xmlDictPtr, const xmlChar*, const xmlChar*)</code> */
	const xmlChar* xmlDictQLookup(xmlDictPtr dict, const xmlChar* prefix, const xmlChar* name);
	/** Original signature : <code>int xmlDictOwns(xmlDictPtr, const xmlChar*)</code> */
	int xmlDictOwns(xmlDictPtr dict, const xmlChar* str);
	/** Original signature : <code>int xmlDictSize(xmlDictPtr)</code> */
	int xmlDictSize(xmlDictPtr dict);
	/**
	 * Cleanup function<br>
	 * Original signature : <code>void xmlDictCleanup()</code>
	 */
	void xmlDictCleanup();
}
extern ""C"" {
/**
	 * The POSIX like API<br>
	 * Original signature : <code>xmlRegexpPtr xmlRegexpCompile(const xmlChar*)</code>
	 */
	xmlRegexpPtr xmlRegexpCompile(const xmlChar* regexp);
	/** Original signature : <code>void xmlRegFreeRegexp(xmlRegexpPtr)</code> */
	void xmlRegFreeRegexp(xmlRegexpPtr regexp);
	/** Original signature : <code>int xmlRegexpExec(xmlRegexpPtr, const xmlChar*)</code> */
	int xmlRegexpExec(xmlRegexpPtr comp, const xmlChar* value);
	/** Original signature : <code>void xmlRegexpPrint(FILE*, xmlRegexpPtr)</code> */
	void xmlRegexpPrint(FILE* output, xmlRegexpPtr regexp);
	/** Original signature : <code>int xmlRegexpIsDeterminist(xmlRegexpPtr)</code> */
	int xmlRegexpIsDeterminist(xmlRegexpPtr comp);
	/**
	 * xmlRegExecCallbacks:<br>
	 * @exec: the regular expression context<br>
	 * @token: the current token string<br>
	 * @transdata: transition data<br>
	 * @inputdata: input data<br>
	 * * Callback function when doing a transition in the automata
	 */
	typedef void (*xmlRegExecCallbacks)(xmlRegExecCtxtPtr exec, const xmlChar* token, void* transdata, void* inputdata) xmlRegExecCallbacks;
	/**
	 * The progressive API<br>
	 * Original signature : <code>xmlRegExecCtxtPtr xmlRegNewExecCtxt(xmlRegexpPtr, xmlRegExecCallbacks, void*)</code>
	 */
	xmlRegExecCtxtPtr xmlRegNewExecCtxt(xmlRegexpPtr comp, xmlRegExecCallbacks callback, void* data);
	/** Original signature : <code>void xmlRegFreeExecCtxt(xmlRegExecCtxtPtr)</code> */
	void xmlRegFreeExecCtxt(xmlRegExecCtxtPtr exec);
	/** Original signature : <code>int xmlRegExecPushString(xmlRegExecCtxtPtr, const xmlChar*, void*)</code> */
	int xmlRegExecPushString(xmlRegExecCtxtPtr exec, const xmlChar* value, void* data);
	/** Original signature : <code>int xmlRegExecPushString2(xmlRegExecCtxtPtr, const xmlChar*, const xmlChar*, void*)</code> */
	int xmlRegExecPushString2(xmlRegExecCtxtPtr exec, const xmlChar* value, const xmlChar* value2, void* data);
	/** Original signature : <code>int xmlRegExecNextValues(xmlRegExecCtxtPtr, int*, int*, xmlChar**, int*)</code> */
	int xmlRegExecNextValues(xmlRegExecCtxtPtr exec, int* nbval, int* nbneg, xmlChar** values, int* terminal);
	/** Original signature : <code>int xmlRegExecErrInfo(xmlRegExecCtxtPtr, const xmlChar**, int*, int*, xmlChar**, int*)</code> */
	int xmlRegExecErrInfo(xmlRegExecCtxtPtr exec, const xmlChar** string, int* nbval, int* nbneg, xmlChar** values, int* terminal);
	/** expressions are used within a context */
	typedef _xmlExpCtxt xmlExpCtxt;
	typedef xmlExpCtxt* xmlExpCtxtPtr;
	/** Original signature : <code>void xmlExpFreeCtxt(xmlExpCtxtPtr)</code> */
	void xmlExpFreeCtxt(xmlExpCtxtPtr ctxt);
	/** Original signature : <code>xmlExpCtxtPtr xmlExpNewCtxt(int, xmlDictPtr)</code> */
	xmlExpCtxtPtr xmlExpNewCtxt(int maxNodes, xmlDictPtr dict);
	/** Original signature : <code>int xmlExpCtxtNbNodes(xmlExpCtxtPtr)</code> */
	int xmlExpCtxtNbNodes(xmlExpCtxtPtr ctxt);
	/** Original signature : <code>int xmlExpCtxtNbCons(xmlExpCtxtPtr)</code> */
	int xmlExpCtxtNbCons(xmlExpCtxtPtr ctxt);
	/** Expressions are trees but the tree is opaque */
	typedef _xmlExpNode xmlExpNode;
	typedef xmlExpNode* xmlExpNodePtr;
	typedef enum xmlExpNodeType {
		XML_EXP_EMPTY = 0,
		XML_EXP_FORBID = 1,
		XML_EXP_ATOM = 2,
		XML_EXP_SEQ = 3,
		XML_EXP_OR = 4,
		XML_EXP_COUNT = 5
	} xmlExpNodeType;
	/**
	 * 2 core expressions shared by all for the empty language set<br>
	 * and for the set with just the empty token
	 */
	extern xmlExpNodePtr forbiddenExp;
	extern xmlExpNodePtr emptyExp;
	/**
	 * Expressions are reference counted internally<br>
	 * Original signature : <code>void xmlExpFree(xmlExpCtxtPtr, xmlExpNodePtr)</code>
	 */
	void xmlExpFree(xmlExpCtxtPtr ctxt, xmlExpNodePtr expr);
	/** Original signature : <code>void xmlExpRef(xmlExpNodePtr)</code> */
	void xmlExpRef(xmlExpNodePtr expr);
	/**
	 * constructors can be either manual or from a string<br>
	 * Original signature : <code>xmlExpNodePtr xmlExpParse(xmlExpCtxtPtr, const char*)</code>
	 */
	xmlExpNodePtr xmlExpParse(xmlExpCtxtPtr ctxt, const char* expr);
	/** Original signature : <code>xmlExpNodePtr xmlExpNewAtom(xmlExpCtxtPtr, const xmlChar*, int)</code> */
	xmlExpNodePtr xmlExpNewAtom(xmlExpCtxtPtr ctxt, const xmlChar* name, int len);
	/** Original signature : <code>xmlExpNodePtr xmlExpNewOr(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr)</code> */
	xmlExpNodePtr xmlExpNewOr(xmlExpCtxtPtr ctxt, xmlExpNodePtr left, xmlExpNodePtr right);
	/** Original signature : <code>xmlExpNodePtr xmlExpNewSeq(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr)</code> */
	xmlExpNodePtr xmlExpNewSeq(xmlExpCtxtPtr ctxt, xmlExpNodePtr left, xmlExpNodePtr right);
	/** Original signature : <code>xmlExpNodePtr xmlExpNewRange(xmlExpCtxtPtr, xmlExpNodePtr, int, int)</code> */
	xmlExpNodePtr xmlExpNewRange(xmlExpCtxtPtr ctxt, xmlExpNodePtr subset, int min, int max);
	/**
	 * The really interesting APIs<br>
	 * Original signature : <code>int xmlExpIsNillable(xmlExpNodePtr)</code>
	 */
	int xmlExpIsNillable(xmlExpNodePtr expr);
	/** Original signature : <code>int xmlExpMaxToken(xmlExpNodePtr)</code> */
	int xmlExpMaxToken(xmlExpNodePtr expr);
	/** Original signature : <code>int xmlExpGetLanguage(xmlExpCtxtPtr, xmlExpNodePtr, const xmlChar**, int)</code> */
	int xmlExpGetLanguage(xmlExpCtxtPtr ctxt, xmlExpNodePtr expr, const xmlChar** langList, int len);
	/** Original signature : <code>int xmlExpGetStart(xmlExpCtxtPtr, xmlExpNodePtr, const xmlChar**, int)</code> */
	int xmlExpGetStart(xmlExpCtxtPtr ctxt, xmlExpNodePtr expr, const xmlChar** tokList, int len);
	/** Original signature : <code>xmlExpNodePtr xmlExpStringDerive(xmlExpCtxtPtr, xmlExpNodePtr, const xmlChar*, int)</code> */
	xmlExpNodePtr xmlExpStringDerive(xmlExpCtxtPtr ctxt, xmlExpNodePtr expr, const xmlChar* str, int len);
	/** Original signature : <code>xmlExpNodePtr xmlExpExpDerive(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr)</code> */
	xmlExpNodePtr xmlExpExpDerive(xmlExpCtxtPtr ctxt, xmlExpNodePtr expr, xmlExpNodePtr sub);
	/** Original signature : <code>int xmlExpSubsume(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr)</code> */
	int xmlExpSubsume(xmlExpCtxtPtr ctxt, xmlExpNodePtr expr, xmlExpNodePtr sub);
	/** Original signature : <code>void xmlExpDump(xmlBufferPtr, xmlExpNodePtr)</code> */
	void xmlExpDump(xmlBufferPtr buf, xmlExpNodePtr expr);
}
extern ""C"" {
/**
	 * xmlElement:<br>
	 * * An XML Element declaration from a DTD.
	 */
	typedef _xmlElement xmlElement;
	typedef xmlElement* xmlElementPtr;
	struct _xmlElement {
		void* _private; /* application data */
		xmlElementType type; /* XML_ELEMENT_DECL, must be second ! */
		const xmlChar* name; /* Element name */
		_xmlNode* children; /* NULL */
		_xmlNode* last; /* NULL */
		_xmlDtd* parent; /* -> DTD */
		_xmlNode* next; /* next sibling link  */
		_xmlNode* prev; /* previous sibling link  */
		_xmlDoc* doc; /* the containing document */
		xmlElementTypeVal etype; /* The type */
		xmlElementContentPtr content; /* the allowed element content */
		xmlAttributePtr attributes; /* List of the declared attributes */
		const xmlChar* prefix; /* the namespace prefix if any */
		xmlRegexpPtr contModel; /* the validating regexp */
	};
	/**
	 * XML_LOCAL_NAMESPACE:<br>
	 * * A namespace declaration node.
	 */
	typedef xmlElementType xmlNsType;
	/**
	 * xmlNs:<br>
	 * * An XML namespace.<br>
	 * Note that prefix == NULL is valid, it defines the default namespace<br>
	 * within the subtree (until overridden).<br>
	 * * xmlNsType is unified with xmlElementType.
	 */
	typedef _xmlNs xmlNs;
	typedef xmlNs* xmlNsPtr;
	struct _xmlNs {
		_xmlNs* next; /* next Ns link for this node  */
		xmlNsType type; /* global or local */
		const xmlChar* href; /* URL for the namespace */
		const xmlChar* prefix; /* prefix for the namespace */
		void* _private; /* application data */
		_xmlDoc* context; /* normally an xmlDoc */
	};
	/**
	 * xmlDtd:<br>
	 * * An XML DTD, as defined by <!DOCTYPE ... There is actually one for<br>
	 * the internal subset and for the external subset.
	 */
	typedef _xmlDtd xmlDtd;
	typedef xmlDtd* xmlDtdPtr;
	struct _xmlDtd {
		void* _private; /* application data */
		xmlElementType type; /* XML_DTD_NODE, must be second ! */
		const xmlChar* name; /* Name of the DTD */
		_xmlNode* children; /* the value of the property link */
		_xmlNode* last; /* last child link */
		_xmlDoc* parent; /* child->parent link */
		_xmlNode* next; /* next sibling link  */
		_xmlNode* prev; /* previous sibling link  */
		_xmlDoc* doc; /* the containing document */
		void* notations; /* Hash table for notations if any */
		void* elements; /* Hash table for elements if any */
		void* attributes; /* Hash table for attributes if any */
		void* entities; /* Hash table for entities if any */
		const xmlChar* ExternalID; /* External identifier for PUBLIC DTD */
		const xmlChar* SystemID; /* URI for a SYSTEM or PUBLIC DTD */
		void* pentities; /* Hash table for param entities if any */
	};
	/**
	 * xmlAttr:<br>
	 * * An attribute on an XML node.
	 */
	typedef _xmlAttr xmlAttr;
	typedef xmlAttr* xmlAttrPtr;
	struct _xmlAttr {
		void* _private; /* application data */
		xmlElementType type; /* XML_ATTRIBUTE_NODE, must be second ! */
		const xmlChar* name; /* the name of the property */
		_xmlNode* children; /* the value of the property */
		_xmlNode* last; /* NULL */
		_xmlNode* parent; /* child->parent link */
		_xmlAttr* next; /* next sibling link  */
		_xmlAttr* prev; /* previous sibling link  */
		_xmlDoc* doc; /* the containing document */
		xmlNs* ns; /* pointer to the associated namespace */
		xmlAttributeType atype; /* the attribute type if validating */
		void* psvi; /* for type/PSVI informations */
	};
	/**
	 * xmlID:<br>
	 * * An XML ID instance.
	 */
	typedef _xmlID xmlID;
	typedef xmlID* xmlIDPtr;
	struct _xmlID {
		_xmlID* next; /* next ID */
		const xmlChar* value; /* The ID name */
		xmlAttrPtr attr; /* The attribute holding it */
		const xmlChar* name; /* The attribute if attr is not available */
		int lineno; /* The line number if attr is not available */
		_xmlDoc* doc; /* The document holding the ID */
	};
	/**
	 * xmlRef:<br>
	 * * An XML IDREF instance.
	 */
	typedef _xmlRef xmlRef;
	typedef xmlRef* xmlRefPtr;
	struct _xmlRef {
		_xmlRef* next; /* next Ref */
		const xmlChar* value; /* The Ref name */
		xmlAttrPtr attr; /* The attribute holding it */
		const xmlChar* name; /* The attribute if attr is not available */
		int lineno; /* The line number if attr is not available */
	};
	/**
	 * xmlNode:<br>
	 * * A node in an XML tree.
	 */
	typedef _xmlNode xmlNode;
	typedef xmlNode* xmlNodePtr;
	struct _xmlNode {
		void* _private; /* application data */
		xmlElementType type; /* type number, must be second ! */
		const xmlChar* name; /* the name of the node, or the entity */
		_xmlNode* children; /* parent->childs link */
		_xmlNode* last; /* last child link */
		_xmlNode* parent; /* child->parent link */
		_xmlNode* next; /* next sibling link  */
		_xmlNode* prev; /* previous sibling link  */
		_xmlDoc* doc; /* the containing document */
		xmlNs* ns; /* pointer to the associated namespace */
		xmlChar* content; /* the content */
		_xmlAttr* properties; /* properties list */
		xmlNs* nsDef; /* namespace definitions on this node */
		void* psvi; /* for type/PSVI informations */
		unsigned short line; /* line number */
		unsigned short extra; /* extra data for XPath/XSLT */
	};
	/**
	 * xmlDocProperty<br>
	 * * Set of properties of the document as found by the parser<br>
	 * Some of them are linked to similary named xmlParserOption
	 */
	typedef enum xmlDocProperties {
		XML_DOC_WELLFORMED = 1 << 0 /* document is XML well formed */,
		XML_DOC_NSVALID = 1 << 1 /* document is Namespace valid */,
		XML_DOC_OLD10 = 1 << 2 /* parsed with old XML-1.0 parser */,
		XML_DOC_DTDVALID = 1 << 3 /* DTD validation was successful */,
		XML_DOC_XINCLUDE = 1 << 4 /* XInclude substitution was done */,
		XML_DOC_USERBUILT = 1 << 5 /* Document was built using the API
                                           and not by parsing an instance */,
		XML_DOC_INTERNAL = 1 << 6 /* built for internal processing */,
		XML_DOC_HTML = 1 << 7 /* parsed or built HTML document */
	} xmlDocProperties;
	/**
	 * xmlDoc:<br>
	 * * An XML document.
	 */
	typedef _xmlDoc xmlDoc;
	typedef xmlDoc* xmlDocPtr;
	struct _xmlDoc {
		void* _private; /* application data */
		xmlElementType type; /* XML_DOCUMENT_NODE, must be second ! */
		char* name; /* name/filename/URI of the document */
		_xmlNode* children; /* the document tree */
		_xmlNode* last; /* last child link */
		_xmlNode* parent; /* child->parent link */
		_xmlNode* next; /* next sibling link  */
		_xmlNode* prev; /* previous sibling link  */
		_xmlDoc* doc; /* autoreference to itself */
		int compression; /* level of zlib compression */
		int standalone; /* standalone document (no external refs) 
				     1 if standalone="yes"
				     0 if standalone="no"
				    -1 if there is no XML declaration
				    -2 if there is an XML declaration, but no
					standalone attribute was specified */
		_xmlDtd* intSubset; /* the document internal subset */
		_xmlDtd* extSubset; /* the document external subset */
		_xmlNs* oldNs; /* Global namespace, the old way */
		const xmlChar* version; /* the XML version string */
		const xmlChar* encoding; /* external initial encoding, if any */
		void* ids; /* Hash table for ID attributes if any */
		void* refs; /* Hash table for IDREFs attributes if any */
		const xmlChar* URL; /* The URI for that document */
		int charset; /* encoding of the in-memory content
				   actually an xmlCharEncoding */
		_xmlDict* dict; /* dict used to allocate names or NULL */
		void* psvi; /* for type/PSVI informations */
		int parseFlags; /* set of xmlParserOption used to parse the
				   document */
		int properties; /* set of xmlDocProperties for this document
				   set at the end of parsing */
	};
	typedef _xmlDOMWrapCtxt xmlDOMWrapCtxt;
	typedef xmlDOMWrapCtxt* xmlDOMWrapCtxtPtr;
	/**
	 * xmlDOMWrapAcquireNsFunction:<br>
	 * @ctxt:  a DOM wrapper context<br>
	 * @node:  the context node (element or attribute) <br>
	 * @nsName:  the requested namespace name<br>
	 * @nsPrefix:  the requested namespace prefix <br>
	 * * A function called to acquire namespaces (xmlNs) from the wrapper.<br>
	 * * Returns an xmlNsPtr or NULL in case of an error.
	 */
	typedef xmlNsPtr (*xmlDOMWrapAcquireNsFunction)(xmlDOMWrapCtxtPtr ctxt, xmlNodePtr node, const xmlChar* nsName, const xmlChar* nsPrefix) xmlDOMWrapAcquireNsFunction;
	/**
	 * xmlDOMWrapCtxt:<br>
	 * Context for DOM wrapper-operations.
	 */
	struct _xmlDOMWrapCtxt {
		void* _private;
		int type;
		void* namespaceMap;
		xmlDOMWrapAcquireNsFunction getNsForNodeFunc;
	};
	/**
	 * Some helper functions<br>
	 * Original signature : <code>int xmlValidateNCName(const xmlChar*, int)</code>
	 */
	int xmlValidateNCName(const xmlChar* value, int space);
	/** Original signature : <code>int xmlValidateQName(const xmlChar*, int)</code> */
	int xmlValidateQName(const xmlChar* value, int space);
	/** Original signature : <code>int xmlValidateName(const xmlChar*, int)</code> */
	int xmlValidateName(const xmlChar* value, int space);
	/** Original signature : <code>int xmlValidateNMToken(const xmlChar*, int)</code> */
	int xmlValidateNMToken(const xmlChar* value, int space);
	/** Original signature : <code>xmlChar* xmlBuildQName(const xmlChar*, const xmlChar*, xmlChar*, int)</code> */
	xmlChar* xmlBuildQName(const xmlChar* ncname, const xmlChar* prefix, xmlChar* memory, int len);
	/** Original signature : <code>xmlChar* xmlSplitQName2(const xmlChar*, xmlChar**)</code> */
	xmlChar* xmlSplitQName2(const xmlChar* name, xmlChar** prefix);
	/** Original signature : <code>xmlChar* xmlSplitQName3(const xmlChar*, int*)</code> */
	const xmlChar* xmlSplitQName3(const xmlChar* name, int* len);
	/**
	 * Handling Buffers.<br>
	 * Original signature : <code>void xmlSetBufferAllocationScheme(xmlBufferAllocationScheme)</code>
	 */
	void xmlSetBufferAllocationScheme(xmlBufferAllocationScheme scheme);
	/** Original signature : <code>xmlBufferAllocationScheme xmlGetBufferAllocationScheme()</code> */
	xmlBufferAllocationScheme xmlGetBufferAllocationScheme();
	/** Original signature : <code>xmlBufferPtr xmlBufferCreate()</code> */
	xmlBufferPtr xmlBufferCreate();
	/** Original signature : <code>xmlBufferPtr xmlBufferCreateSize(size_t)</code> */
	xmlBufferPtr xmlBufferCreateSize(size_t size);
	/** Original signature : <code>xmlBufferPtr xmlBufferCreateStatic(void*, size_t)</code> */
	xmlBufferPtr xmlBufferCreateStatic(void* mem, size_t size);
	/** Original signature : <code>int xmlBufferResize(xmlBufferPtr, unsigned int)</code> */
	int xmlBufferResize(xmlBufferPtr buf, unsigned int size);
	/** Original signature : <code>void xmlBufferFree(xmlBufferPtr)</code> */
	void xmlBufferFree(xmlBufferPtr buf);
	/** Original signature : <code>int xmlBufferDump(FILE*, xmlBufferPtr)</code> */
	int xmlBufferDump(FILE* file, xmlBufferPtr buf);
	/** Original signature : <code>int xmlBufferAdd(xmlBufferPtr, const xmlChar*, int)</code> */
	int xmlBufferAdd(xmlBufferPtr buf, const xmlChar* str, int len);
	/** Original signature : <code>int xmlBufferAddHead(xmlBufferPtr, const xmlChar*, int)</code> */
	int xmlBufferAddHead(xmlBufferPtr buf, const xmlChar* str, int len);
	/** Original signature : <code>int xmlBufferCat(xmlBufferPtr, const xmlChar*)</code> */
	int xmlBufferCat(xmlBufferPtr buf, const xmlChar* str);
	/** Original signature : <code>int xmlBufferCCat(xmlBufferPtr, const char*)</code> */
	int xmlBufferCCat(xmlBufferPtr buf, const char* str);
	/** Original signature : <code>int xmlBufferShrink(xmlBufferPtr, unsigned int)</code> */
	int xmlBufferShrink(xmlBufferPtr buf, unsigned int len);
	/** Original signature : <code>int xmlBufferGrow(xmlBufferPtr, unsigned int)</code> */
	int xmlBufferGrow(xmlBufferPtr buf, unsigned int len);
	/** Original signature : <code>void xmlBufferEmpty(xmlBufferPtr)</code> */
	void xmlBufferEmpty(xmlBufferPtr buf);
	/** Original signature : <code>xmlChar* xmlBufferContent(const xmlBufferPtr)</code> */
	const xmlChar* xmlBufferContent(const xmlBufferPtr buf);
	/** Original signature : <code>void xmlBufferSetAllocationScheme(xmlBufferPtr, xmlBufferAllocationScheme)</code> */
	void xmlBufferSetAllocationScheme(xmlBufferPtr buf, xmlBufferAllocationScheme scheme);
	/** Original signature : <code>int xmlBufferLength(const xmlBufferPtr)</code> */
	int xmlBufferLength(const xmlBufferPtr buf);
	/**
	 * Creating/freeing new structures.<br>
	 * Original signature : <code>xmlDtdPtr xmlCreateIntSubset(xmlDocPtr, const xmlChar*, const xmlChar*, const xmlChar*)</code>
	 */
	xmlDtdPtr xmlCreateIntSubset(xmlDocPtr doc, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>xmlDtdPtr xmlNewDtd(xmlDocPtr, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	xmlDtdPtr xmlNewDtd(xmlDocPtr doc, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>xmlDtdPtr xmlGetIntSubset(xmlDocPtr)</code> */
	xmlDtdPtr xmlGetIntSubset(xmlDocPtr doc);
	/** Original signature : <code>void xmlFreeDtd(xmlDtdPtr)</code> */
	void xmlFreeDtd(xmlDtdPtr cur);
	/** Original signature : <code>xmlNsPtr xmlNewGlobalNs(xmlDocPtr, const xmlChar*, const xmlChar*)</code> */
	xmlNsPtr xmlNewGlobalNs(xmlDocPtr doc, const xmlChar* href, const xmlChar* prefix);
	/** Original signature : <code>xmlNsPtr xmlNewNs(xmlNodePtr, const xmlChar*, const xmlChar*)</code> */
	xmlNsPtr xmlNewNs(xmlNodePtr node, const xmlChar* href, const xmlChar* prefix);
	/** Original signature : <code>void xmlFreeNs(xmlNsPtr)</code> */
	void xmlFreeNs(xmlNsPtr cur);
	/** Original signature : <code>void xmlFreeNsList(xmlNsPtr)</code> */
	void xmlFreeNsList(xmlNsPtr cur);
	/** Original signature : <code>xmlDocPtr xmlNewDoc(const xmlChar*)</code> */
	xmlDocPtr xmlNewDoc(const xmlChar* version);
	/** Original signature : <code>void xmlFreeDoc(xmlDocPtr)</code> */
	void xmlFreeDoc(xmlDocPtr cur);
	/** Original signature : <code>xmlAttrPtr xmlNewDocProp(xmlDocPtr, const xmlChar*, const xmlChar*)</code> */
	xmlAttrPtr xmlNewDocProp(xmlDocPtr doc, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>xmlAttrPtr xmlNewProp(xmlNodePtr, const xmlChar*, const xmlChar*)</code> */
	xmlAttrPtr xmlNewProp(xmlNodePtr node, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>xmlAttrPtr xmlNewNsProp(xmlNodePtr, xmlNsPtr, const xmlChar*, const xmlChar*)</code> */
	xmlAttrPtr xmlNewNsProp(xmlNodePtr node, xmlNsPtr ns, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>xmlAttrPtr xmlNewNsPropEatName(xmlNodePtr, xmlNsPtr, xmlChar*, const xmlChar*)</code> */
	xmlAttrPtr xmlNewNsPropEatName(xmlNodePtr node, xmlNsPtr ns, xmlChar* name, const xmlChar* value);
	/** Original signature : <code>void xmlFreePropList(xmlAttrPtr)</code> */
	void xmlFreePropList(xmlAttrPtr cur);
	/** Original signature : <code>void xmlFreeProp(xmlAttrPtr)</code> */
	void xmlFreeProp(xmlAttrPtr cur);
	/** Original signature : <code>xmlAttrPtr xmlCopyProp(xmlNodePtr, xmlAttrPtr)</code> */
	xmlAttrPtr xmlCopyProp(xmlNodePtr target, xmlAttrPtr cur);
	/** Original signature : <code>xmlAttrPtr xmlCopyPropList(xmlNodePtr, xmlAttrPtr)</code> */
	xmlAttrPtr xmlCopyPropList(xmlNodePtr target, xmlAttrPtr cur);
	/** Original signature : <code>xmlDtdPtr xmlCopyDtd(xmlDtdPtr)</code> */
	xmlDtdPtr xmlCopyDtd(xmlDtdPtr dtd);
	/** Original signature : <code>xmlDocPtr xmlCopyDoc(xmlDocPtr, int)</code> */
	xmlDocPtr xmlCopyDoc(xmlDocPtr doc, int recursive);
	/**
	 * Creating new nodes.<br>
	 * Original signature : <code>xmlNodePtr xmlNewDocNode(xmlDocPtr, xmlNsPtr, const xmlChar*, const xmlChar*)</code>
	 */
	xmlNodePtr xmlNewDocNode(xmlDocPtr doc, xmlNsPtr ns, const xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewDocNodeEatName(xmlDocPtr, xmlNsPtr, xmlChar*, const xmlChar*)</code> */
	xmlNodePtr xmlNewDocNodeEatName(xmlDocPtr doc, xmlNsPtr ns, xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewNode(xmlNsPtr, const xmlChar*)</code> */
	xmlNodePtr xmlNewNode(xmlNsPtr ns, const xmlChar* name);
	/** Original signature : <code>xmlNodePtr xmlNewNodeEatName(xmlNsPtr, xmlChar*)</code> */
	xmlNodePtr xmlNewNodeEatName(xmlNsPtr ns, xmlChar* name);
	/** Original signature : <code>xmlNodePtr xmlNewChild(xmlNodePtr, xmlNsPtr, const xmlChar*, const xmlChar*)</code> */
	xmlNodePtr xmlNewChild(xmlNodePtr parent, xmlNsPtr ns, const xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewDocText(xmlDocPtr, const xmlChar*)</code> */
	xmlNodePtr xmlNewDocText(xmlDocPtr doc, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewText(const xmlChar*)</code> */
	xmlNodePtr xmlNewText(const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewDocPI(xmlDocPtr, const xmlChar*, const xmlChar*)</code> */
	xmlNodePtr xmlNewDocPI(xmlDocPtr doc, const xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewPI(const xmlChar*, const xmlChar*)</code> */
	xmlNodePtr xmlNewPI(const xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewDocTextLen(xmlDocPtr, const xmlChar*, int)</code> */
	xmlNodePtr xmlNewDocTextLen(xmlDocPtr doc, const xmlChar* content, int len);
	/** Original signature : <code>xmlNodePtr xmlNewTextLen(const xmlChar*, int)</code> */
	xmlNodePtr xmlNewTextLen(const xmlChar* content, int len);
	/** Original signature : <code>xmlNodePtr xmlNewDocComment(xmlDocPtr, const xmlChar*)</code> */
	xmlNodePtr xmlNewDocComment(xmlDocPtr doc, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewComment(const xmlChar*)</code> */
	xmlNodePtr xmlNewComment(const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewCDataBlock(xmlDocPtr, const xmlChar*, int)</code> */
	xmlNodePtr xmlNewCDataBlock(xmlDocPtr doc, const xmlChar* content, int len);
	/** Original signature : <code>xmlNodePtr xmlNewCharRef(xmlDocPtr, const xmlChar*)</code> */
	xmlNodePtr xmlNewCharRef(xmlDocPtr doc, const xmlChar* name);
	/** Original signature : <code>xmlNodePtr xmlNewReference(xmlDocPtr, const xmlChar*)</code> */
	xmlNodePtr xmlNewReference(xmlDocPtr doc, const xmlChar* name);
	/** Original signature : <code>xmlNodePtr xmlCopyNode(const xmlNodePtr, int)</code> */
	xmlNodePtr xmlCopyNode(const xmlNodePtr node, int recursive);
	/** Original signature : <code>xmlNodePtr xmlDocCopyNode(const xmlNodePtr, xmlDocPtr, int)</code> */
	xmlNodePtr xmlDocCopyNode(const xmlNodePtr node, xmlDocPtr doc, int recursive);
	/** Original signature : <code>xmlNodePtr xmlDocCopyNodeList(xmlDocPtr, const xmlNodePtr)</code> */
	xmlNodePtr xmlDocCopyNodeList(xmlDocPtr doc, const xmlNodePtr node);
	/** Original signature : <code>xmlNodePtr xmlCopyNodeList(const xmlNodePtr)</code> */
	xmlNodePtr xmlCopyNodeList(const xmlNodePtr node);
	/** Original signature : <code>xmlNodePtr xmlNewTextChild(xmlNodePtr, xmlNsPtr, const xmlChar*, const xmlChar*)</code> */
	xmlNodePtr xmlNewTextChild(xmlNodePtr parent, xmlNsPtr ns, const xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewDocRawNode(xmlDocPtr, xmlNsPtr, const xmlChar*, const xmlChar*)</code> */
	xmlNodePtr xmlNewDocRawNode(xmlDocPtr doc, xmlNsPtr ns, const xmlChar* name, const xmlChar* content);
	/** Original signature : <code>xmlNodePtr xmlNewDocFragment(xmlDocPtr)</code> */
	xmlNodePtr xmlNewDocFragment(xmlDocPtr doc);
	/**
	 * Navigating.<br>
	 * Original signature : <code>long xmlGetLineNo(xmlNodePtr)</code>
	 */
	long xmlGetLineNo(xmlNodePtr node);
	/** Original signature : <code>xmlChar* xmlGetNodePath(xmlNodePtr)</code> */
	xmlChar* xmlGetNodePath(xmlNodePtr node);
	/** Original signature : <code>xmlNodePtr xmlDocGetRootElement(xmlDocPtr)</code> */
	xmlNodePtr xmlDocGetRootElement(xmlDocPtr doc);
	/** Original signature : <code>xmlNodePtr xmlGetLastChild(xmlNodePtr)</code> */
	xmlNodePtr xmlGetLastChild(xmlNodePtr parent);
	/** Original signature : <code>int xmlNodeIsText(xmlNodePtr)</code> */
	int xmlNodeIsText(xmlNodePtr node);
	/** Original signature : <code>int xmlIsBlankNode(xmlNodePtr)</code> */
	int xmlIsBlankNode(xmlNodePtr node);
	/**
	 * Changing the structure.<br>
	 * Original signature : <code>xmlNodePtr xmlDocSetRootElement(xmlDocPtr, xmlNodePtr)</code>
	 */
	xmlNodePtr xmlDocSetRootElement(xmlDocPtr doc, xmlNodePtr root);
	/** Original signature : <code>void xmlNodeSetName(xmlNodePtr, const xmlChar*)</code> */
	void xmlNodeSetName(xmlNodePtr cur, const xmlChar* name);
	/** Original signature : <code>xmlNodePtr xmlAddChild(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlAddChild(xmlNodePtr parent, xmlNodePtr cur);
	/** Original signature : <code>xmlNodePtr xmlAddChildList(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlAddChildList(xmlNodePtr parent, xmlNodePtr cur);
	/** Original signature : <code>xmlNodePtr xmlReplaceNode(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlReplaceNode(xmlNodePtr old, xmlNodePtr cur);
	/** Original signature : <code>xmlNodePtr xmlAddPrevSibling(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlAddPrevSibling(xmlNodePtr cur, xmlNodePtr elem);
	/** Original signature : <code>xmlNodePtr xmlAddSibling(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlAddSibling(xmlNodePtr cur, xmlNodePtr elem);
	/** Original signature : <code>xmlNodePtr xmlAddNextSibling(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlAddNextSibling(xmlNodePtr cur, xmlNodePtr elem);
	/** Original signature : <code>void xmlUnlinkNode(xmlNodePtr)</code> */
	void xmlUnlinkNode(xmlNodePtr cur);
	/** Original signature : <code>xmlNodePtr xmlTextMerge(xmlNodePtr, xmlNodePtr)</code> */
	xmlNodePtr xmlTextMerge(xmlNodePtr first, xmlNodePtr second);
	/** Original signature : <code>int xmlTextConcat(xmlNodePtr, const xmlChar*, int)</code> */
	int xmlTextConcat(xmlNodePtr node, const xmlChar* content, int len);
	/** Original signature : <code>void xmlFreeNodeList(xmlNodePtr)</code> */
	void xmlFreeNodeList(xmlNodePtr cur);
	/** Original signature : <code>void xmlFreeNode(xmlNodePtr)</code> */
	void xmlFreeNode(xmlNodePtr cur);
	/** Original signature : <code>void xmlSetTreeDoc(xmlNodePtr, xmlDocPtr)</code> */
	void xmlSetTreeDoc(xmlNodePtr tree, xmlDocPtr doc);
	/** Original signature : <code>void xmlSetListDoc(xmlNodePtr, xmlDocPtr)</code> */
	void xmlSetListDoc(xmlNodePtr list, xmlDocPtr doc);
	/**
	 * Namespaces.<br>
	 * Original signature : <code>xmlNsPtr xmlSearchNs(xmlDocPtr, xmlNodePtr, const xmlChar*)</code>
	 */
	xmlNsPtr xmlSearchNs(xmlDocPtr doc, xmlNodePtr node, const xmlChar* nameSpace);
	/** Original signature : <code>xmlNsPtr xmlSearchNsByHref(xmlDocPtr, xmlNodePtr, const xmlChar*)</code> */
	xmlNsPtr xmlSearchNsByHref(xmlDocPtr doc, xmlNodePtr node, const xmlChar* href);
	/** Original signature : <code>xmlNsPtr* xmlGetNsList(xmlDocPtr, xmlNodePtr)</code> */
	xmlNsPtr* xmlGetNsList(xmlDocPtr doc, xmlNodePtr node);
	/** Original signature : <code>void xmlSetNs(xmlNodePtr, xmlNsPtr)</code> */
	void xmlSetNs(xmlNodePtr node, xmlNsPtr ns);
	/** Original signature : <code>xmlNsPtr xmlCopyNamespace(xmlNsPtr)</code> */
	xmlNsPtr xmlCopyNamespace(xmlNsPtr cur);
	/** Original signature : <code>xmlNsPtr xmlCopyNamespaceList(xmlNsPtr)</code> */
	xmlNsPtr xmlCopyNamespaceList(xmlNsPtr cur);
	/**
	 * Changing the content.<br>
	 * Original signature : <code>xmlAttrPtr xmlSetProp(xmlNodePtr, const xmlChar*, const xmlChar*)</code>
	 */
	xmlAttrPtr xmlSetProp(xmlNodePtr node, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>xmlAttrPtr xmlSetNsProp(xmlNodePtr, xmlNsPtr, const xmlChar*, const xmlChar*)</code> */
	xmlAttrPtr xmlSetNsProp(xmlNodePtr node, xmlNsPtr ns, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>xmlChar* xmlGetNoNsProp(xmlNodePtr, const xmlChar*)</code> */
	xmlChar* xmlGetNoNsProp(xmlNodePtr node, const xmlChar* name);
	/** Original signature : <code>xmlChar* xmlGetProp(xmlNodePtr, const xmlChar*)</code> */
	xmlChar* xmlGetProp(xmlNodePtr node, const xmlChar* name);
	/** Original signature : <code>xmlAttrPtr xmlHasProp(xmlNodePtr, const xmlChar*)</code> */
	xmlAttrPtr xmlHasProp(xmlNodePtr node, const xmlChar* name);
	/** Original signature : <code>xmlAttrPtr xmlHasNsProp(xmlNodePtr, const xmlChar*, const xmlChar*)</code> */
	xmlAttrPtr xmlHasNsProp(xmlNodePtr node, const xmlChar* name, const xmlChar* nameSpace);
	/** Original signature : <code>xmlChar* xmlGetNsProp(xmlNodePtr, const xmlChar*, const xmlChar*)</code> */
	xmlChar* xmlGetNsProp(xmlNodePtr node, const xmlChar* name, const xmlChar* nameSpace);
	/** Original signature : <code>xmlNodePtr xmlStringGetNodeList(xmlDocPtr, const xmlChar*)</code> */
	xmlNodePtr xmlStringGetNodeList(xmlDocPtr doc, const xmlChar* value);
	/** Original signature : <code>xmlNodePtr xmlStringLenGetNodeList(xmlDocPtr, const xmlChar*, int)</code> */
	xmlNodePtr xmlStringLenGetNodeList(xmlDocPtr doc, const xmlChar* value, int len);
	/** Original signature : <code>xmlChar* xmlNodeListGetString(xmlDocPtr, xmlNodePtr, int)</code> */
	xmlChar* xmlNodeListGetString(xmlDocPtr doc, xmlNodePtr list, int inLine);
	/** Original signature : <code>xmlChar* xmlNodeListGetRawString(xmlDocPtr, xmlNodePtr, int)</code> */
	xmlChar* xmlNodeListGetRawString(xmlDocPtr doc, xmlNodePtr list, int inLine);
	/** Original signature : <code>void xmlNodeSetContent(xmlNodePtr, const xmlChar*)</code> */
	void xmlNodeSetContent(xmlNodePtr cur, const xmlChar* content);
	/** Original signature : <code>void xmlNodeSetContentLen(xmlNodePtr, const xmlChar*, int)</code> */
	void xmlNodeSetContentLen(xmlNodePtr cur, const xmlChar* content, int len);
	/** Original signature : <code>void xmlNodeAddContent(xmlNodePtr, const xmlChar*)</code> */
	void xmlNodeAddContent(xmlNodePtr cur, const xmlChar* content);
	/** Original signature : <code>void xmlNodeAddContentLen(xmlNodePtr, const xmlChar*, int)</code> */
	void xmlNodeAddContentLen(xmlNodePtr cur, const xmlChar* content, int len);
	/** Original signature : <code>xmlChar* xmlNodeGetContent(xmlNodePtr)</code> */
	xmlChar* xmlNodeGetContent(xmlNodePtr cur);
	/** Original signature : <code>int xmlNodeBufGetContent(xmlBufferPtr, xmlNodePtr)</code> */
	int xmlNodeBufGetContent(xmlBufferPtr buffer, xmlNodePtr cur);
	/** Original signature : <code>xmlChar* xmlNodeGetLang(xmlNodePtr)</code> */
	xmlChar* xmlNodeGetLang(xmlNodePtr cur);
	/** Original signature : <code>int xmlNodeGetSpacePreserve(xmlNodePtr)</code> */
	int xmlNodeGetSpacePreserve(xmlNodePtr cur);
	/** Original signature : <code>void xmlNodeSetLang(xmlNodePtr, const xmlChar*)</code> */
	void xmlNodeSetLang(xmlNodePtr cur, const xmlChar* lang);
	/** Original signature : <code>void xmlNodeSetSpacePreserve(xmlNodePtr, int)</code> */
	void xmlNodeSetSpacePreserve(xmlNodePtr cur, int val);
	/** Original signature : <code>xmlChar* xmlNodeGetBase(xmlDocPtr, xmlNodePtr)</code> */
	xmlChar* xmlNodeGetBase(xmlDocPtr doc, xmlNodePtr cur);
	/** Original signature : <code>void xmlNodeSetBase(xmlNodePtr, const xmlChar*)</code> */
	void xmlNodeSetBase(xmlNodePtr cur, const xmlChar* uri);
	/**
	 * Removing content.<br>
	 * Original signature : <code>int xmlRemoveProp(xmlAttrPtr)</code>
	 */
	int xmlRemoveProp(xmlAttrPtr cur);
	/** Original signature : <code>int xmlUnsetNsProp(xmlNodePtr, xmlNsPtr, const xmlChar*)</code> */
	int xmlUnsetNsProp(xmlNodePtr node, xmlNsPtr ns, const xmlChar* name);
	/** Original signature : <code>int xmlUnsetProp(xmlNodePtr, const xmlChar*)</code> */
	int xmlUnsetProp(xmlNodePtr node, const xmlChar* name);
	/**
	 * Internal, don't use.<br>
	 * Original signature : <code>void xmlBufferWriteCHAR(xmlBufferPtr, const xmlChar*)</code>
	 */
	void xmlBufferWriteCHAR(xmlBufferPtr buf, const xmlChar* string);
	/** Original signature : <code>void xmlBufferWriteChar(xmlBufferPtr, const char*)</code> */
	void xmlBufferWriteChar(xmlBufferPtr buf, const char* string);
	/** Original signature : <code>void xmlBufferWriteQuotedString(xmlBufferPtr, const xmlChar*)</code> */
	void xmlBufferWriteQuotedString(xmlBufferPtr buf, const xmlChar* string);
	/** Original signature : <code>void xmlAttrSerializeTxtContent(xmlBufferPtr, xmlDocPtr, xmlAttrPtr, const xmlChar*)</code> */
	void xmlAttrSerializeTxtContent(xmlBufferPtr buf, xmlDocPtr doc, xmlAttrPtr attr, const xmlChar* string);
	/**
	 * Namespace handling.<br>
	 * Original signature : <code>int xmlReconciliateNs(xmlDocPtr, xmlNodePtr)</code>
	 */
	int xmlReconciliateNs(xmlDocPtr doc, xmlNodePtr tree);
	/**
	 * Saving.<br>
	 * Original signature : <code>void xmlDocDumpFormatMemory(xmlDocPtr, xmlChar**, int*, int)</code>
	 */
	void xmlDocDumpFormatMemory(xmlDocPtr cur, xmlChar** mem, int* size, int format);
	/** Original signature : <code>void xmlDocDumpMemory(xmlDocPtr, xmlChar**, int*)</code> */
	void xmlDocDumpMemory(xmlDocPtr cur, xmlChar** mem, int* size);
	/** Original signature : <code>void xmlDocDumpMemoryEnc(xmlDocPtr, xmlChar**, int*, const char*)</code> */
	void xmlDocDumpMemoryEnc(xmlDocPtr out_doc, xmlChar** doc_txt_ptr, int* doc_txt_len, const char* txt_encoding);
	/** Original signature : <code>void xmlDocDumpFormatMemoryEnc(xmlDocPtr, xmlChar**, int*, const char*, int)</code> */
	void xmlDocDumpFormatMemoryEnc(xmlDocPtr out_doc, xmlChar** doc_txt_ptr, int* doc_txt_len, const char* txt_encoding, int format);
	/** Original signature : <code>int xmlDocFormatDump(FILE*, xmlDocPtr, int)</code> */
	int xmlDocFormatDump(FILE* f, xmlDocPtr cur, int format);
	/** Original signature : <code>int xmlDocDump(FILE*, xmlDocPtr)</code> */
	int xmlDocDump(FILE* f, xmlDocPtr cur);
	/** Original signature : <code>void xmlElemDump(FILE*, xmlDocPtr, xmlNodePtr)</code> */
	void xmlElemDump(FILE* f, xmlDocPtr doc, xmlNodePtr cur);
	/** Original signature : <code>int xmlSaveFile(const char*, xmlDocPtr)</code> */
	int xmlSaveFile(const char* filename, xmlDocPtr cur);
	/** Original signature : <code>int xmlSaveFormatFile(const char*, xmlDocPtr, int)</code> */
	int xmlSaveFormatFile(const char* filename, xmlDocPtr cur, int format);
	/** Original signature : <code>int xmlNodeDump(xmlBufferPtr, xmlDocPtr, xmlNodePtr, int, int)</code> */
	int xmlNodeDump(xmlBufferPtr buf, xmlDocPtr doc, xmlNodePtr cur, int level, int format);
	/** Original signature : <code>int xmlSaveFileTo(xmlOutputBufferPtr, xmlDocPtr, const char*)</code> */
	int xmlSaveFileTo(xmlOutputBufferPtr buf, xmlDocPtr cur, const char* encoding);
	/** Original signature : <code>int xmlSaveFormatFileTo(xmlOutputBufferPtr, xmlDocPtr, const char*, int)</code> */
	int xmlSaveFormatFileTo(xmlOutputBufferPtr buf, xmlDocPtr cur, const char* encoding, int format);
	/** Original signature : <code>void xmlNodeDumpOutput(xmlOutputBufferPtr, xmlDocPtr, xmlNodePtr, int, int, const char*)</code> */
	void xmlNodeDumpOutput(xmlOutputBufferPtr buf, xmlDocPtr doc, xmlNodePtr cur, int level, int format, const char* encoding);
	/** Original signature : <code>int xmlSaveFormatFileEnc(const char*, xmlDocPtr, const char*, int)</code> */
	int xmlSaveFormatFileEnc(const char* filename, xmlDocPtr cur, const char* encoding, int format);
	/** Original signature : <code>int xmlSaveFileEnc(const char*, xmlDocPtr, const char*)</code> */
	int xmlSaveFileEnc(const char* filename, xmlDocPtr cur, const char* encoding);
	/**
	 * XHTML<br>
	 * Original signature : <code>int xmlIsXHTML(const xmlChar*, const xmlChar*)</code>
	 */
	int xmlIsXHTML(const xmlChar* systemID, const xmlChar* publicID);
	/**
	 * Compression.<br>
	 * Original signature : <code>int xmlGetDocCompressMode(xmlDocPtr)</code>
	 */
	int xmlGetDocCompressMode(xmlDocPtr doc);
	/** Original signature : <code>void xmlSetDocCompressMode(xmlDocPtr, int)</code> */
	void xmlSetDocCompressMode(xmlDocPtr doc, int mode);
	/** Original signature : <code>int xmlGetCompressMode()</code> */
	int xmlGetCompressMode();
	/** Original signature : <code>void xmlSetCompressMode(int)</code> */
	void xmlSetCompressMode(int mode);
	/**
	 * DOM-wrapper helper functions.<br>
	 * Original signature : <code>xmlDOMWrapCtxtPtr xmlDOMWrapNewCtxt()</code>
	 */
	xmlDOMWrapCtxtPtr xmlDOMWrapNewCtxt();
	/** Original signature : <code>void xmlDOMWrapFreeCtxt(xmlDOMWrapCtxtPtr)</code> */
	void xmlDOMWrapFreeCtxt(xmlDOMWrapCtxtPtr ctxt);
	/** Original signature : <code>int xmlDOMWrapReconcileNamespaces(xmlDOMWrapCtxtPtr, xmlNodePtr, int)</code> */
	int xmlDOMWrapReconcileNamespaces(xmlDOMWrapCtxtPtr ctxt, xmlNodePtr elem, int options);
	/** Original signature : <code>int xmlDOMWrapAdoptNode(xmlDOMWrapCtxtPtr, xmlDocPtr, xmlNodePtr, xmlDocPtr, xmlNodePtr, int)</code> */
	int xmlDOMWrapAdoptNode(xmlDOMWrapCtxtPtr ctxt, xmlDocPtr sourceDoc, xmlNodePtr node, xmlDocPtr destDoc, xmlNodePtr destParent, int options);
	/** Original signature : <code>int xmlDOMWrapRemoveNode(xmlDOMWrapCtxtPtr, xmlDocPtr, xmlNodePtr, int)</code> */
	int xmlDOMWrapRemoveNode(xmlDOMWrapCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr node, int options);
	/** Original signature : <code>int xmlDOMWrapCloneNode(xmlDOMWrapCtxtPtr, xmlDocPtr, xmlNodePtr, xmlNodePtr*, xmlDocPtr, xmlNodePtr, int, int)</code> */
	int xmlDOMWrapCloneNode(xmlDOMWrapCtxtPtr ctxt, xmlDocPtr sourceDoc, xmlNodePtr node, xmlNodePtr* clonedNode, xmlDocPtr destDoc, xmlNodePtr destParent, int deep, int options);
	/**
	 * 5 interfaces from DOM ElementTraversal, but different in entities<br>
	 * traversal.<br>
	 * Original signature : <code>long xmlChildElementCount(xmlNodePtr)</code>
	 */
	unsigned long xmlChildElementCount(xmlNodePtr parent);
	/** Original signature : <code>xmlNodePtr xmlNextElementSibling(xmlNodePtr)</code> */
	xmlNodePtr xmlNextElementSibling(xmlNodePtr node);
	/** Original signature : <code>xmlNodePtr xmlFirstElementChild(xmlNodePtr)</code> */
	xmlNodePtr xmlFirstElementChild(xmlNodePtr parent);
	/** Original signature : <code>xmlNodePtr xmlLastElementChild(xmlNodePtr)</code> */
	xmlNodePtr xmlLastElementChild(xmlNodePtr parent);
	/** Original signature : <code>xmlNodePtr xmlPreviousElementSibling(xmlNodePtr)</code> */
	xmlNodePtr xmlPreviousElementSibling(xmlNodePtr node);
}


extern ""C"" {
/**
	 * xmlFreeFunc:<br>
	 * @mem: an already allocated block of memory<br>
	 * * Signature for a free() implementation.
	 */
	typedef void (*xmlFreeFunc)(void* mem) xmlFreeFunc;
	/**
	 * xmlMallocFunc:<br>
	 * @size:  the size requested in bytes<br>
	 * * Signature for a malloc() implementation.<br>
	 * * Returns a pointer to the newly allocated block or NULL in case of error.
	 */
	typedef void* (*xmlMallocFunc)(size_t size) xmlMallocFunc;
	/**
	 * xmlReallocFunc:<br>
	 * @mem: an already allocated block of memory<br>
	 * @size:  the new size requested in bytes<br>
	 * * Signature for a realloc() implementation.<br>
	 * * Returns a pointer to the newly reallocated block or NULL in case of error.
	 */
	typedef void* (*xmlReallocFunc)(void* mem, size_t size) xmlReallocFunc;
	/**
	 * xmlStrdupFunc:<br>
	 * @str: a zero terminated string<br>
	 * * Signature for an strdup() implementation.<br>
	 * * Returns the copy of the string or NULL in case of error.
	 */
	typedef char* (*xmlStrdupFunc)(const char* str) xmlStrdupFunc;
	/**
	 * The way to overload the existing functions.<br>
	 * The xmlGc function have an extra entry for atomic block<br>
	 * allocations useful for garbage collected memory allocators<br>
	 * Original signature : <code>int xmlMemSetup(xmlFreeFunc, xmlMallocFunc, xmlReallocFunc, xmlStrdupFunc)</code>
	 */
	int xmlMemSetup(xmlFreeFunc freeFunc, xmlMallocFunc mallocFunc, xmlReallocFunc reallocFunc, xmlStrdupFunc strdupFunc);
	/** Original signature : <code>int xmlMemGet(xmlFreeFunc*, xmlMallocFunc*, xmlReallocFunc*, xmlStrdupFunc*)</code> */
	int xmlMemGet(xmlFreeFunc* freeFunc, xmlMallocFunc* mallocFunc, xmlReallocFunc* reallocFunc, xmlStrdupFunc* strdupFunc);
	/** Original signature : <code>int xmlGcMemSetup(xmlFreeFunc, xmlMallocFunc, xmlMallocFunc, xmlReallocFunc, xmlStrdupFunc)</code> */
	int xmlGcMemSetup(xmlFreeFunc freeFunc, xmlMallocFunc mallocFunc, xmlMallocFunc mallocAtomicFunc, xmlReallocFunc reallocFunc, xmlStrdupFunc strdupFunc);
	/** Original signature : <code>int xmlGcMemGet(xmlFreeFunc*, xmlMallocFunc*, xmlMallocFunc*, xmlReallocFunc*, xmlStrdupFunc*)</code> */
	int xmlGcMemGet(xmlFreeFunc* freeFunc, xmlMallocFunc* mallocFunc, xmlMallocFunc* mallocAtomicFunc, xmlReallocFunc* reallocFunc, xmlStrdupFunc* strdupFunc);
	/**
	 * Initialization of the memory layer.<br>
	 * Original signature : <code>int xmlInitMemory()</code>
	 */
	int xmlInitMemory();
	/**
	 * Cleanup of the memory layer.<br>
	 * Original signature : <code>void xmlCleanupMemory()</code>
	 */
	void xmlCleanupMemory();
	/**
	 * These are specific to the XML debug memory wrapper.<br>
	 * Original signature : <code>int xmlMemUsed()</code>
	 */
	int xmlMemUsed();
	/** Original signature : <code>int xmlMemBlocks()</code> */
	int xmlMemBlocks();
	/** Original signature : <code>void xmlMemDisplay(FILE*)</code> */
	void xmlMemDisplay(FILE* fp);
	/** Original signature : <code>void xmlMemDisplayLast(FILE*, long)</code> */
	void xmlMemDisplayLast(FILE* fp, long nbBytes);
	/** Original signature : <code>void xmlMemShow(FILE*, int)</code> */
	void xmlMemShow(FILE* fp, int nr);
	/** Original signature : <code>void xmlMemoryDump()</code> */
	void xmlMemoryDump();
	/** Original signature : <code>void* xmlMemMalloc(size_t)</code> */
	void* xmlMemMalloc(size_t size);
	/** Original signature : <code>void* xmlMemRealloc(void*, size_t)</code> */
	void* xmlMemRealloc(void* ptr, size_t size);
	/** Original signature : <code>void xmlMemFree(void*)</code> */
	void xmlMemFree(void* ptr);
	/** Original signature : <code>char* xmlMemoryStrdup(const char*)</code> */
	char* xmlMemoryStrdup(const char* str);
	/** Original signature : <code>void* xmlMallocLoc(size_t, const char*, int)</code> */
	void* xmlMallocLoc(size_t size, const char* file, int line);
	/** Original signature : <code>void* xmlReallocLoc(void*, size_t, const char*, int)</code> */
	void* xmlReallocLoc(void* ptr, size_t size, const char* file, int line);
	/** Original signature : <code>void* xmlMallocAtomicLoc(size_t, const char*, int)</code> */
	void* xmlMallocAtomicLoc(size_t size, const char* file, int line);
	/** Original signature : <code>char* xmlMemStrdupLoc(const char*, const char*, int)</code> */
	char* xmlMemStrdupLoc(const char* str, const char* file, int line);
}

extern ""C"" {
/** xmlMutex are a simple mutual exception locks. */
	typedef _xmlMutex xmlMutex;
	typedef xmlMutex* xmlMutexPtr;
	/** xmlRMutex are reentrant mutual exception locks. */
	typedef _xmlRMutex xmlRMutex;
	typedef xmlRMutex* xmlRMutexPtr;
}







extern ""C"" {
/** The hash table. */
	typedef _xmlHashTable xmlHashTable;
	typedef xmlHashTable* xmlHashTablePtr;
}


extern ""C"" {
/**
	 * xmlHashDeallocator:<br>
	 * @payload:  the data in the hash<br>
	 * @name:  the name associated<br>
	 * * Callback to free data from a hash.
	 */
	typedef void (*xmlHashDeallocator)(void* payload, xmlChar* name) xmlHashDeallocator;
	/**
	 * xmlHashCopier:<br>
	 * @payload:  the data in the hash<br>
	 * @name:  the name associated<br>
	 * * Callback to copy data from a hash.<br>
	 * * Returns a copy of the data or NULL in case of error.
	 */
	typedef void* (*xmlHashCopier)(void* payload, xmlChar* name) xmlHashCopier;
	/**
	 * xmlHashScanner:<br>
	 * @payload:  the data in the hash<br>
	 * @data:  extra scannner data<br>
	 * @name:  the name associated<br>
	 * * Callback when scanning data in a hash with the simple scanner.
	 */
	typedef void (*xmlHashScanner)(void* payload, void* data, xmlChar* name) xmlHashScanner;
	/**
	 * xmlHashScannerFull:<br>
	 * @payload:  the data in the hash<br>
	 * @data:  extra scannner data<br>
	 * @name:  the name associated<br>
	 * @name2:  the second name associated<br>
	 * @name3:  the third name associated<br>
	 * * Callback when scanning data in a hash with the full scanner.
	 */
	typedef void (*xmlHashScannerFull)(void* payload, void* data, const xmlChar* name, const xmlChar* name2, const xmlChar* name3) xmlHashScannerFull;
	/**
	 * Constructor and destructor.<br>
	 * Original signature : <code>xmlHashTablePtr xmlHashCreate(int)</code>
	 */
	xmlHashTablePtr xmlHashCreate(int size);
	/** Original signature : <code>xmlHashTablePtr xmlHashCreateDict(int, xmlDictPtr)</code> */
	xmlHashTablePtr xmlHashCreateDict(int size, xmlDictPtr dict);
	/** Original signature : <code>void xmlHashFree(xmlHashTablePtr, xmlHashDeallocator)</code> */
	void xmlHashFree(xmlHashTablePtr table, xmlHashDeallocator f);
	/**
	 * Add a new entry to the hash table.<br>
	 * Original signature : <code>int xmlHashAddEntry(xmlHashTablePtr, const xmlChar*, void*)</code>
	 */
	int xmlHashAddEntry(xmlHashTablePtr table, const xmlChar* name, void* userdata);
	/** Original signature : <code>int xmlHashUpdateEntry(xmlHashTablePtr, const xmlChar*, void*, xmlHashDeallocator)</code> */
	int xmlHashUpdateEntry(xmlHashTablePtr table, const xmlChar* name, void* userdata, xmlHashDeallocator f);
	/** Original signature : <code>int xmlHashAddEntry2(xmlHashTablePtr, const xmlChar*, const xmlChar*, void*)</code> */
	int xmlHashAddEntry2(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, void* userdata);
	/** Original signature : <code>int xmlHashUpdateEntry2(xmlHashTablePtr, const xmlChar*, const xmlChar*, void*, xmlHashDeallocator)</code> */
	int xmlHashUpdateEntry2(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, void* userdata, xmlHashDeallocator f);
	/** Original signature : <code>int xmlHashAddEntry3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, void*)</code> */
	int xmlHashAddEntry3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, const xmlChar* name3, void* userdata);
	/** Original signature : <code>int xmlHashUpdateEntry3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, void*, xmlHashDeallocator)</code> */
	int xmlHashUpdateEntry3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, const xmlChar* name3, void* userdata, xmlHashDeallocator f);
	/**
	 * Remove an entry from the hash table.<br>
	 * Original signature : <code>int xmlHashRemoveEntry(xmlHashTablePtr, const xmlChar*, xmlHashDeallocator)</code>
	 */
	int xmlHashRemoveEntry(xmlHashTablePtr table, const xmlChar* name, xmlHashDeallocator f);
	/** Original signature : <code>int xmlHashRemoveEntry2(xmlHashTablePtr, const xmlChar*, const xmlChar*, xmlHashDeallocator)</code> */
	int xmlHashRemoveEntry2(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, xmlHashDeallocator f);
	/** Original signature : <code>int xmlHashRemoveEntry3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, xmlHashDeallocator)</code> */
	int xmlHashRemoveEntry3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, const xmlChar* name3, xmlHashDeallocator f);
	/**
	 * Retrieve the userdata.<br>
	 * Original signature : <code>void* xmlHashLookup(xmlHashTablePtr, const xmlChar*)</code>
	 */
	void* xmlHashLookup(xmlHashTablePtr table, const xmlChar* name);
	/** Original signature : <code>void* xmlHashLookup2(xmlHashTablePtr, const xmlChar*, const xmlChar*)</code> */
	void* xmlHashLookup2(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2);
	/** Original signature : <code>void* xmlHashLookup3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void* xmlHashLookup3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, const xmlChar* name3);
	/** Original signature : <code>void* xmlHashQLookup(xmlHashTablePtr, const xmlChar*, const xmlChar*)</code> */
	void* xmlHashQLookup(xmlHashTablePtr table, const xmlChar* name, const xmlChar* prefix);
	/** Original signature : <code>void* xmlHashQLookup2(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void* xmlHashQLookup2(xmlHashTablePtr table, const xmlChar* name, const xmlChar* prefix, const xmlChar* name2, const xmlChar* prefix2);
	/** Original signature : <code>void* xmlHashQLookup3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void* xmlHashQLookup3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* prefix, const xmlChar* name2, const xmlChar* prefix2, const xmlChar* name3, const xmlChar* prefix3);
	/**
	 * Helpers.<br>
	 * Original signature : <code>xmlHashTablePtr xmlHashCopy(xmlHashTablePtr, xmlHashCopier)</code>
	 */
	xmlHashTablePtr xmlHashCopy(xmlHashTablePtr table, xmlHashCopier f);
	/** Original signature : <code>int xmlHashSize(xmlHashTablePtr)</code> */
	int xmlHashSize(xmlHashTablePtr table);
	/** Original signature : <code>void xmlHashScan(xmlHashTablePtr, xmlHashScanner, void*)</code> */
	void xmlHashScan(xmlHashTablePtr table, xmlHashScanner f, void* data);
	/** Original signature : <code>void xmlHashScan3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, xmlHashScanner, void*)</code> */
	void xmlHashScan3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, const xmlChar* name3, xmlHashScanner f, void* data);
	/** Original signature : <code>void xmlHashScanFull(xmlHashTablePtr, xmlHashScannerFull, void*)</code> */
	void xmlHashScanFull(xmlHashTablePtr table, xmlHashScannerFull f, void* data);
	/** Original signature : <code>void xmlHashScanFull3(xmlHashTablePtr, const xmlChar*, const xmlChar*, const xmlChar*, xmlHashScannerFull, void*)</code> */
	void xmlHashScanFull3(xmlHashTablePtr table, const xmlChar* name, const xmlChar* name2, const xmlChar* name3, xmlHashScannerFull f, void* data);
}




extern ""C"" {
/**
	 * xmlErrorLevel:<br>
	 * * Indicates the level of an error
	 */
	typedef enum xmlErrorLevel {
		XML_ERR_NONE = 0,
		XML_ERR_WARNING = 1 /* A simple warning */,
		XML_ERR_ERROR = 2 /* A recoverable error */,
		XML_ERR_FATAL = 3 /* A fatal error */
	} xmlErrorLevel;
	/**
	 * xmlErrorDomain:<br>
	 * * Indicates where an error may have come from
	 */
	typedef enum xmlErrorDomain {
		XML_FROM_NONE = 0,
		XML_FROM_PARSER /* The XML parser */,
		XML_FROM_TREE /* The tree module */,
		XML_FROM_NAMESPACE /* The XML Namespace module */,
		XML_FROM_DTD /* The XML DTD validation with parser context*/,
		XML_FROM_HTML /* The HTML parser */,
		XML_FROM_MEMORY /* The memory allocator */,
		XML_FROM_OUTPUT /* The serialization code */,
		XML_FROM_IO /* The Input/Output stack */,
		XML_FROM_FTP /* The FTP module */,
		XML_FROM_HTTP /* The HTTP module */,
		XML_FROM_XINCLUDE /* The XInclude processing */,
		XML_FROM_XPATH /* The XPath module */,
		XML_FROM_XPOINTER /* The XPointer module */,
		XML_FROM_REGEXP /* The regular expressions module */,
		XML_FROM_DATATYPE /* The W3C XML Schemas Datatype module */,
		XML_FROM_SCHEMASP /* The W3C XML Schemas parser module */,
		XML_FROM_SCHEMASV /* The W3C XML Schemas validation module */,
		XML_FROM_RELAXNGP /* The Relax-NG parser module */,
		XML_FROM_RELAXNGV /* The Relax-NG validator module */,
		XML_FROM_CATALOG /* The Catalog module */,
		XML_FROM_C14N /* The Canonicalization module */,
		XML_FROM_XSLT /* The XSLT engine from libxslt */,
		XML_FROM_VALID /* The XML DTD validation with valid context */,
		XML_FROM_CHECK /* The error checking module */,
		XML_FROM_WRITER /* The xmlwriter module */,
		XML_FROM_MODULE /* The dynamically loaded module module*/,
		XML_FROM_I18N /* The module handling character conversion */,
		XML_FROM_SCHEMATRONV /* The Schematron validator module */
	} xmlErrorDomain;
	/**
	 * xmlError:<br>
	 * * An XML Error instance.
	 */
	typedef _xmlError xmlError;
	typedef xmlError* xmlErrorPtr;
	struct _xmlError {
		int domain; /* What part of the library raised this error */
		int code; /* The error code, e.g. an xmlParserError */
		char* message; /* human-readable informative error message */
		xmlErrorLevel level; /* how consequent is the error */
		char* file; /* the filename */
		int line; /* the line number if available */
		char* str1; /* extra string information */
		char* str2; /* extra string information */
		char* str3; /* extra string information */
		int int1; /* extra number information */
		int int2; /* column number of the error or 0 if N/A (todo: rename this field when we would break ABI) */
		void* ctxt; /* the parser context if available */
		void* node; /* the node in the tree */
	};
	/**
	 * xmlParserError:<br>
	 * * This is an error that the XML (or HTML) parser can generate
	 */
	typedef enum xmlParserErrors {
		XML_ERR_OK = 0,
		XML_ERR_INTERNAL_ERROR /* 1 */,
		XML_ERR_NO_MEMORY /* 2 */,
		XML_ERR_DOCUMENT_START /* 3 */,
		XML_ERR_DOCUMENT_EMPTY /* 4 */,
		XML_ERR_DOCUMENT_END /* 5 */,
		XML_ERR_INVALID_HEX_CHARREF /* 6 */,
		XML_ERR_INVALID_DEC_CHARREF /* 7 */,
		XML_ERR_INVALID_CHARREF /* 8 */,
		XML_ERR_INVALID_CHAR /* 9 */,
		XML_ERR_CHARREF_AT_EOF /* 10 */,
		XML_ERR_CHARREF_IN_PROLOG /* 11 */,
		XML_ERR_CHARREF_IN_EPILOG /* 12 */,
		XML_ERR_CHARREF_IN_DTD /* 13 */,
		XML_ERR_ENTITYREF_AT_EOF /* 14 */,
		XML_ERR_ENTITYREF_IN_PROLOG /* 15 */,
		XML_ERR_ENTITYREF_IN_EPILOG /* 16 */,
		XML_ERR_ENTITYREF_IN_DTD /* 17 */,
		XML_ERR_PEREF_AT_EOF /* 18 */,
		XML_ERR_PEREF_IN_PROLOG /* 19 */,
		XML_ERR_PEREF_IN_EPILOG /* 20 */,
		XML_ERR_PEREF_IN_INT_SUBSET /* 21 */,
		XML_ERR_ENTITYREF_NO_NAME /* 22 */,
		XML_ERR_ENTITYREF_SEMICOL_MISSING /* 23 */,
		XML_ERR_PEREF_NO_NAME /* 24 */,
		XML_ERR_PEREF_SEMICOL_MISSING /* 25 */,
		XML_ERR_UNDECLARED_ENTITY /* 26 */,
		XML_WAR_UNDECLARED_ENTITY /* 27 */,
		XML_ERR_UNPARSED_ENTITY /* 28 */,
		XML_ERR_ENTITY_IS_EXTERNAL /* 29 */,
		XML_ERR_ENTITY_IS_PARAMETER /* 30 */,
		XML_ERR_UNKNOWN_ENCODING /* 31 */,
		XML_ERR_UNSUPPORTED_ENCODING /* 32 */,
		XML_ERR_STRING_NOT_STARTED /* 33 */,
		XML_ERR_STRING_NOT_CLOSED /* 34 */,
		XML_ERR_NS_DECL_ERROR /* 35 */,
		XML_ERR_ENTITY_NOT_STARTED /* 36 */,
		XML_ERR_ENTITY_NOT_FINISHED /* 37 */,
		XML_ERR_LT_IN_ATTRIBUTE /* 38 */,
		XML_ERR_ATTRIBUTE_NOT_STARTED /* 39 */,
		XML_ERR_ATTRIBUTE_NOT_FINISHED /* 40 */,
		XML_ERR_ATTRIBUTE_WITHOUT_VALUE /* 41 */,
		XML_ERR_ATTRIBUTE_REDEFINED /* 42 */,
		XML_ERR_LITERAL_NOT_STARTED /* 43 */,
		XML_ERR_LITERAL_NOT_FINISHED /* 44 */,
		XML_ERR_COMMENT_NOT_FINISHED /* 45 */,
		XML_ERR_PI_NOT_STARTED /* 46 */,
		XML_ERR_PI_NOT_FINISHED /* 47 */,
		XML_ERR_NOTATION_NOT_STARTED /* 48 */,
		XML_ERR_NOTATION_NOT_FINISHED /* 49 */,
		XML_ERR_ATTLIST_NOT_STARTED /* 50 */,
		XML_ERR_ATTLIST_NOT_FINISHED /* 51 */,
		XML_ERR_MIXED_NOT_STARTED /* 52 */,
		XML_ERR_MIXED_NOT_FINISHED /* 53 */,
		XML_ERR_ELEMCONTENT_NOT_STARTED /* 54 */,
		XML_ERR_ELEMCONTENT_NOT_FINISHED /* 55 */,
		XML_ERR_XMLDECL_NOT_STARTED /* 56 */,
		XML_ERR_XMLDECL_NOT_FINISHED /* 57 */,
		XML_ERR_CONDSEC_NOT_STARTED /* 58 */,
		XML_ERR_CONDSEC_NOT_FINISHED /* 59 */,
		XML_ERR_EXT_SUBSET_NOT_FINISHED /* 60 */,
		XML_ERR_DOCTYPE_NOT_FINISHED /* 61 */,
		XML_ERR_MISPLACED_CDATA_END /* 62 */,
		XML_ERR_CDATA_NOT_FINISHED /* 63 */,
		XML_ERR_RESERVED_XML_NAME /* 64 */,
		XML_ERR_SPACE_REQUIRED /* 65 */,
		XML_ERR_SEPARATOR_REQUIRED /* 66 */,
		XML_ERR_NMTOKEN_REQUIRED /* 67 */,
		XML_ERR_NAME_REQUIRED /* 68 */,
		XML_ERR_PCDATA_REQUIRED /* 69 */,
		XML_ERR_URI_REQUIRED /* 70 */,
		XML_ERR_PUBID_REQUIRED /* 71 */,
		XML_ERR_LT_REQUIRED /* 72 */,
		XML_ERR_GT_REQUIRED /* 73 */,
		XML_ERR_LTSLASH_REQUIRED /* 74 */,
		XML_ERR_EQUAL_REQUIRED /* 75 */,
		XML_ERR_TAG_NAME_MISMATCH /* 76 */,
		XML_ERR_TAG_NOT_FINISHED /* 77 */,
		XML_ERR_STANDALONE_VALUE /* 78 */,
		XML_ERR_ENCODING_NAME /* 79 */,
		XML_ERR_HYPHEN_IN_COMMENT /* 80 */,
		XML_ERR_INVALID_ENCODING /* 81 */,
		XML_ERR_EXT_ENTITY_STANDALONE /* 82 */,
		XML_ERR_CONDSEC_INVALID /* 83 */,
		XML_ERR_VALUE_REQUIRED /* 84 */,
		XML_ERR_NOT_WELL_BALANCED /* 85 */,
		XML_ERR_EXTRA_CONTENT /* 86 */,
		XML_ERR_ENTITY_CHAR_ERROR /* 87 */,
		XML_ERR_ENTITY_PE_INTERNAL /* 88 */,
		XML_ERR_ENTITY_LOOP /* 89 */,
		XML_ERR_ENTITY_BOUNDARY /* 90 */,
		XML_ERR_INVALID_URI /* 91 */,
		XML_ERR_URI_FRAGMENT /* 92 */,
		XML_WAR_CATALOG_PI /* 93 */,
		XML_ERR_NO_DTD /* 94 */,
		XML_ERR_CONDSEC_INVALID_KEYWORD /* 95 */,
		XML_ERR_VERSION_MISSING /* 96 */,
		XML_WAR_UNKNOWN_VERSION /* 97 */,
		XML_WAR_LANG_VALUE /* 98 */,
		XML_WAR_NS_URI /* 99 */,
		XML_WAR_NS_URI_RELATIVE /* 100 */,
		XML_ERR_MISSING_ENCODING /* 101 */,
		XML_WAR_SPACE_VALUE /* 102 */,
		XML_ERR_NOT_STANDALONE /* 103 */,
		XML_ERR_ENTITY_PROCESSING /* 104 */,
		XML_ERR_NOTATION_PROCESSING /* 105 */,
		XML_WAR_NS_COLUMN /* 106 */,
		XML_WAR_ENTITY_REDEFINED /* 107 */,
		XML_ERR_UNKNOWN_VERSION /* 108 */,
		XML_ERR_VERSION_MISMATCH /* 109 */,
		XML_ERR_USER_STOP /* 111 */,
		XML_NS_ERR_XML_NAMESPACE = 200,
		XML_NS_ERR_UNDEFINED_NAMESPACE /* 201 */,
		XML_NS_ERR_QNAME /* 202 */,
		XML_NS_ERR_ATTRIBUTE_REDEFINED /* 203 */,
		XML_NS_ERR_EMPTY /* 204 */,
		XML_NS_ERR_COLON /* 205 */,
		XML_DTD_ATTRIBUTE_DEFAULT = 500,
		XML_DTD_ATTRIBUTE_REDEFINED /* 501 */,
		XML_DTD_ATTRIBUTE_VALUE /* 502 */,
		XML_DTD_CONTENT_ERROR /* 503 */,
		XML_DTD_CONTENT_MODEL /* 504 */,
		XML_DTD_CONTENT_NOT_DETERMINIST /* 505 */,
		XML_DTD_DIFFERENT_PREFIX /* 506 */,
		XML_DTD_ELEM_DEFAULT_NAMESPACE /* 507 */,
		XML_DTD_ELEM_NAMESPACE /* 508 */,
		XML_DTD_ELEM_REDEFINED /* 509 */,
		XML_DTD_EMPTY_NOTATION /* 510 */,
		XML_DTD_ENTITY_TYPE /* 511 */,
		XML_DTD_ID_FIXED /* 512 */,
		XML_DTD_ID_REDEFINED /* 513 */,
		XML_DTD_ID_SUBSET /* 514 */,
		XML_DTD_INVALID_CHILD /* 515 */,
		XML_DTD_INVALID_DEFAULT /* 516 */,
		XML_DTD_LOAD_ERROR /* 517 */,
		XML_DTD_MISSING_ATTRIBUTE /* 518 */,
		XML_DTD_MIXED_CORRUPT /* 519 */,
		XML_DTD_MULTIPLE_ID /* 520 */,
		XML_DTD_NO_DOC /* 521 */,
		XML_DTD_NO_DTD /* 522 */,
		XML_DTD_NO_ELEM_NAME /* 523 */,
		XML_DTD_NO_PREFIX /* 524 */,
		XML_DTD_NO_ROOT /* 525 */,
		XML_DTD_NOTATION_REDEFINED /* 526 */,
		XML_DTD_NOTATION_VALUE /* 527 */,
		XML_DTD_NOT_EMPTY /* 528 */,
		XML_DTD_NOT_PCDATA /* 529 */,
		XML_DTD_NOT_STANDALONE /* 530 */,
		XML_DTD_ROOT_NAME /* 531 */,
		XML_DTD_STANDALONE_WHITE_SPACE /* 532 */,
		XML_DTD_UNKNOWN_ATTRIBUTE /* 533 */,
		XML_DTD_UNKNOWN_ELEM /* 534 */,
		XML_DTD_UNKNOWN_ENTITY /* 535 */,
		XML_DTD_UNKNOWN_ID /* 536 */,
		XML_DTD_UNKNOWN_NOTATION /* 537 */,
		XML_DTD_STANDALONE_DEFAULTED /* 538 */,
		XML_DTD_XMLID_VALUE /* 539 */,
		XML_DTD_XMLID_TYPE /* 540 */,
		XML_DTD_DUP_TOKEN /* 541 */,
		XML_HTML_STRUCURE_ERROR = 800,
		XML_HTML_UNKNOWN_TAG /* 801 */,
		XML_RNGP_ANYNAME_ATTR_ANCESTOR = 1000,
		XML_RNGP_ATTR_CONFLICT /* 1001 */,
		XML_RNGP_ATTRIBUTE_CHILDREN /* 1002 */,
		XML_RNGP_ATTRIBUTE_CONTENT /* 1003 */,
		XML_RNGP_ATTRIBUTE_EMPTY /* 1004 */,
		XML_RNGP_ATTRIBUTE_NOOP /* 1005 */,
		XML_RNGP_CHOICE_CONTENT /* 1006 */,
		XML_RNGP_CHOICE_EMPTY /* 1007 */,
		XML_RNGP_CREATE_FAILURE /* 1008 */,
		XML_RNGP_DATA_CONTENT /* 1009 */,
		XML_RNGP_DEF_CHOICE_AND_INTERLEAVE /* 1010 */,
		XML_RNGP_DEFINE_CREATE_FAILED /* 1011 */,
		XML_RNGP_DEFINE_EMPTY /* 1012 */,
		XML_RNGP_DEFINE_MISSING /* 1013 */,
		XML_RNGP_DEFINE_NAME_MISSING /* 1014 */,
		XML_RNGP_ELEM_CONTENT_EMPTY /* 1015 */,
		XML_RNGP_ELEM_CONTENT_ERROR /* 1016 */,
		XML_RNGP_ELEMENT_EMPTY /* 1017 */,
		XML_RNGP_ELEMENT_CONTENT /* 1018 */,
		XML_RNGP_ELEMENT_NAME /* 1019 */,
		XML_RNGP_ELEMENT_NO_CONTENT /* 1020 */,
		XML_RNGP_ELEM_TEXT_CONFLICT /* 1021 */,
		XML_RNGP_EMPTY /* 1022 */,
		XML_RNGP_EMPTY_CONSTRUCT /* 1023 */,
		XML_RNGP_EMPTY_CONTENT /* 1024 */,
		XML_RNGP_EMPTY_NOT_EMPTY /* 1025 */,
		XML_RNGP_ERROR_TYPE_LIB /* 1026 */,
		XML_RNGP_EXCEPT_EMPTY /* 1027 */,
		XML_RNGP_EXCEPT_MISSING /* 1028 */,
		XML_RNGP_EXCEPT_MULTIPLE /* 1029 */,
		XML_RNGP_EXCEPT_NO_CONTENT /* 1030 */,
		XML_RNGP_EXTERNALREF_EMTPY /* 1031 */,
		XML_RNGP_EXTERNAL_REF_FAILURE /* 1032 */,
		XML_RNGP_EXTERNALREF_RECURSE /* 1033 */,
		XML_RNGP_FORBIDDEN_ATTRIBUTE /* 1034 */,
		XML_RNGP_FOREIGN_ELEMENT /* 1035 */,
		XML_RNGP_GRAMMAR_CONTENT /* 1036 */,
		XML_RNGP_GRAMMAR_EMPTY /* 1037 */,
		XML_RNGP_GRAMMAR_MISSING /* 1038 */,
		XML_RNGP_GRAMMAR_NO_START /* 1039 */,
		XML_RNGP_GROUP_ATTR_CONFLICT /* 1040 */,
		XML_RNGP_HREF_ERROR /* 1041 */,
		XML_RNGP_INCLUDE_EMPTY /* 1042 */,
		XML_RNGP_INCLUDE_FAILURE /* 1043 */,
		XML_RNGP_INCLUDE_RECURSE /* 1044 */,
		XML_RNGP_INTERLEAVE_ADD /* 1045 */,
		XML_RNGP_INTERLEAVE_CREATE_FAILED /* 1046 */,
		XML_RNGP_INTERLEAVE_EMPTY /* 1047 */,
		XML_RNGP_INTERLEAVE_NO_CONTENT /* 1048 */,
		XML_RNGP_INVALID_DEFINE_NAME /* 1049 */,
		XML_RNGP_INVALID_URI /* 1050 */,
		XML_RNGP_INVALID_VALUE /* 1051 */,
		XML_RNGP_MISSING_HREF /* 1052 */,
		XML_RNGP_NAME_MISSING /* 1053 */,
		XML_RNGP_NEED_COMBINE /* 1054 */,
		XML_RNGP_NOTALLOWED_NOT_EMPTY /* 1055 */,
		XML_RNGP_NSNAME_ATTR_ANCESTOR /* 1056 */,
		XML_RNGP_NSNAME_NO_NS /* 1057 */,
		XML_RNGP_PARAM_FORBIDDEN /* 1058 */,
		XML_RNGP_PARAM_NAME_MISSING /* 1059 */,
		XML_RNGP_PARENTREF_CREATE_FAILED /* 1060 */,
		XML_RNGP_PARENTREF_NAME_INVALID /* 1061 */,
		XML_RNGP_PARENTREF_NO_NAME /* 1062 */,
		XML_RNGP_PARENTREF_NO_PARENT /* 1063 */,
		XML_RNGP_PARENTREF_NOT_EMPTY /* 1064 */,
		XML_RNGP_PARSE_ERROR /* 1065 */,
		XML_RNGP_PAT_ANYNAME_EXCEPT_ANYNAME /* 1066 */,
		XML_RNGP_PAT_ATTR_ATTR /* 1067 */,
		XML_RNGP_PAT_ATTR_ELEM /* 1068 */,
		XML_RNGP_PAT_DATA_EXCEPT_ATTR /* 1069 */,
		XML_RNGP_PAT_DATA_EXCEPT_ELEM /* 1070 */,
		XML_RNGP_PAT_DATA_EXCEPT_EMPTY /* 1071 */,
		XML_RNGP_PAT_DATA_EXCEPT_GROUP /* 1072 */,
		XML_RNGP_PAT_DATA_EXCEPT_INTERLEAVE /* 1073 */,
		XML_RNGP_PAT_DATA_EXCEPT_LIST /* 1074 */,
		XML_RNGP_PAT_DATA_EXCEPT_ONEMORE /* 1075 */,
		XML_RNGP_PAT_DATA_EXCEPT_REF /* 1076 */,
		XML_RNGP_PAT_DATA_EXCEPT_TEXT /* 1077 */,
		XML_RNGP_PAT_LIST_ATTR /* 1078 */,
		XML_RNGP_PAT_LIST_ELEM /* 1079 */,
		XML_RNGP_PAT_LIST_INTERLEAVE /* 1080 */,
		XML_RNGP_PAT_LIST_LIST /* 1081 */,
		XML_RNGP_PAT_LIST_REF /* 1082 */,
		XML_RNGP_PAT_LIST_TEXT /* 1083 */,
		XML_RNGP_PAT_NSNAME_EXCEPT_ANYNAME /* 1084 */,
		XML_RNGP_PAT_NSNAME_EXCEPT_NSNAME /* 1085 */,
		XML_RNGP_PAT_ONEMORE_GROUP_ATTR /* 1086 */,
		XML_RNGP_PAT_ONEMORE_INTERLEAVE_ATTR /* 1087 */,
		XML_RNGP_PAT_START_ATTR /* 1088 */,
		XML_RNGP_PAT_START_DATA /* 1089 */,
		XML_RNGP_PAT_START_EMPTY /* 1090 */,
		XML_RNGP_PAT_START_GROUP /* 1091 */,
		XML_RNGP_PAT_START_INTERLEAVE /* 1092 */,
		XML_RNGP_PAT_START_LIST /* 1093 */,
		XML_RNGP_PAT_START_ONEMORE /* 1094 */,
		XML_RNGP_PAT_START_TEXT /* 1095 */,
		XML_RNGP_PAT_START_VALUE /* 1096 */,
		XML_RNGP_PREFIX_UNDEFINED /* 1097 */,
		XML_RNGP_REF_CREATE_FAILED /* 1098 */,
		XML_RNGP_REF_CYCLE /* 1099 */,
		XML_RNGP_REF_NAME_INVALID /* 1100 */,
		XML_RNGP_REF_NO_DEF /* 1101 */,
		XML_RNGP_REF_NO_NAME /* 1102 */,
		XML_RNGP_REF_NOT_EMPTY /* 1103 */,
		XML_RNGP_START_CHOICE_AND_INTERLEAVE /* 1104 */,
		XML_RNGP_START_CONTENT /* 1105 */,
		XML_RNGP_START_EMPTY /* 1106 */,
		XML_RNGP_START_MISSING /* 1107 */,
		XML_RNGP_TEXT_EXPECTED /* 1108 */,
		XML_RNGP_TEXT_HAS_CHILD /* 1109 */,
		XML_RNGP_TYPE_MISSING /* 1110 */,
		XML_RNGP_TYPE_NOT_FOUND /* 1111 */,
		XML_RNGP_TYPE_VALUE /* 1112 */,
		XML_RNGP_UNKNOWN_ATTRIBUTE /* 1113 */,
		XML_RNGP_UNKNOWN_COMBINE /* 1114 */,
		XML_RNGP_UNKNOWN_CONSTRUCT /* 1115 */,
		XML_RNGP_UNKNOWN_TYPE_LIB /* 1116 */,
		XML_RNGP_URI_FRAGMENT /* 1117 */,
		XML_RNGP_URI_NOT_ABSOLUTE /* 1118 */,
		XML_RNGP_VALUE_EMPTY /* 1119 */,
		XML_RNGP_VALUE_NO_CONTENT /* 1120 */,
		XML_RNGP_XMLNS_NAME /* 1121 */,
		XML_RNGP_XML_NS /* 1122 */,
		XML_XPATH_EXPRESSION_OK = 1200,
		XML_XPATH_NUMBER_ERROR /* 1201 */,
		XML_XPATH_UNFINISHED_LITERAL_ERROR /* 1202 */,
		XML_XPATH_START_LITERAL_ERROR /* 1203 */,
		XML_XPATH_VARIABLE_REF_ERROR /* 1204 */,
		XML_XPATH_UNDEF_VARIABLE_ERROR /* 1205 */,
		XML_XPATH_INVALID_PREDICATE_ERROR /* 1206 */,
		XML_XPATH_EXPR_ERROR /* 1207 */,
		XML_XPATH_UNCLOSED_ERROR /* 1208 */,
		XML_XPATH_UNKNOWN_FUNC_ERROR /* 1209 */,
		XML_XPATH_INVALID_OPERAND /* 1210 */,
		XML_XPATH_INVALID_TYPE /* 1211 */,
		XML_XPATH_INVALID_ARITY /* 1212 */,
		XML_XPATH_INVALID_CTXT_SIZE /* 1213 */,
		XML_XPATH_INVALID_CTXT_POSITION /* 1214 */,
		XML_XPATH_MEMORY_ERROR /* 1215 */,
		XML_XPTR_SYNTAX_ERROR /* 1216 */,
		XML_XPTR_RESOURCE_ERROR /* 1217 */,
		XML_XPTR_SUB_RESOURCE_ERROR /* 1218 */,
		XML_XPATH_UNDEF_PREFIX_ERROR /* 1219 */,
		XML_XPATH_ENCODING_ERROR /* 1220 */,
		XML_XPATH_INVALID_CHAR_ERROR /* 1221 */,
		XML_TREE_INVALID_HEX = 1300,
		XML_TREE_INVALID_DEC /* 1301 */,
		XML_TREE_UNTERMINATED_ENTITY /* 1302 */,
		XML_TREE_NOT_UTF8 /* 1303 */,
		XML_SAVE_NOT_UTF8 = 1400,
		XML_SAVE_CHAR_INVALID /* 1401 */,
		XML_SAVE_NO_DOCTYPE /* 1402 */,
		XML_SAVE_UNKNOWN_ENCODING /* 1403 */,
		XML_REGEXP_COMPILE_ERROR = 1450,
		XML_IO_UNKNOWN = 1500,
		XML_IO_EACCES /* 1501 */,
		XML_IO_EAGAIN /* 1502 */,
		XML_IO_EBADF /* 1503 */,
		XML_IO_EBADMSG /* 1504 */,
		XML_IO_EBUSY /* 1505 */,
		XML_IO_ECANCELED /* 1506 */,
		XML_IO_ECHILD /* 1507 */,
		XML_IO_EDEADLK /* 1508 */,
		XML_IO_EDOM /* 1509 */,
		XML_IO_EEXIST /* 1510 */,
		XML_IO_EFAULT /* 1511 */,
		XML_IO_EFBIG /* 1512 */,
		XML_IO_EINPROGRESS /* 1513 */,
		XML_IO_EINTR /* 1514 */,
		XML_IO_EINVAL /* 1515 */,
		XML_IO_EIO /* 1516 */,
		XML_IO_EISDIR /* 1517 */,
		XML_IO_EMFILE /* 1518 */,
		XML_IO_EMLINK /* 1519 */,
		XML_IO_EMSGSIZE /* 1520 */,
		XML_IO_ENAMETOOLONG /* 1521 */,
		XML_IO_ENFILE /* 1522 */,
		XML_IO_ENODEV /* 1523 */,
		XML_IO_ENOENT /* 1524 */,
		XML_IO_ENOEXEC /* 1525 */,
		XML_IO_ENOLCK /* 1526 */,
		XML_IO_ENOMEM /* 1527 */,
		XML_IO_ENOSPC /* 1528 */,
		XML_IO_ENOSYS /* 1529 */,
		XML_IO_ENOTDIR /* 1530 */,
		XML_IO_ENOTEMPTY /* 1531 */,
		XML_IO_ENOTSUP /* 1532 */,
		XML_IO_ENOTTY /* 1533 */,
		XML_IO_ENXIO /* 1534 */,
		XML_IO_EPERM /* 1535 */,
		XML_IO_EPIPE /* 1536 */,
		XML_IO_ERANGE /* 1537 */,
		XML_IO_EROFS /* 1538 */,
		XML_IO_ESPIPE /* 1539 */,
		XML_IO_ESRCH /* 1540 */,
		XML_IO_ETIMEDOUT /* 1541 */,
		XML_IO_EXDEV /* 1542 */,
		XML_IO_NETWORK_ATTEMPT /* 1543 */,
		XML_IO_ENCODER /* 1544 */,
		XML_IO_FLUSH /* 1545 */,
		XML_IO_WRITE /* 1546 */,
		XML_IO_NO_INPUT /* 1547 */,
		XML_IO_BUFFER_FULL /* 1548 */,
		XML_IO_LOAD_ERROR /* 1549 */,
		XML_IO_ENOTSOCK /* 1550 */,
		XML_IO_EISCONN /* 1551 */,
		XML_IO_ECONNREFUSED /* 1552 */,
		XML_IO_ENETUNREACH /* 1553 */,
		XML_IO_EADDRINUSE /* 1554 */,
		XML_IO_EALREADY /* 1555 */,
		XML_IO_EAFNOSUPPORT /* 1556 */,
		XML_XINCLUDE_RECURSION = 1600,
		XML_XINCLUDE_PARSE_VALUE /* 1601 */,
		XML_XINCLUDE_ENTITY_DEF_MISMATCH /* 1602 */,
		XML_XINCLUDE_NO_HREF /* 1603 */,
		XML_XINCLUDE_NO_FALLBACK /* 1604 */,
		XML_XINCLUDE_HREF_URI /* 1605 */,
		XML_XINCLUDE_TEXT_FRAGMENT /* 1606 */,
		XML_XINCLUDE_TEXT_DOCUMENT /* 1607 */,
		XML_XINCLUDE_INVALID_CHAR /* 1608 */,
		XML_XINCLUDE_BUILD_FAILED /* 1609 */,
		XML_XINCLUDE_UNKNOWN_ENCODING /* 1610 */,
		XML_XINCLUDE_MULTIPLE_ROOT /* 1611 */,
		XML_XINCLUDE_XPTR_FAILED /* 1612 */,
		XML_XINCLUDE_XPTR_RESULT /* 1613 */,
		XML_XINCLUDE_INCLUDE_IN_INCLUDE /* 1614 */,
		XML_XINCLUDE_FALLBACKS_IN_INCLUDE /* 1615 */,
		XML_XINCLUDE_FALLBACK_NOT_IN_INCLUDE /* 1616 */,
		XML_XINCLUDE_DEPRECATED_NS /* 1617 */,
		XML_XINCLUDE_FRAGMENT_ID /* 1618 */,
		XML_CATALOG_MISSING_ATTR = 1650,
		XML_CATALOG_ENTRY_BROKEN /* 1651 */,
		XML_CATALOG_PREFER_VALUE /* 1652 */,
		XML_CATALOG_NOT_CATALOG /* 1653 */,
		XML_CATALOG_RECURSION /* 1654 */,
		XML_SCHEMAP_PREFIX_UNDEFINED = 1700,
		XML_SCHEMAP_ATTRFORMDEFAULT_VALUE /* 1701 */,
		XML_SCHEMAP_ATTRGRP_NONAME_NOREF /* 1702 */,
		XML_SCHEMAP_ATTR_NONAME_NOREF /* 1703 */,
		XML_SCHEMAP_COMPLEXTYPE_NONAME_NOREF /* 1704 */,
		XML_SCHEMAP_ELEMFORMDEFAULT_VALUE /* 1705 */,
		XML_SCHEMAP_ELEM_NONAME_NOREF /* 1706 */,
		XML_SCHEMAP_EXTENSION_NO_BASE /* 1707 */,
		XML_SCHEMAP_FACET_NO_VALUE /* 1708 */,
		XML_SCHEMAP_FAILED_BUILD_IMPORT /* 1709 */,
		XML_SCHEMAP_GROUP_NONAME_NOREF /* 1710 */,
		XML_SCHEMAP_IMPORT_NAMESPACE_NOT_URI /* 1711 */,
		XML_SCHEMAP_IMPORT_REDEFINE_NSNAME /* 1712 */,
		XML_SCHEMAP_IMPORT_SCHEMA_NOT_URI /* 1713 */,
		XML_SCHEMAP_INVALID_BOOLEAN /* 1714 */,
		XML_SCHEMAP_INVALID_ENUM /* 1715 */,
		XML_SCHEMAP_INVALID_FACET /* 1716 */,
		XML_SCHEMAP_INVALID_FACET_VALUE /* 1717 */,
		XML_SCHEMAP_INVALID_MAXOCCURS /* 1718 */,
		XML_SCHEMAP_INVALID_MINOCCURS /* 1719 */,
		XML_SCHEMAP_INVALID_REF_AND_SUBTYPE /* 1720 */,
		XML_SCHEMAP_INVALID_WHITE_SPACE /* 1721 */,
		XML_SCHEMAP_NOATTR_NOREF /* 1722 */,
		XML_SCHEMAP_NOTATION_NO_NAME /* 1723 */,
		XML_SCHEMAP_NOTYPE_NOREF /* 1724 */,
		XML_SCHEMAP_REF_AND_SUBTYPE /* 1725 */,
		XML_SCHEMAP_RESTRICTION_NONAME_NOREF /* 1726 */,
		XML_SCHEMAP_SIMPLETYPE_NONAME /* 1727 */,
		XML_SCHEMAP_TYPE_AND_SUBTYPE /* 1728 */,
		XML_SCHEMAP_UNKNOWN_ALL_CHILD /* 1729 */,
		XML_SCHEMAP_UNKNOWN_ANYATTRIBUTE_CHILD /* 1730 */,
		XML_SCHEMAP_UNKNOWN_ATTR_CHILD /* 1731 */,
		XML_SCHEMAP_UNKNOWN_ATTRGRP_CHILD /* 1732 */,
		XML_SCHEMAP_UNKNOWN_ATTRIBUTE_GROUP /* 1733 */,
		XML_SCHEMAP_UNKNOWN_BASE_TYPE /* 1734 */,
		XML_SCHEMAP_UNKNOWN_CHOICE_CHILD /* 1735 */,
		XML_SCHEMAP_UNKNOWN_COMPLEXCONTENT_CHILD /* 1736 */,
		XML_SCHEMAP_UNKNOWN_COMPLEXTYPE_CHILD /* 1737 */,
		XML_SCHEMAP_UNKNOWN_ELEM_CHILD /* 1738 */,
		XML_SCHEMAP_UNKNOWN_EXTENSION_CHILD /* 1739 */,
		XML_SCHEMAP_UNKNOWN_FACET_CHILD /* 1740 */,
		XML_SCHEMAP_UNKNOWN_FACET_TYPE /* 1741 */,
		XML_SCHEMAP_UNKNOWN_GROUP_CHILD /* 1742 */,
		XML_SCHEMAP_UNKNOWN_IMPORT_CHILD /* 1743 */,
		XML_SCHEMAP_UNKNOWN_LIST_CHILD /* 1744 */,
		XML_SCHEMAP_UNKNOWN_NOTATION_CHILD /* 1745 */,
		XML_SCHEMAP_UNKNOWN_PROCESSCONTENT_CHILD /* 1746 */,
		XML_SCHEMAP_UNKNOWN_REF /* 1747 */,
		XML_SCHEMAP_UNKNOWN_RESTRICTION_CHILD /* 1748 */,
		XML_SCHEMAP_UNKNOWN_SCHEMAS_CHILD /* 1749 */,
		XML_SCHEMAP_UNKNOWN_SEQUENCE_CHILD /* 1750 */,
		XML_SCHEMAP_UNKNOWN_SIMPLECONTENT_CHILD /* 1751 */,
		XML_SCHEMAP_UNKNOWN_SIMPLETYPE_CHILD /* 1752 */,
		XML_SCHEMAP_UNKNOWN_TYPE /* 1753 */,
		XML_SCHEMAP_UNKNOWN_UNION_CHILD /* 1754 */,
		XML_SCHEMAP_ELEM_DEFAULT_FIXED /* 1755 */,
		XML_SCHEMAP_REGEXP_INVALID /* 1756 */,
		XML_SCHEMAP_FAILED_LOAD /* 1757 */,
		XML_SCHEMAP_NOTHING_TO_PARSE /* 1758 */,
		XML_SCHEMAP_NOROOT /* 1759 */,
		XML_SCHEMAP_REDEFINED_GROUP /* 1760 */,
		XML_SCHEMAP_REDEFINED_TYPE /* 1761 */,
		XML_SCHEMAP_REDEFINED_ELEMENT /* 1762 */,
		XML_SCHEMAP_REDEFINED_ATTRGROUP /* 1763 */,
		XML_SCHEMAP_REDEFINED_ATTR /* 1764 */,
		XML_SCHEMAP_REDEFINED_NOTATION /* 1765 */,
		XML_SCHEMAP_FAILED_PARSE /* 1766 */,
		XML_SCHEMAP_UNKNOWN_PREFIX /* 1767 */,
		XML_SCHEMAP_DEF_AND_PREFIX /* 1768 */,
		XML_SCHEMAP_UNKNOWN_INCLUDE_CHILD /* 1769 */,
		XML_SCHEMAP_INCLUDE_SCHEMA_NOT_URI /* 1770 */,
		XML_SCHEMAP_INCLUDE_SCHEMA_NO_URI /* 1771 */,
		XML_SCHEMAP_NOT_SCHEMA /* 1772 */,
		XML_SCHEMAP_UNKNOWN_MEMBER_TYPE /* 1773 */,
		XML_SCHEMAP_INVALID_ATTR_USE /* 1774 */,
		XML_SCHEMAP_RECURSIVE /* 1775 */,
		XML_SCHEMAP_SUPERNUMEROUS_LIST_ITEM_TYPE /* 1776 */,
		XML_SCHEMAP_INVALID_ATTR_COMBINATION /* 1777 */,
		XML_SCHEMAP_INVALID_ATTR_INLINE_COMBINATION /* 1778 */,
		XML_SCHEMAP_MISSING_SIMPLETYPE_CHILD /* 1779 */,
		XML_SCHEMAP_INVALID_ATTR_NAME /* 1780 */,
		XML_SCHEMAP_REF_AND_CONTENT /* 1781 */,
		XML_SCHEMAP_CT_PROPS_CORRECT_1 /* 1782 */,
		XML_SCHEMAP_CT_PROPS_CORRECT_2 /* 1783 */,
		XML_SCHEMAP_CT_PROPS_CORRECT_3 /* 1784 */,
		XML_SCHEMAP_CT_PROPS_CORRECT_4 /* 1785 */,
		XML_SCHEMAP_CT_PROPS_CORRECT_5 /* 1786 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_1 /* 1787 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_1 /* 1788 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_2 /* 1789 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_2 /* 1790 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_3 /* 1791 */,
		XML_SCHEMAP_WILDCARD_INVALID_NS_MEMBER /* 1792 */,
		XML_SCHEMAP_INTERSECTION_NOT_EXPRESSIBLE /* 1793 */,
		XML_SCHEMAP_UNION_NOT_EXPRESSIBLE /* 1794 */,
		XML_SCHEMAP_SRC_IMPORT_3_1 /* 1795 */,
		XML_SCHEMAP_SRC_IMPORT_3_2 /* 1796 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_1 /* 1797 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_2 /* 1798 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_3 /* 1799 */,
		XML_SCHEMAP_COS_CT_EXTENDS_1_3 /* 1800 */,
		XML_SCHEMAV_NOROOT = 1801,
		XML_SCHEMAV_UNDECLAREDELEM /* 1802 */,
		XML_SCHEMAV_NOTTOPLEVEL /* 1803 */,
		XML_SCHEMAV_MISSING /* 1804 */,
		XML_SCHEMAV_WRONGELEM /* 1805 */,
		XML_SCHEMAV_NOTYPE /* 1806 */,
		XML_SCHEMAV_NOROLLBACK /* 1807 */,
		XML_SCHEMAV_ISABSTRACT /* 1808 */,
		XML_SCHEMAV_NOTEMPTY /* 1809 */,
		XML_SCHEMAV_ELEMCONT /* 1810 */,
		XML_SCHEMAV_HAVEDEFAULT /* 1811 */,
		XML_SCHEMAV_NOTNILLABLE /* 1812 */,
		XML_SCHEMAV_EXTRACONTENT /* 1813 */,
		XML_SCHEMAV_INVALIDATTR /* 1814 */,
		XML_SCHEMAV_INVALIDELEM /* 1815 */,
		XML_SCHEMAV_NOTDETERMINIST /* 1816 */,
		XML_SCHEMAV_CONSTRUCT /* 1817 */,
		XML_SCHEMAV_INTERNAL /* 1818 */,
		XML_SCHEMAV_NOTSIMPLE /* 1819 */,
		XML_SCHEMAV_ATTRUNKNOWN /* 1820 */,
		XML_SCHEMAV_ATTRINVALID /* 1821 */,
		XML_SCHEMAV_VALUE /* 1822 */,
		XML_SCHEMAV_FACET /* 1823 */,
		XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_1 /* 1824 */,
		XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_2 /* 1825 */,
		XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_3 /* 1826 */,
		XML_SCHEMAV_CVC_TYPE_3_1_1 /* 1827 */,
		XML_SCHEMAV_CVC_TYPE_3_1_2 /* 1828 */,
		XML_SCHEMAV_CVC_FACET_VALID /* 1829 */,
		XML_SCHEMAV_CVC_LENGTH_VALID /* 1830 */,
		XML_SCHEMAV_CVC_MINLENGTH_VALID /* 1831 */,
		XML_SCHEMAV_CVC_MAXLENGTH_VALID /* 1832 */,
		XML_SCHEMAV_CVC_MININCLUSIVE_VALID /* 1833 */,
		XML_SCHEMAV_CVC_MAXINCLUSIVE_VALID /* 1834 */,
		XML_SCHEMAV_CVC_MINEXCLUSIVE_VALID /* 1835 */,
		XML_SCHEMAV_CVC_MAXEXCLUSIVE_VALID /* 1836 */,
		XML_SCHEMAV_CVC_TOTALDIGITS_VALID /* 1837 */,
		XML_SCHEMAV_CVC_FRACTIONDIGITS_VALID /* 1838 */,
		XML_SCHEMAV_CVC_PATTERN_VALID /* 1839 */,
		XML_SCHEMAV_CVC_ENUMERATION_VALID /* 1840 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_2_1 /* 1841 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_2_2 /* 1842 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_2_3 /* 1843 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_2_4 /* 1844 */,
		XML_SCHEMAV_CVC_ELT_1 /* 1845 */,
		XML_SCHEMAV_CVC_ELT_2 /* 1846 */,
		XML_SCHEMAV_CVC_ELT_3_1 /* 1847 */,
		XML_SCHEMAV_CVC_ELT_3_2_1 /* 1848 */,
		XML_SCHEMAV_CVC_ELT_3_2_2 /* 1849 */,
		XML_SCHEMAV_CVC_ELT_4_1 /* 1850 */,
		XML_SCHEMAV_CVC_ELT_4_2 /* 1851 */,
		XML_SCHEMAV_CVC_ELT_4_3 /* 1852 */,
		XML_SCHEMAV_CVC_ELT_5_1_1 /* 1853 */,
		XML_SCHEMAV_CVC_ELT_5_1_2 /* 1854 */,
		XML_SCHEMAV_CVC_ELT_5_2_1 /* 1855 */,
		XML_SCHEMAV_CVC_ELT_5_2_2_1 /* 1856 */,
		XML_SCHEMAV_CVC_ELT_5_2_2_2_1 /* 1857 */,
		XML_SCHEMAV_CVC_ELT_5_2_2_2_2 /* 1858 */,
		XML_SCHEMAV_CVC_ELT_6 /* 1859 */,
		XML_SCHEMAV_CVC_ELT_7 /* 1860 */,
		XML_SCHEMAV_CVC_ATTRIBUTE_1 /* 1861 */,
		XML_SCHEMAV_CVC_ATTRIBUTE_2 /* 1862 */,
		XML_SCHEMAV_CVC_ATTRIBUTE_3 /* 1863 */,
		XML_SCHEMAV_CVC_ATTRIBUTE_4 /* 1864 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_3_1 /* 1865 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_1 /* 1866 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_2 /* 1867 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_4 /* 1868 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_5_1 /* 1869 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_5_2 /* 1870 */,
		XML_SCHEMAV_ELEMENT_CONTENT /* 1871 */,
		XML_SCHEMAV_DOCUMENT_ELEMENT_MISSING /* 1872 */,
		XML_SCHEMAV_CVC_COMPLEX_TYPE_1 /* 1873 */,
		XML_SCHEMAV_CVC_AU /* 1874 */,
		XML_SCHEMAV_CVC_TYPE_1 /* 1875 */,
		XML_SCHEMAV_CVC_TYPE_2 /* 1876 */,
		XML_SCHEMAV_CVC_IDC /* 1877 */,
		XML_SCHEMAV_CVC_WILDCARD /* 1878 */,
		XML_SCHEMAV_MISC /* 1879 */,
		XML_XPTR_UNKNOWN_SCHEME = 1900,
		XML_XPTR_CHILDSEQ_START /* 1901 */,
		XML_XPTR_EVAL_FAILED /* 1902 */,
		XML_XPTR_EXTRA_OBJECTS /* 1903 */,
		XML_C14N_CREATE_CTXT = 1950,
		XML_C14N_REQUIRES_UTF8 /* 1951 */,
		XML_C14N_CREATE_STACK /* 1952 */,
		XML_C14N_INVALID_NODE /* 1953 */,
		XML_C14N_UNKNOW_NODE /* 1954 */,
		XML_C14N_RELATIVE_NAMESPACE /* 1955 */,
		XML_FTP_PASV_ANSWER = 2000,
		XML_FTP_EPSV_ANSWER /* 2001 */,
		XML_FTP_ACCNT /* 2002 */,
		XML_FTP_URL_SYNTAX /* 2003 */,
		XML_HTTP_URL_SYNTAX = 2020,
		XML_HTTP_USE_IP /* 2021 */,
		XML_HTTP_UNKNOWN_HOST /* 2022 */,
		XML_SCHEMAP_SRC_SIMPLE_TYPE_1 = 3000,
		XML_SCHEMAP_SRC_SIMPLE_TYPE_2 /* 3001 */,
		XML_SCHEMAP_SRC_SIMPLE_TYPE_3 /* 3002 */,
		XML_SCHEMAP_SRC_SIMPLE_TYPE_4 /* 3003 */,
		XML_SCHEMAP_SRC_RESOLVE /* 3004 */,
		XML_SCHEMAP_SRC_RESTRICTION_BASE_OR_SIMPLETYPE /* 3005 */,
		XML_SCHEMAP_SRC_LIST_ITEMTYPE_OR_SIMPLETYPE /* 3006 */,
		XML_SCHEMAP_SRC_UNION_MEMBERTYPES_OR_SIMPLETYPES /* 3007 */,
		XML_SCHEMAP_ST_PROPS_CORRECT_1 /* 3008 */,
		XML_SCHEMAP_ST_PROPS_CORRECT_2 /* 3009 */,
		XML_SCHEMAP_ST_PROPS_CORRECT_3 /* 3010 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_1_1 /* 3011 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_1_2 /* 3012 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_1_3_1 /* 3013 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_1_3_2 /* 3014 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_1 /* 3015 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_1 /* 3016 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_2 /* 3017 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_1 /* 3018 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_2 /* 3019 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_3 /* 3020 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_4 /* 3021 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_5 /* 3022 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_1 /* 3023 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1 /* 3024 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1_2 /* 3025 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_2 /* 3026 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_1 /* 3027 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_3 /* 3028 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_4 /* 3029 */,
		XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_5 /* 3030 */,
		XML_SCHEMAP_COS_ST_DERIVED_OK_2_1 /* 3031 */,
		XML_SCHEMAP_COS_ST_DERIVED_OK_2_2 /* 3032 */,
		XML_SCHEMAP_S4S_ELEM_NOT_ALLOWED /* 3033 */,
		XML_SCHEMAP_S4S_ELEM_MISSING /* 3034 */,
		XML_SCHEMAP_S4S_ATTR_NOT_ALLOWED /* 3035 */,
		XML_SCHEMAP_S4S_ATTR_MISSING /* 3036 */,
		XML_SCHEMAP_S4S_ATTR_INVALID_VALUE /* 3037 */,
		XML_SCHEMAP_SRC_ELEMENT_1 /* 3038 */,
		XML_SCHEMAP_SRC_ELEMENT_2_1 /* 3039 */,
		XML_SCHEMAP_SRC_ELEMENT_2_2 /* 3040 */,
		XML_SCHEMAP_SRC_ELEMENT_3 /* 3041 */,
		XML_SCHEMAP_P_PROPS_CORRECT_1 /* 3042 */,
		XML_SCHEMAP_P_PROPS_CORRECT_2_1 /* 3043 */,
		XML_SCHEMAP_P_PROPS_CORRECT_2_2 /* 3044 */,
		XML_SCHEMAP_E_PROPS_CORRECT_2 /* 3045 */,
		XML_SCHEMAP_E_PROPS_CORRECT_3 /* 3046 */,
		XML_SCHEMAP_E_PROPS_CORRECT_4 /* 3047 */,
		XML_SCHEMAP_E_PROPS_CORRECT_5 /* 3048 */,
		XML_SCHEMAP_E_PROPS_CORRECT_6 /* 3049 */,
		XML_SCHEMAP_SRC_INCLUDE /* 3050 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_1 /* 3051 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_2 /* 3052 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_3_1 /* 3053 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_3_2 /* 3054 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_4 /* 3055 */,
		XML_SCHEMAP_NO_XMLNS /* 3056 */,
		XML_SCHEMAP_NO_XSI /* 3057 */,
		XML_SCHEMAP_COS_VALID_DEFAULT_1 /* 3058 */,
		XML_SCHEMAP_COS_VALID_DEFAULT_2_1 /* 3059 */,
		XML_SCHEMAP_COS_VALID_DEFAULT_2_2_1 /* 3060 */,
		XML_SCHEMAP_COS_VALID_DEFAULT_2_2_2 /* 3061 */,
		XML_SCHEMAP_CVC_SIMPLE_TYPE /* 3062 */,
		XML_SCHEMAP_COS_CT_EXTENDS_1_1 /* 3063 */,
		XML_SCHEMAP_SRC_IMPORT_1_1 /* 3064 */,
		XML_SCHEMAP_SRC_IMPORT_1_2 /* 3065 */,
		XML_SCHEMAP_SRC_IMPORT_2 /* 3066 */,
		XML_SCHEMAP_SRC_IMPORT_2_1 /* 3067 */,
		XML_SCHEMAP_SRC_IMPORT_2_2 /* 3068 */,
		XML_SCHEMAP_INTERNAL /* 3069 non-W3C */,
		XML_SCHEMAP_NOT_DETERMINISTIC /* 3070 non-W3C */,
		XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_1 /* 3071 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_2 /* 3072 */,
		XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_3 /* 3073 */,
		XML_SCHEMAP_MG_PROPS_CORRECT_1 /* 3074 */,
		XML_SCHEMAP_MG_PROPS_CORRECT_2 /* 3075 */,
		XML_SCHEMAP_SRC_CT_1 /* 3076 */,
		XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_3 /* 3077 */,
		XML_SCHEMAP_AU_PROPS_CORRECT_2 /* 3078 */,
		XML_SCHEMAP_A_PROPS_CORRECT_2 /* 3079 */,
		XML_SCHEMAP_C_PROPS_CORRECT /* 3080 */,
		XML_SCHEMAP_SRC_REDEFINE /* 3081 */,
		XML_SCHEMAP_SRC_IMPORT /* 3082 */,
		XML_SCHEMAP_WARN_SKIP_SCHEMA /* 3083 */,
		XML_SCHEMAP_WARN_UNLOCATED_SCHEMA /* 3084 */,
		XML_SCHEMAP_WARN_ATTR_REDECL_PROH /* 3085 */,
		XML_SCHEMAP_WARN_ATTR_POINTLESS_PROH /* 3085 */,
		XML_SCHEMAP_AG_PROPS_CORRECT /* 3086 */,
		XML_SCHEMAP_COS_CT_EXTENDS_1_2 /* 3087 */,
		XML_SCHEMAP_AU_PROPS_CORRECT /* 3088 */,
		XML_SCHEMAP_A_PROPS_CORRECT_3 /* 3089 */,
		XML_SCHEMAP_COS_ALL_LIMITED /* 3090 */,
		XML_SCHEMATRONV_ASSERT = 4000 /* 4000 */,
		XML_SCHEMATRONV_REPORT,
		XML_MODULE_OPEN = 4900 /* 4900 */,
		XML_MODULE_CLOSE /* 4901 */,
		XML_CHECK_FOUND_ELEMENT = 5000,
		XML_CHECK_FOUND_ATTRIBUTE /* 5001 */,
		XML_CHECK_FOUND_TEXT /* 5002 */,
		XML_CHECK_FOUND_CDATA /* 5003 */,
		XML_CHECK_FOUND_ENTITYREF /* 5004 */,
		XML_CHECK_FOUND_ENTITY /* 5005 */,
		XML_CHECK_FOUND_PI /* 5006 */,
		XML_CHECK_FOUND_COMMENT /* 5007 */,
		XML_CHECK_FOUND_DOCTYPE /* 5008 */,
		XML_CHECK_FOUND_FRAGMENT /* 5009 */,
		XML_CHECK_FOUND_NOTATION /* 5010 */,
		XML_CHECK_UNKNOWN_NODE /* 5011 */,
		XML_CHECK_ENTITY_TYPE /* 5012 */,
		XML_CHECK_NO_PARENT /* 5013 */,
		XML_CHECK_NO_DOC /* 5014 */,
		XML_CHECK_NO_NAME /* 5015 */,
		XML_CHECK_NO_ELEM /* 5016 */,
		XML_CHECK_WRONG_DOC /* 5017 */,
		XML_CHECK_NO_PREV /* 5018 */,
		XML_CHECK_WRONG_PREV /* 5019 */,
		XML_CHECK_NO_NEXT /* 5020 */,
		XML_CHECK_WRONG_NEXT /* 5021 */,
		XML_CHECK_NOT_DTD /* 5022 */,
		XML_CHECK_NOT_ATTR /* 5023 */,
		XML_CHECK_NOT_ATTR_DECL /* 5024 */,
		XML_CHECK_NOT_ELEM_DECL /* 5025 */,
		XML_CHECK_NOT_ENTITY_DECL /* 5026 */,
		XML_CHECK_NOT_NS_DECL /* 5027 */,
		XML_CHECK_NO_HREF /* 5028 */,
		XML_CHECK_WRONG_PARENT /* 5029 */,
		XML_CHECK_NS_SCOPE /* 5030 */,
		XML_CHECK_NS_ANCESTOR /* 5031 */,
		XML_CHECK_NOT_UTF8 /* 5032 */,
		XML_CHECK_NO_DICT /* 5033 */,
		XML_CHECK_NOT_NCNAME /* 5034 */,
		XML_CHECK_OUTSIDE_DICT /* 5035 */,
		XML_CHECK_WRONG_NAME /* 5036 */,
		XML_CHECK_NAME_NOT_NULL /* 5037 */,
		XML_I18N_NO_NAME = 6000,
		XML_I18N_NO_HANDLER /* 6001 */,
		XML_I18N_EXCESS_HANDLER /* 6002 */,
		XML_I18N_CONV_FAILED /* 6003 */,
		XML_I18N_NO_OUTPUT /* 6004 */
	} xmlParserErrors;
	/**
	 * xmlGenericErrorFunc:<br>
	 * @ctx:  a parsing context<br>
	 * @msg:  the message<br>
	 * @...:  the extra arguments of the varags to format the message<br>
	 * * Signature of the function to use when there is an error and<br>
	 * no parsing or validity context available .
	 */
	typedef void (*xmlGenericErrorFunc)(void* ctx, const char* msg, ...) xmlGenericErrorFunc;
	/**
	 * xmlStructuredErrorFunc:<br>
	 * @userData:  user provided data for the error callback<br>
	 * @error:  the error being raised.<br>
	 * * Signature of the function to use when there is an error and<br>
	 * the module handles the new error reporting mechanism.
	 */
	typedef void (*xmlStructuredErrorFunc)(void* userData, xmlErrorPtr error) xmlStructuredErrorFunc;
	/**
	 * Use the following function to reset the two global variables<br>
	 * xmlGenericError and xmlGenericErrorContext.<br>
	 * Original signature : <code>void xmlSetGenericErrorFunc(void*, xmlGenericErrorFunc)</code>
	 */
	void xmlSetGenericErrorFunc(void* ctx, xmlGenericErrorFunc handler);
	/** Original signature : <code>void initGenericErrorDefaultFunc(xmlGenericErrorFunc*)</code> */
	void initGenericErrorDefaultFunc(xmlGenericErrorFunc* handler);
	/** Original signature : <code>void xmlSetStructuredErrorFunc(void*, xmlStructuredErrorFunc)</code> */
	void xmlSetStructuredErrorFunc(void* ctx, xmlStructuredErrorFunc handler);
	/**
	 * Default message routines used by SAX and Valid context for error<br>
	 * and warning reporting.<br>
	 * Original signature : <code>void xmlParserError(void*, const char*, null)</code>
	 */
	void xmlParserError(void* ctx, const char* msg, ...);
	/** Original signature : <code>void xmlParserWarning(void*, const char*, null)</code> */
	void xmlParserWarning(void* ctx, const char* msg, ...);
	/** Original signature : <code>void xmlParserValidityError(void*, const char*, null)</code> */
	void xmlParserValidityError(void* ctx, const char* msg, ...);
	/** Original signature : <code>void xmlParserValidityWarning(void*, const char*, null)</code> */
	void xmlParserValidityWarning(void* ctx, const char* msg, ...);
	/** Original signature : <code>void xmlParserPrintFileInfo(xmlParserInputPtr)</code> */
	void xmlParserPrintFileInfo(xmlParserInputPtr input);
	/** Original signature : <code>void xmlParserPrintFileContext(xmlParserInputPtr)</code> */
	void xmlParserPrintFileContext(xmlParserInputPtr input);
	/**
	 * Extended error information routines<br>
	 * Original signature : <code>xmlErrorPtr xmlGetLastError()</code>
	 */
	xmlErrorPtr xmlGetLastError();
	/** Original signature : <code>void xmlResetLastError()</code> */
	void xmlResetLastError();
	/** Original signature : <code>xmlErrorPtr xmlCtxtGetLastError(void*)</code> */
	xmlErrorPtr xmlCtxtGetLastError(void* ctx);
	/** Original signature : <code>void xmlCtxtResetLastError(void*)</code> */
	void xmlCtxtResetLastError(void* ctx);
	/** Original signature : <code>void xmlResetError(xmlErrorPtr)</code> */
	void xmlResetError(xmlErrorPtr err);
	/** Original signature : <code>int xmlCopyError(xmlErrorPtr, xmlErrorPtr)</code> */
	int xmlCopyError(xmlErrorPtr from, xmlErrorPtr to);
}



extern ""C"" {
typedef _xmlLink xmlLink;
	typedef xmlLink* xmlLinkPtr;
	typedef _xmlList xmlList;
	typedef xmlList* xmlListPtr;
	/**
	 * xmlListDeallocator:<br>
	 * @lk:  the data to deallocate<br>
	 * * Callback function used to free data from a list.
	 */
	typedef void (*xmlListDeallocator)(xmlLinkPtr lk) xmlListDeallocator;
	/**
	 * xmlListDataCompare:<br>
	 * @data0: the first data<br>
	 * @data1: the second data<br>
	 * * Callback function used to compare 2 data.<br>
	 * * Returns 0 is equality, -1 or 1 otherwise depending on the ordering.
	 */
	typedef int (*xmlListDataCompare)(const void* data0, const void* data1) xmlListDataCompare;
	/**
	 * xmlListWalker:<br>
	 * @data: the data found in the list<br>
	 * @user: extra user provided data to the walker<br>
	 * * Callback function used when walking a list with xmlListWalk().<br>
	 * * Returns 0 to stop walking the list, 1 otherwise.
	 */
	typedef int (*xmlListWalker)(const void* data, const void* user) xmlListWalker;
	/**
	 * Creation/Deletion<br>
	 * Original signature : <code>xmlListPtr xmlListCreate(xmlListDeallocator, xmlListDataCompare)</code>
	 */
	xmlListPtr xmlListCreate(xmlListDeallocator deallocator, xmlListDataCompare compare);
	/** Original signature : <code>void xmlListDelete(xmlListPtr)</code> */
	void xmlListDelete(xmlListPtr l);
	/**
	 * Basic Operators<br>
	 * Original signature : <code>void* xmlListSearch(xmlListPtr, void*)</code>
	 */
	void* xmlListSearch(xmlListPtr l, void* data);
	/** Original signature : <code>void* xmlListReverseSearch(xmlListPtr, void*)</code> */
	void* xmlListReverseSearch(xmlListPtr l, void* data);
	/** Original signature : <code>int xmlListInsert(xmlListPtr, void*)</code> */
	int xmlListInsert(xmlListPtr l, void* data);
	/** Original signature : <code>int xmlListAppend(xmlListPtr, void*)</code> */
	int xmlListAppend(xmlListPtr l, void* data);
	/** Original signature : <code>int xmlListRemoveFirst(xmlListPtr, void*)</code> */
	int xmlListRemoveFirst(xmlListPtr l, void* data);
	/** Original signature : <code>int xmlListRemoveLast(xmlListPtr, void*)</code> */
	int xmlListRemoveLast(xmlListPtr l, void* data);
	/** Original signature : <code>int xmlListRemoveAll(xmlListPtr, void*)</code> */
	int xmlListRemoveAll(xmlListPtr l, void* data);
	/** Original signature : <code>void xmlListClear(xmlListPtr)</code> */
	void xmlListClear(xmlListPtr l);
	/** Original signature : <code>int xmlListEmpty(xmlListPtr)</code> */
	int xmlListEmpty(xmlListPtr l);
	/** Original signature : <code>xmlLinkPtr xmlListFront(xmlListPtr)</code> */
	xmlLinkPtr xmlListFront(xmlListPtr l);
	/** Original signature : <code>xmlLinkPtr xmlListEnd(xmlListPtr)</code> */
	xmlLinkPtr xmlListEnd(xmlListPtr l);
	/** Original signature : <code>int xmlListSize(xmlListPtr)</code> */
	int xmlListSize(xmlListPtr l);
	/** Original signature : <code>void xmlListPopFront(xmlListPtr)</code> */
	void xmlListPopFront(xmlListPtr l);
	/** Original signature : <code>void xmlListPopBack(xmlListPtr)</code> */
	void xmlListPopBack(xmlListPtr l);
	/** Original signature : <code>int xmlListPushFront(xmlListPtr, void*)</code> */
	int xmlListPushFront(xmlListPtr l, void* data);
	/** Original signature : <code>int xmlListPushBack(xmlListPtr, void*)</code> */
	int xmlListPushBack(xmlListPtr l, void* data);
	/**
	 * Advanced Operators<br>
	 * Original signature : <code>void xmlListReverse(xmlListPtr)</code>
	 */
	void xmlListReverse(xmlListPtr l);
	/** Original signature : <code>void xmlListSort(xmlListPtr)</code> */
	void xmlListSort(xmlListPtr l);
	/** Original signature : <code>void xmlListWalk(xmlListPtr, xmlListWalker, const void*)</code> */
	void xmlListWalk(xmlListPtr l, xmlListWalker walker, const void* user);
	/** Original signature : <code>void xmlListReverseWalk(xmlListPtr, xmlListWalker, const void*)</code> */
	void xmlListReverseWalk(xmlListPtr l, xmlListWalker walker, const void* user);
	/** Original signature : <code>void xmlListMerge(xmlListPtr, xmlListPtr)</code> */
	void xmlListMerge(xmlListPtr l1, xmlListPtr l2);
	/** Original signature : <code>xmlListPtr xmlListDup(const xmlListPtr)</code> */
	xmlListPtr xmlListDup(const xmlListPtr old);
	/** Original signature : <code>int xmlListCopy(xmlListPtr, const xmlListPtr)</code> */
	int xmlListCopy(xmlListPtr cur, const xmlListPtr old);
	/**
	 * Link operators<br>
	 * Original signature : <code>void* xmlLinkGetData(xmlLinkPtr)</code>
	 */
	void* xmlLinkGetData(xmlLinkPtr lk);
}




extern ""C"" {
/**
	 * xmlAutomataPtr:<br>
	 * * A libxml automata description, It can be compiled into a regexp
	 */
	typedef _xmlAutomata xmlAutomata;
	typedef xmlAutomata* xmlAutomataPtr;
	/**
	 * xmlAutomataStatePtr:<br>
	 * * A state int the automata description,
	 */
	typedef _xmlAutomataState xmlAutomataState;
	typedef xmlAutomataState* xmlAutomataStatePtr;
	/**
	 * Building API<br>
	 * Original signature : <code>xmlAutomataPtr xmlNewAutomata()</code>
	 */
	xmlAutomataPtr xmlNewAutomata();
	/** Original signature : <code>void xmlFreeAutomata(xmlAutomataPtr)</code> */
	void xmlFreeAutomata(xmlAutomataPtr am);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataGetInitState(xmlAutomataPtr)</code> */
	xmlAutomataStatePtr xmlAutomataGetInitState(xmlAutomataPtr am);
	/** Original signature : <code>int xmlAutomataSetFinalState(xmlAutomataPtr, xmlAutomataStatePtr)</code> */
	int xmlAutomataSetFinalState(xmlAutomataPtr am, xmlAutomataStatePtr state);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewState(xmlAutomataPtr)</code> */
	xmlAutomataStatePtr xmlAutomataNewState(xmlAutomataPtr am);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewTransition(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewTransition(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewTransition2(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, const xmlChar*, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewTransition2(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, const xmlChar* token2, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewNegTrans(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, const xmlChar*, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewNegTrans(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, const xmlChar* token2, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewCountTrans(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, int, int, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewCountTrans(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, int min, int max, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewCountTrans2(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, const xmlChar*, int, int, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewCountTrans2(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, const xmlChar* token2, int min, int max, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewOnceTrans(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, int, int, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewOnceTrans(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, int min, int max, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewOnceTrans2(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar*, const xmlChar*, int, int, void*)</code> */
	xmlAutomataStatePtr xmlAutomataNewOnceTrans2(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, const xmlChar* token, const xmlChar* token2, int min, int max, void* data);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewAllTrans(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, int)</code> */
	xmlAutomataStatePtr xmlAutomataNewAllTrans(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, int lax);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewEpsilon(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr)</code> */
	xmlAutomataStatePtr xmlAutomataNewEpsilon(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewCountedTrans(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, int)</code> */
	xmlAutomataStatePtr xmlAutomataNewCountedTrans(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, int counter);
	/** Original signature : <code>xmlAutomataStatePtr xmlAutomataNewCounterTrans(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, int)</code> */
	xmlAutomataStatePtr xmlAutomataNewCounterTrans(xmlAutomataPtr am, xmlAutomataStatePtr from, xmlAutomataStatePtr to, int counter);
	/** Original signature : <code>int xmlAutomataNewCounter(xmlAutomataPtr, int, int)</code> */
	int xmlAutomataNewCounter(xmlAutomataPtr am, int min, int max);
	/** Original signature : <code>xmlRegexpPtr xmlAutomataCompile(xmlAutomataPtr)</code> */
	xmlRegexpPtr xmlAutomataCompile(xmlAutomataPtr am);
	/** Original signature : <code>int xmlAutomataIsDeterminist(xmlAutomataPtr)</code> */
	int xmlAutomataIsDeterminist(xmlAutomataPtr am);
}

extern ""C"" {
/** Validation state added for non-determinist content model. */
	typedef _xmlValidState xmlValidState;
	typedef xmlValidState* xmlValidStatePtr;
	/**
	 * xmlValidityErrorFunc:<br>
	 * @ctx:  usually an xmlValidCtxtPtr to a validity error context,<br>
	 *        but comes from ctxt->userData (which normally contains such<br>
	 *        a pointer); ctxt->userData can be changed by the user.<br>
	 * @msg:  the string to format *printf like vararg<br>
	 * @...:  remaining arguments to the format<br>
	 * * Callback called when a validity error is found. This is a message<br>
	 * oriented function similar to an *printf function.
	 */
	typedef void (*xmlValidityErrorFunc)(void* ctx, const char* msg, ...) xmlValidityErrorFunc;
	/**
	 * xmlValidityWarningFunc:<br>
	 * @ctx:  usually an xmlValidCtxtPtr to a validity error context,<br>
	 *        but comes from ctxt->userData (which normally contains such<br>
	 *        a pointer); ctxt->userData can be changed by the user.<br>
	 * @msg:  the string to format *printf like vararg<br>
	 * @...:  remaining arguments to the format<br>
	 * * Callback called when a validity warning is found. This is a message<br>
	 * oriented function similar to an *printf function.
	 */
	typedef void (*xmlValidityWarningFunc)(void* ctx, const char* msg, ...) xmlValidityWarningFunc;
	/**
	 * xmlValidCtxt:<br>
	 * An xmlValidCtxt is used for error reporting when validating.
	 */
	typedef _xmlValidCtxt xmlValidCtxt;
	typedef xmlValidCtxt* xmlValidCtxtPtr;
	struct _xmlValidCtxt {
		void* userData; /* user specific data block */
		xmlValidityErrorFunc error; /* the callback in case of errors */
		xmlValidityWarningFunc warning; /* the callback in case of warning */
		xmlNodePtr node; /* Current parsed Node */
		int nodeNr; /* Depth of the parsing stack */
		int nodeMax; /* Max depth of the parsing stack */
		xmlNodePtr* nodeTab; /* array of nodes */
		unsigned int finishDtd; /* finished validating the Dtd ? */
		xmlDocPtr doc; /* the document */
		int valid; /* temporary validity check result */
		xmlValidState* vstate; /* current state */
		int vstateNr; /* Depth of the validation stack */
		int vstateMax; /* Max depth of the validation stack */
		xmlValidState* vstateTab; /* array of validation states */
		xmlAutomataPtr am; /* the automata */
		xmlAutomataStatePtr state; /* used to build the automata */
	};
	/**
	 * ALL notation declarations are stored in a table.<br>
	 * There is one table per DTD.
	 */
	typedef _xmlHashTable xmlNotationTable;
	typedef xmlNotationTable* xmlNotationTablePtr;
	/**
	 * ALL element declarations are stored in a table.<br>
	 * There is one table per DTD.
	 */
	typedef _xmlHashTable xmlElementTable;
	typedef xmlElementTable* xmlElementTablePtr;
	/**
	 * ALL attribute declarations are stored in a table.<br>
	 * There is one table per DTD.
	 */
	typedef _xmlHashTable xmlAttributeTable;
	typedef xmlAttributeTable* xmlAttributeTablePtr;
	/**
	 * ALL IDs attributes are stored in a table.<br>
	 * There is one table per document.
	 */
	typedef _xmlHashTable xmlIDTable;
	typedef xmlIDTable* xmlIDTablePtr;
	/**
	 * ALL Refs attributes are stored in a table.<br>
	 * There is one table per document.
	 */
	typedef _xmlHashTable xmlRefTable;
	typedef xmlRefTable* xmlRefTablePtr;
	/**
	 * Notation<br>
	 * Original signature : <code>xmlNotationPtr xmlAddNotationDecl(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar*, const xmlChar*, const xmlChar*)</code>
	 */
	xmlNotationPtr xmlAddNotationDecl(xmlValidCtxtPtr ctxt, xmlDtdPtr dtd, const xmlChar* name, const xmlChar* PublicID, const xmlChar* SystemID);
	/** Original signature : <code>xmlNotationTablePtr xmlCopyNotationTable(xmlNotationTablePtr)</code> */
	xmlNotationTablePtr xmlCopyNotationTable(xmlNotationTablePtr table);
	/** Original signature : <code>void xmlFreeNotationTable(xmlNotationTablePtr)</code> */
	void xmlFreeNotationTable(xmlNotationTablePtr table);
	/** Original signature : <code>void xmlDumpNotationDecl(xmlBufferPtr, xmlNotationPtr)</code> */
	void xmlDumpNotationDecl(xmlBufferPtr buf, xmlNotationPtr nota);
	/** Original signature : <code>void xmlDumpNotationTable(xmlBufferPtr, xmlNotationTablePtr)</code> */
	void xmlDumpNotationTable(xmlBufferPtr buf, xmlNotationTablePtr table);
	/**
	 * the non Doc version are being deprecated<br>
	 * Original signature : <code>xmlElementContentPtr xmlNewElementContent(const xmlChar*, xmlElementContentType)</code>
	 */
	xmlElementContentPtr xmlNewElementContent(const xmlChar* name, xmlElementContentType type);
	/** Original signature : <code>xmlElementContentPtr xmlCopyElementContent(xmlElementContentPtr)</code> */
	xmlElementContentPtr xmlCopyElementContent(xmlElementContentPtr content);
	/** Original signature : <code>void xmlFreeElementContent(xmlElementContentPtr)</code> */
	void xmlFreeElementContent(xmlElementContentPtr cur);
	/**
	 * the new versions with doc argument<br>
	 * Original signature : <code>xmlElementContentPtr xmlNewDocElementContent(xmlDocPtr, const xmlChar*, xmlElementContentType)</code>
	 */
	xmlElementContentPtr xmlNewDocElementContent(xmlDocPtr doc, const xmlChar* name, xmlElementContentType type);
	/** Original signature : <code>xmlElementContentPtr xmlCopyDocElementContent(xmlDocPtr, xmlElementContentPtr)</code> */
	xmlElementContentPtr xmlCopyDocElementContent(xmlDocPtr doc, xmlElementContentPtr content);
	/** Original signature : <code>void xmlFreeDocElementContent(xmlDocPtr, xmlElementContentPtr)</code> */
	void xmlFreeDocElementContent(xmlDocPtr doc, xmlElementContentPtr cur);
	/** Original signature : <code>void xmlSnprintfElementContent(char*, int, xmlElementContentPtr, int)</code> */
	void xmlSnprintfElementContent(char* buf, int size, xmlElementContentPtr content, int englob);
	/**
	 * DEPRECATED<br>
	 * Original signature : <code>void xmlSprintfElementContent(char*, xmlElementContentPtr, int)</code>
	 */
	void xmlSprintfElementContent(char* buf, xmlElementContentPtr content, int englob);
	/**
	 * Element<br>
	 * Original signature : <code>xmlElementPtr xmlAddElementDecl(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar*, xmlElementTypeVal, xmlElementContentPtr)</code>
	 */
	xmlElementPtr xmlAddElementDecl(xmlValidCtxtPtr ctxt, xmlDtdPtr dtd, const xmlChar* name, xmlElementTypeVal type, xmlElementContentPtr content);
	/** Original signature : <code>xmlElementTablePtr xmlCopyElementTable(xmlElementTablePtr)</code> */
	xmlElementTablePtr xmlCopyElementTable(xmlElementTablePtr table);
	/** Original signature : <code>void xmlFreeElementTable(xmlElementTablePtr)</code> */
	void xmlFreeElementTable(xmlElementTablePtr table);
	/** Original signature : <code>void xmlDumpElementTable(xmlBufferPtr, xmlElementTablePtr)</code> */
	void xmlDumpElementTable(xmlBufferPtr buf, xmlElementTablePtr table);
	/** Original signature : <code>void xmlDumpElementDecl(xmlBufferPtr, xmlElementPtr)</code> */
	void xmlDumpElementDecl(xmlBufferPtr buf, xmlElementPtr elem);
	/**
	 * Enumeration<br>
	 * Original signature : <code>xmlEnumerationPtr xmlCreateEnumeration(const xmlChar*)</code>
	 */
	xmlEnumerationPtr xmlCreateEnumeration(const xmlChar* name);
	/** Original signature : <code>void xmlFreeEnumeration(xmlEnumerationPtr)</code> */
	void xmlFreeEnumeration(xmlEnumerationPtr cur);
	/** Original signature : <code>xmlEnumerationPtr xmlCopyEnumeration(xmlEnumerationPtr)</code> */
	xmlEnumerationPtr xmlCopyEnumeration(xmlEnumerationPtr cur);
	/**
	 * Attribute<br>
	 * Original signature : <code>xmlAttributePtr xmlAddAttributeDecl(xmlValidCtxtPtr, xmlDtdPtr, const xmlChar*, const xmlChar*, const xmlChar*, xmlAttributeType, xmlAttributeDefault, const xmlChar*, xmlEnumerationPtr)</code>
	 */
	xmlAttributePtr xmlAddAttributeDecl(xmlValidCtxtPtr ctxt, xmlDtdPtr dtd, const xmlChar* elem, const xmlChar* name, const xmlChar* ns, xmlAttributeType type, xmlAttributeDefault def, const xmlChar* defaultValue, xmlEnumerationPtr tree);
	/** Original signature : <code>xmlAttributeTablePtr xmlCopyAttributeTable(xmlAttributeTablePtr)</code> */
	xmlAttributeTablePtr xmlCopyAttributeTable(xmlAttributeTablePtr table);
	/** Original signature : <code>void xmlFreeAttributeTable(xmlAttributeTablePtr)</code> */
	void xmlFreeAttributeTable(xmlAttributeTablePtr table);
	/** Original signature : <code>void xmlDumpAttributeTable(xmlBufferPtr, xmlAttributeTablePtr)</code> */
	void xmlDumpAttributeTable(xmlBufferPtr buf, xmlAttributeTablePtr table);
	/** Original signature : <code>void xmlDumpAttributeDecl(xmlBufferPtr, xmlAttributePtr)</code> */
	void xmlDumpAttributeDecl(xmlBufferPtr buf, xmlAttributePtr attr);
	/**
	 * IDs<br>
	 * Original signature : <code>xmlIDPtr xmlAddID(xmlValidCtxtPtr, xmlDocPtr, const xmlChar*, xmlAttrPtr)</code>
	 */
	xmlIDPtr xmlAddID(xmlValidCtxtPtr ctxt, xmlDocPtr doc, const xmlChar* value, xmlAttrPtr attr);
	/** Original signature : <code>void xmlFreeIDTable(xmlIDTablePtr)</code> */
	void xmlFreeIDTable(xmlIDTablePtr table);
	/** Original signature : <code>xmlAttrPtr xmlGetID(xmlDocPtr, const xmlChar*)</code> */
	xmlAttrPtr xmlGetID(xmlDocPtr doc, const xmlChar* ID);
	/** Original signature : <code>int xmlIsID(xmlDocPtr, xmlNodePtr, xmlAttrPtr)</code> */
	int xmlIsID(xmlDocPtr doc, xmlNodePtr elem, xmlAttrPtr attr);
	/** Original signature : <code>int xmlRemoveID(xmlDocPtr, xmlAttrPtr)</code> */
	int xmlRemoveID(xmlDocPtr doc, xmlAttrPtr attr);
	/**
	 * IDREFs<br>
	 * Original signature : <code>xmlRefPtr xmlAddRef(xmlValidCtxtPtr, xmlDocPtr, const xmlChar*, xmlAttrPtr)</code>
	 */
	xmlRefPtr xmlAddRef(xmlValidCtxtPtr ctxt, xmlDocPtr doc, const xmlChar* value, xmlAttrPtr attr);
	/** Original signature : <code>void xmlFreeRefTable(xmlRefTablePtr)</code> */
	void xmlFreeRefTable(xmlRefTablePtr table);
	/** Original signature : <code>int xmlIsRef(xmlDocPtr, xmlNodePtr, xmlAttrPtr)</code> */
	int xmlIsRef(xmlDocPtr doc, xmlNodePtr elem, xmlAttrPtr attr);
	/** Original signature : <code>int xmlRemoveRef(xmlDocPtr, xmlAttrPtr)</code> */
	int xmlRemoveRef(xmlDocPtr doc, xmlAttrPtr attr);
	/** Original signature : <code>xmlListPtr xmlGetRefs(xmlDocPtr, const xmlChar*)</code> */
	xmlListPtr xmlGetRefs(xmlDocPtr doc, const xmlChar* ID);
	/**
	 * Allocate/Release Validation Contexts<br>
	 * Original signature : <code>xmlValidCtxtPtr xmlNewValidCtxt()</code>
	 */
	xmlValidCtxtPtr xmlNewValidCtxt();
	/** Original signature : <code>void xmlFreeValidCtxt(xmlValidCtxtPtr)</code> */
	void xmlFreeValidCtxt(xmlValidCtxtPtr xmlValidCtxtPtr1);
	/** Original signature : <code>int xmlValidateRoot(xmlValidCtxtPtr, xmlDocPtr)</code> */
	int xmlValidateRoot(xmlValidCtxtPtr ctxt, xmlDocPtr doc);
	/** Original signature : <code>int xmlValidateElementDecl(xmlValidCtxtPtr, xmlDocPtr, xmlElementPtr)</code> */
	int xmlValidateElementDecl(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlElementPtr elem);
	/** Original signature : <code>xmlChar* xmlValidNormalizeAttributeValue(xmlDocPtr, xmlNodePtr, const xmlChar*, const xmlChar*)</code> */
	xmlChar* xmlValidNormalizeAttributeValue(xmlDocPtr doc, xmlNodePtr elem, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>xmlChar* xmlValidCtxtNormalizeAttributeValue(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar*, const xmlChar*)</code> */
	xmlChar* xmlValidCtxtNormalizeAttributeValue(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem, const xmlChar* name, const xmlChar* value);
	/** Original signature : <code>int xmlValidateAttributeDecl(xmlValidCtxtPtr, xmlDocPtr, xmlAttributePtr)</code> */
	int xmlValidateAttributeDecl(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlAttributePtr attr);
	/** Original signature : <code>int xmlValidateAttributeValue(xmlAttributeType, const xmlChar*)</code> */
	int xmlValidateAttributeValue(xmlAttributeType type, const xmlChar* value);
	/** Original signature : <code>int xmlValidateNotationDecl(xmlValidCtxtPtr, xmlDocPtr, xmlNotationPtr)</code> */
	int xmlValidateNotationDecl(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNotationPtr nota);
	/** Original signature : <code>int xmlValidateDtd(xmlValidCtxtPtr, xmlDocPtr, xmlDtdPtr)</code> */
	int xmlValidateDtd(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlDtdPtr dtd);
	/** Original signature : <code>int xmlValidateDtdFinal(xmlValidCtxtPtr, xmlDocPtr)</code> */
	int xmlValidateDtdFinal(xmlValidCtxtPtr ctxt, xmlDocPtr doc);
	/** Original signature : <code>int xmlValidateDocument(xmlValidCtxtPtr, xmlDocPtr)</code> */
	int xmlValidateDocument(xmlValidCtxtPtr ctxt, xmlDocPtr doc);
	/** Original signature : <code>int xmlValidateElement(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr)</code> */
	int xmlValidateElement(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem);
	/** Original signature : <code>int xmlValidateOneElement(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr)</code> */
	int xmlValidateOneElement(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem);
	/** Original signature : <code>int xmlValidateOneAttribute(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, xmlAttrPtr, const xmlChar*)</code> */
	int xmlValidateOneAttribute(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem, xmlAttrPtr attr, const xmlChar* value);
	/** Original signature : <code>int xmlValidateOneNamespace(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar*, xmlNsPtr, const xmlChar*)</code> */
	int xmlValidateOneNamespace(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem, const xmlChar* prefix, xmlNsPtr ns, const xmlChar* value);
	/** Original signature : <code>int xmlValidateDocumentFinal(xmlValidCtxtPtr, xmlDocPtr)</code> */
	int xmlValidateDocumentFinal(xmlValidCtxtPtr ctxt, xmlDocPtr doc);
	/** Original signature : <code>int xmlValidateNotationUse(xmlValidCtxtPtr, xmlDocPtr, const xmlChar*)</code> */
	int xmlValidateNotationUse(xmlValidCtxtPtr ctxt, xmlDocPtr doc, const xmlChar* notationName);
	/** Original signature : <code>int xmlIsMixedElement(xmlDocPtr, const xmlChar*)</code> */
	int xmlIsMixedElement(xmlDocPtr doc, const xmlChar* name);
	/** Original signature : <code>xmlAttributePtr xmlGetDtdAttrDesc(xmlDtdPtr, const xmlChar*, const xmlChar*)</code> */
	xmlAttributePtr xmlGetDtdAttrDesc(xmlDtdPtr dtd, const xmlChar* elem, const xmlChar* name);
	/** Original signature : <code>xmlAttributePtr xmlGetDtdQAttrDesc(xmlDtdPtr, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	xmlAttributePtr xmlGetDtdQAttrDesc(xmlDtdPtr dtd, const xmlChar* elem, const xmlChar* name, const xmlChar* prefix);
	/** Original signature : <code>xmlNotationPtr xmlGetDtdNotationDesc(xmlDtdPtr, const xmlChar*)</code> */
	xmlNotationPtr xmlGetDtdNotationDesc(xmlDtdPtr dtd, const xmlChar* name);
	/** Original signature : <code>xmlElementPtr xmlGetDtdQElementDesc(xmlDtdPtr, const xmlChar*, const xmlChar*)</code> */
	xmlElementPtr xmlGetDtdQElementDesc(xmlDtdPtr dtd, const xmlChar* name, const xmlChar* prefix);
	/** Original signature : <code>xmlElementPtr xmlGetDtdElementDesc(xmlDtdPtr, const xmlChar*)</code> */
	xmlElementPtr xmlGetDtdElementDesc(xmlDtdPtr dtd, const xmlChar* name);
	/** Original signature : <code>int xmlValidGetPotentialChildren(xmlElementContent*, const xmlChar**, int*, int)</code> */
	int xmlValidGetPotentialChildren(xmlElementContent* ctree, const xmlChar** names, int* len, int max);
	/** Original signature : <code>int xmlValidGetValidElements(xmlNode*, xmlNode*, const xmlChar**, int)</code> */
	int xmlValidGetValidElements(xmlNode* prev, xmlNode* next, const xmlChar** names, int max);
	/** Original signature : <code>int xmlValidateNameValue(const xmlChar*)</code> */
	int xmlValidateNameValue(const xmlChar* value);
	/** Original signature : <code>int xmlValidateNamesValue(const xmlChar*)</code> */
	int xmlValidateNamesValue(const xmlChar* value);
	/** Original signature : <code>int xmlValidateNmtokenValue(const xmlChar*)</code> */
	int xmlValidateNmtokenValue(const xmlChar* value);
	/** Original signature : <code>int xmlValidateNmtokensValue(const xmlChar*)</code> */
	int xmlValidateNmtokensValue(const xmlChar* value);
	/**
	 * Validation based on the regexp support<br>
	 * Original signature : <code>int xmlValidBuildContentModel(xmlValidCtxtPtr, xmlElementPtr)</code>
	 */
	int xmlValidBuildContentModel(xmlValidCtxtPtr ctxt, xmlElementPtr elem);
	/** Original signature : <code>int xmlValidatePushElement(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar*)</code> */
	int xmlValidatePushElement(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem, const xmlChar* qname);
	/** Original signature : <code>int xmlValidatePushCData(xmlValidCtxtPtr, const xmlChar*, int)</code> */
	int xmlValidatePushCData(xmlValidCtxtPtr ctxt, const xmlChar* data, int len);
	/** Original signature : <code>int xmlValidatePopElement(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr, const xmlChar*)</code> */
	int xmlValidatePopElement(xmlValidCtxtPtr ctxt, xmlDocPtr doc, xmlNodePtr elem, const xmlChar* qname);
}



extern ""C"" {
/** The different valid entity types. */
	typedef enum xmlEntityType {
		XML_INTERNAL_GENERAL_ENTITY = 1,
		XML_EXTERNAL_GENERAL_PARSED_ENTITY = 2,
		XML_EXTERNAL_GENERAL_UNPARSED_ENTITY = 3,
		XML_INTERNAL_PARAMETER_ENTITY = 4,
		XML_EXTERNAL_PARAMETER_ENTITY = 5,
		XML_INTERNAL_PREDEFINED_ENTITY = 6
	} xmlEntityType;
	/**
	 * An unit of storage for an entity, contains the string, the value<br>
	 * and the linkind data needed for the linking in the hash table.
	 */
	struct _xmlEntity {
		void* _private; /* application data */
		xmlElementType type; /* XML_ENTITY_DECL, must be second ! */
		const xmlChar* name; /* Entity name */
		_xmlNode* children; /* First child link */
		_xmlNode* last; /* Last child link */
		_xmlDtd* parent; /* -> DTD */
		_xmlNode* next; /* next sibling link  */
		_xmlNode* prev; /* previous sibling link  */
		_xmlDoc* doc; /* the containing document */
		xmlChar* orig; /* content without ref substitution */
		xmlChar* content; /* content or ndata if unparsed */
		int length; /* the content length */
		xmlEntityType etype; /* The entity type */
		const xmlChar* ExternalID; /* External identifier for PUBLIC */
		const xmlChar* SystemID; /* URI for a SYSTEM or PUBLIC Entity */
		_xmlEntity* nexte; /* unused */
		const xmlChar* URI; /* the full URI as computed */
		int owner; /* does the entity own the childrens */
		int checked; /* was the entity content checked */
	};
	/**
	 * All entities are stored in an hash table.<br>
	 * There is 2 separate hash tables for global and parameter entities.
	 */
	typedef _xmlHashTable xmlEntitiesTable;
	typedef xmlEntitiesTable* xmlEntitiesTablePtr;
	/**
	 * External functions:<br>
	 * Original signature : <code>void xmlInitializePredefinedEntities()</code>
	 */
	void xmlInitializePredefinedEntities();
	/** Original signature : <code>xmlEntityPtr xmlNewEntity(xmlDocPtr, const xmlChar*, int, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	xmlEntityPtr xmlNewEntity(xmlDocPtr doc, const xmlChar* name, int type, const xmlChar* ExternalID, const xmlChar* SystemID, const xmlChar* content);
	/** Original signature : <code>xmlEntityPtr xmlAddDocEntity(xmlDocPtr, const xmlChar*, int, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	xmlEntityPtr xmlAddDocEntity(xmlDocPtr doc, const xmlChar* name, int type, const xmlChar* ExternalID, const xmlChar* SystemID, const xmlChar* content);
	/** Original signature : <code>xmlEntityPtr xmlAddDtdEntity(xmlDocPtr, const xmlChar*, int, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	xmlEntityPtr xmlAddDtdEntity(xmlDocPtr doc, const xmlChar* name, int type, const xmlChar* ExternalID, const xmlChar* SystemID, const xmlChar* content);
	/** Original signature : <code>xmlEntityPtr xmlGetPredefinedEntity(const xmlChar*)</code> */
	xmlEntityPtr xmlGetPredefinedEntity(const xmlChar* name);
	/** Original signature : <code>xmlEntityPtr xmlGetDocEntity(xmlDocPtr, const xmlChar*)</code> */
	xmlEntityPtr xmlGetDocEntity(xmlDocPtr doc, const xmlChar* name);
	/** Original signature : <code>xmlEntityPtr xmlGetDtdEntity(xmlDocPtr, const xmlChar*)</code> */
	xmlEntityPtr xmlGetDtdEntity(xmlDocPtr doc, const xmlChar* name);
	/** Original signature : <code>xmlEntityPtr xmlGetParameterEntity(xmlDocPtr, const xmlChar*)</code> */
	xmlEntityPtr xmlGetParameterEntity(xmlDocPtr doc, const xmlChar* name);
	/** Original signature : <code>xmlChar* xmlEncodeEntities(xmlDocPtr, const xmlChar*)</code> */
	const xmlChar* xmlEncodeEntities(xmlDocPtr doc, const xmlChar* input);
	/** Original signature : <code>xmlChar* xmlEncodeEntitiesReentrant(xmlDocPtr, const xmlChar*)</code> */
	xmlChar* xmlEncodeEntitiesReentrant(xmlDocPtr doc, const xmlChar* input);
	/** Original signature : <code>xmlChar* xmlEncodeSpecialChars(xmlDocPtr, const xmlChar*)</code> */
	xmlChar* xmlEncodeSpecialChars(xmlDocPtr doc, const xmlChar* input);
	/** Original signature : <code>xmlEntitiesTablePtr xmlCreateEntitiesTable()</code> */
	xmlEntitiesTablePtr xmlCreateEntitiesTable();
	/** Original signature : <code>xmlEntitiesTablePtr xmlCopyEntitiesTable(xmlEntitiesTablePtr)</code> */
	xmlEntitiesTablePtr xmlCopyEntitiesTable(xmlEntitiesTablePtr table);
	/** Original signature : <code>void xmlFreeEntitiesTable(xmlEntitiesTablePtr)</code> */
	void xmlFreeEntitiesTable(xmlEntitiesTablePtr table);
	/** Original signature : <code>void xmlDumpEntitiesTable(xmlBufferPtr, xmlEntitiesTablePtr)</code> */
	void xmlDumpEntitiesTable(xmlBufferPtr buf, xmlEntitiesTablePtr table);
	/** Original signature : <code>void xmlDumpEntityDecl(xmlBufferPtr, xmlEntityPtr)</code> */
	void xmlDumpEntityDecl(xmlBufferPtr buf, xmlEntityPtr ent);
	/** Original signature : <code>void xmlCleanupPredefinedEntities()</code> */
	void xmlCleanupPredefinedEntities();
}


extern ""C"" {
/**
	 * xmlParserInputDeallocate:<br>
	 * @str:  the string to deallocate<br>
	 * * Callback for freeing some parser input allocations.
	 */
	typedef void (*xmlParserInputDeallocate)(xmlChar* str) xmlParserInputDeallocate;
	struct _xmlParserInput {
		xmlParserInputBufferPtr buf; /* UTF-8 encoded buffer */
		const char* filename; /* The file analyzed, if any */
		const char* directory; /* the directory/base of the file */
		const xmlChar* base; /* Base of the array to parse */
		const xmlChar* cur; /* Current char being parsed */
		const xmlChar* end; /* end of the array to parse */
		int length; /* length if known */
		int line; /* Current line */
		int col; /* Current column */
		unsigned long consumed; /* How many xmlChars already consumed */
		xmlParserInputDeallocate free; /* function to deallocate the base */
		const xmlChar* encoding; /* the encoding string for entity */
		const xmlChar* version; /* the version string for entity */
		int standalone; /* Was that entity marked standalone */
		int id; /* an unique identifier for the entity */
	};
	/**
	 * xmlParserNodeInfo:<br>
	 * * The parser can be asked to collect Node informations, i.e. at what<br>
	 * place in the file they were detected. <br>
	 * NOTE: This is off by default and not very well tested.
	 */
	typedef _xmlParserNodeInfo xmlParserNodeInfo;
	typedef xmlParserNodeInfo* xmlParserNodeInfoPtr;
	struct _xmlParserNodeInfo {
		_xmlNode* node;
		unsigned long begin_pos;
		unsigned long begin_line;
		unsigned long end_pos;
		unsigned long end_line;
	};
	typedef _xmlParserNodeInfoSeq xmlParserNodeInfoSeq;
	typedef xmlParserNodeInfoSeq* xmlParserNodeInfoSeqPtr;
	struct _xmlParserNodeInfoSeq {
		unsigned long maximum;
		unsigned long length;
		xmlParserNodeInfo* buffer;
	};
	/**
	 * xmlParserInputState:<br>
	 * * The parser is now working also as a state based parser.<br>
	 * The recursive one use the state info for entities processing.
	 */
	typedef enum xmlParserInputState {
		XML_PARSER_EOF = -1 /* nothing is to be parsed */,
		XML_PARSER_START = 0 /* nothing has been parsed */,
		XML_PARSER_MISC /* Misc* before int subset */,
		XML_PARSER_PI /* Within a processing instruction */,
		XML_PARSER_DTD /* within some DTD content */,
		XML_PARSER_PROLOG /* Misc* after internal subset */,
		XML_PARSER_COMMENT /* within a comment */,
		XML_PARSER_START_TAG /* within a start tag */,
		XML_PARSER_CONTENT /* within the content */,
		XML_PARSER_CDATA_SECTION /* within a CDATA section */,
		XML_PARSER_END_TAG /* within a closing tag */,
		XML_PARSER_ENTITY_DECL /* within an entity declaration */,
		XML_PARSER_ENTITY_VALUE /* within an entity value in a decl */,
		XML_PARSER_ATTRIBUTE_VALUE /* within an attribute value */,
		XML_PARSER_SYSTEM_LITERAL /* within a SYSTEM value */,
		XML_PARSER_EPILOG /* the Misc* after the last end tag */,
		XML_PARSER_IGNORE /* within an IGNORED section */,
		XML_PARSER_PUBLIC_LITERAL /* within a PUBLIC value */
	} xmlParserInputState;
	/**
	 * xmlParserMode:<br>
	 * * A parser can operate in various modes
	 */
	typedef enum xmlParserMode {
		XML_PARSE_UNKNOWN = 0,
		XML_PARSE_DOM = 1,
		XML_PARSE_SAX = 2,
		XML_PARSE_PUSH_DOM = 3,
		XML_PARSE_PUSH_SAX = 4,
		XML_PARSE_READER = 5
	} xmlParserMode;
	/**
	 * xmlParserCtxt:<br>
	 * The parser context.<br>
	 * NOTE This doesn't completely define the parser state, the (current ?)<br>
	 *      design of the parser uses recursive function calls since this allow<br>
	 *      and easy mapping from the production rules of the specification<br>
	 *      to the actual code. The drawback is that the actual function call<br>
	 *      also reflect the parser state. However most of the parsing routines<br>
	 *      takes as the only argument the parser context pointer, so migrating<br>
	 *      to a state based parser for progressive parsing shouldn't be too hard.
	 */
	struct _xmlParserCtxt {
		_xmlSAXHandler* sax; /* The SAX handler */
		void* userData; /* For SAX interface only, used by DOM build */
		xmlDocPtr myDoc; /* the document being built */
		int wellFormed; /* is the document well formed */
		int replaceEntities; /* shall we replace entities ? */
		const xmlChar* version; /* the XML version string */
		const xmlChar* encoding; /* the declared encoding, if any */
		int standalone; /* standalone document */
		int html; /* an HTML(1)/Docbook(2) document
                                       * 3 is HTML after <head>
                                       * 10 is HTML after <body>
                                       */
		xmlParserInputPtr input; /* Current input stream */
		int inputNr; /* Number of current input streams */
		int inputMax; /* Max number of input streams */
		xmlParserInputPtr* inputTab; /* stack of inputs */
		xmlNodePtr node; /* Current parsed Node */
		int nodeNr; /* Depth of the parsing stack */
		int nodeMax; /* Max depth of the parsing stack */
		xmlNodePtr* nodeTab; /* array of nodes */
		int record_info; /* Whether node info should be kept */
		xmlParserNodeInfoSeq node_seq; /* info about each node parsed */
		int errNo; /* error code */
		int hasExternalSubset; /* reference and external subset */
		int hasPErefs; /* the internal subset has PE refs */
		int external; /* are we parsing an external entity */
		int valid; /* is the document valid */
		int validate; /* shall we try to validate ? */
		xmlValidCtxt vctxt; /* The validity context */
		xmlParserInputState instate; /* current type of input */
		int token; /* next char look-ahead */
		char* directory; /* the data directory */
		const xmlChar* name; /* Current parsed Node */
		int nameNr; /* Depth of the parsing stack */
		int nameMax; /* Max depth of the parsing stack */
		const xmlChar** nameTab; /* array of nodes */
		long nbChars; /* number of xmlChar processed */
		long checkIndex; /* used by progressive parsing lookup */
		int keepBlanks; /* ugly but ... */
		int disableSAX; /* SAX callbacks are disabled */
		int inSubset; /* Parsing is in int 1/ext 2 subset */
		const xmlChar* intSubName; /* name of subset */
		xmlChar* extSubURI; /* URI of external subset */
		xmlChar* extSubSystem; /* SYSTEM ID of external subset */
		int* space; /* Should the parser preserve spaces */
		int spaceNr; /* Depth of the parsing stack */
		int spaceMax; /* Max depth of the parsing stack */
		int* spaceTab; /* array of space infos */
		int depth; /* to prevent entity substitution loops */
		xmlParserInputPtr entity; /* used to check entities boundaries */
		int charset; /* encoding of the in-memory content
				         actually an xmlCharEncoding */
		int nodelen; /* Those two fields are there to */
		int nodemem; /* Speed up large node parsing */
		int pedantic; /* signal pedantic warnings */
		void* _private; /* For user data, libxml won't touch it */
		int loadsubset; /* should the external subset be loaded */
		int linenumbers; /* set line number in element content */
		void* catalogs; /* document's own catalog */
		int recovery; /* run in recovery mode */
		int progressive; /* is this a progressive parsing */
		xmlDictPtr dict; /* dictionnary for the parser */
		const xmlChar** atts; /* array for the attributes callbacks */
		int maxatts; /* the size of the array */
		int docdict; /* use strings from dict to build tree */
		const xmlChar* str_xml;
		const xmlChar* str_xmlns;
		const xmlChar* str_xml_ns;
		int sax2; /* operating in the new SAX mode */
		int nsNr; /* the number of inherited namespaces */
		int nsMax; /* the size of the arrays */
		const xmlChar** nsTab; /* the array of prefix/namespace name */
		int* attallocs; /* which attribute were allocated */
		void** pushTab; /* array of data for push */
		xmlHashTablePtr attsDefault; /* defaulted attributes if any */
		xmlHashTablePtr attsSpecial; /* non-CDATA attributes if any */
		int nsWellFormed; /* is the document XML Nanespace okay */
		int options; /* Extra options */
		int dictNames; /* Use dictionary names for the tree */
		int freeElemsNr; /* number of freed element nodes */
		xmlNodePtr freeElems; /* List of freed element nodes */
		int freeAttrsNr; /* number of freed attributes nodes */
		xmlAttrPtr freeAttrs; /* List of freed attributes nodes */
		xmlError lastError;
		xmlParserMode parseMode; /* the parser mode */
		unsigned long nbentities; /* number of entities references */
		unsigned long sizeentities; /* size of parsed entities */
		xmlParserNodeInfo* nodeInfo; /* Current NodeInfo */
		int nodeInfoNr; /* Depth of the parsing stack */
		int nodeInfoMax; /* Max depth of the parsing stack */
		xmlParserNodeInfo* nodeInfoTab; /* array of nodeInfos */
		unsigned long sizeentcopy; /* volume of entity copy */
	};
	/**
	 * xmlSAXLocator:<br>
	 * A SAX Locator.
	 */
	struct _xmlSAXLocator {
		getPublicId_callback* getPublicId;
		getSystemId_callback* getSystemId;
		getLineNumber_callback* getLineNumber;
		getColumnNumber_callback* getColumnNumber;
		typedef const xmlChar* getPublicId_callback(void* ctx);
		typedef const xmlChar* getSystemId_callback(void* ctx);
		typedef int getLineNumber_callback(void* ctx);
		typedef int getColumnNumber_callback(void* ctx);
	};
	/**
	 * resolveEntitySAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @publicId: The public ID of the entity<br>
	 * @systemId: The system ID of the entity<br>
	 * * Callback:<br>
	 * The entity loader, to control the loading of external entities,<br>
	 * the application can either:<br>
	 *    - override this resolveEntity() callback in the SAX block<br>
	 *    - or better use the xmlSetExternalEntityLoader() function to<br>
	 *      set up it's own entity resolution routine<br>
	 * * Returns the xmlParserInputPtr if inlined or NULL for DOM behaviour.
	 */
	typedef xmlParserInputPtr_callback xmlParserInputPtr(* resolveEntitySAXFunc);
	/**
	 * internalSubsetSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  the root element name<br>
	 * @ExternalID:  the external ID<br>
	 * @SystemID:  the SYSTEM ID (e.g. filename or URL)<br>
	 * * Callback on internal subset declaration.
	 */
	typedef void (*internalSubsetSAXFunc)(void* ctx, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID) internalSubsetSAXFunc;
	/**
	 * externalSubsetSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  the root element name<br>
	 * @ExternalID:  the external ID<br>
	 * @SystemID:  the SYSTEM ID (e.g. filename or URL)<br>
	 * * Callback on external subset declaration.
	 */
	typedef void (*externalSubsetSAXFunc)(void* ctx, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID) externalSubsetSAXFunc;
	/**
	 * getEntitySAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name: The entity name<br>
	 * * Get an entity by name.<br>
	 * * Returns the xmlEntityPtr if found.
	 */
	typedef xmlEntityPtr_callback xmlEntityPtr(* getEntitySAXFunc);
	/**
	 * getParameterEntitySAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name: The entity name<br>
	 * * Get a parameter entity by name.<br>
	 * * Returns the xmlEntityPtr if found.
	 */
	typedef xmlEntityPtr (*getParameterEntitySAXFunc)(void* ctx, const xmlChar* name) getParameterEntitySAXFunc;
	/**
	 * entityDeclSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  the entity name <br>
	 * @type:  the entity type <br>
	 * @publicId: The public ID of the entity<br>
	 * @systemId: The system ID of the entity<br>
	 * @content: the entity value (without processing).<br>
	 * * An entity definition has been parsed.
	 */
	typedef void (*entityDeclSAXFunc)(void* ctx, const xmlChar* name, int type, const xmlChar* publicId, const xmlChar* systemId, xmlChar* content) entityDeclSAXFunc;
	/**
	 * notationDeclSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name: The name of the notation<br>
	 * @publicId: The public ID of the entity<br>
	 * @systemId: The system ID of the entity<br>
	 * * What to do when a notation declaration has been parsed.
	 */
	typedef void (*notationDeclSAXFunc)(void* ctx, const xmlChar* name, const xmlChar* publicId, const xmlChar* systemId) notationDeclSAXFunc;
	/**
	 * attributeDeclSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @elem:  the name of the element<br>
	 * @fullname:  the attribute name <br>
	 * @type:  the attribute type <br>
	 * @def:  the type of default value<br>
	 * @defaultValue: the attribute default value<br>
	 * @tree:  the tree of enumerated value set<br>
	 * * An attribute definition has been parsed.
	 */
	typedef void (*attributeDeclSAXFunc)(void* ctx, const xmlChar* elem, const xmlChar* fullname, int type, int def, const xmlChar* defaultValue, xmlEnumerationPtr tree) attributeDeclSAXFunc;
	/**
	 * elementDeclSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  the element name <br>
	 * @type:  the element type <br>
	 * @content: the element value tree<br>
	 * * An element definition has been parsed.
	 */
	typedef void (*elementDeclSAXFunc)(void* ctx, const xmlChar* name, int type, xmlElementContentPtr content) elementDeclSAXFunc;
	/**
	 * unparsedEntityDeclSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name: The name of the entity<br>
	 * @publicId: The public ID of the entity<br>
	 * @systemId: The system ID of the entity<br>
	 * @notationName: the name of the notation<br>
	 * * What to do when an unparsed entity declaration is parsed.
	 */
	typedef void (*unparsedEntityDeclSAXFunc)(void* ctx, const xmlChar* name, const xmlChar* publicId, const xmlChar* systemId, const xmlChar* notationName) unparsedEntityDeclSAXFunc;
	/**
	 * setDocumentLocatorSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @loc: A SAX Locator<br>
	 * * Receive the document locator at startup, actually xmlDefaultSAXLocator.<br>
	 * Everything is available on the context, so this is useless in our case.
	 */
	typedef void (*setDocumentLocatorSAXFunc)(void* ctx, xmlSAXLocatorPtr loc) setDocumentLocatorSAXFunc;
	/**
	 * startDocumentSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * * Called when the document start being processed.
	 */
	typedef void (*startDocumentSAXFunc)(void* ctx) startDocumentSAXFunc;
	/**
	 * endDocumentSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * * Called when the document end has been detected.
	 */
	typedef void (*endDocumentSAXFunc)(void* ctx) endDocumentSAXFunc;
	/**
	 * startElementSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  The element name, including namespace prefix<br>
	 * @atts:  An array of name/value attributes pairs, NULL terminated<br>
	 * * Called when an opening tag has been processed.
	 */
	typedef void (*startElementSAXFunc)(void* ctx, const xmlChar* name, const xmlChar** atts) startElementSAXFunc;
	/**
	 * endElementSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  The element name<br>
	 * * Called when the end of an element has been detected.
	 */
	typedef void (*endElementSAXFunc)(void* ctx, const xmlChar* name) endElementSAXFunc;
	/**
	 * attributeSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  The attribute name, including namespace prefix<br>
	 * @value:  The attribute value<br>
	 * * Handle an attribute that has been read by the parser.<br>
	 * The default handling is to convert the attribute into an<br>
	 * DOM subtree and past it in a new xmlAttr element added to<br>
	 * the element.
	 */
	typedef void (*attributeSAXFunc)(void* ctx, const xmlChar* name, const xmlChar* value) attributeSAXFunc;
	/**
	 * referenceSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @name:  The entity name<br>
	 * * Called when an entity reference is detected.
	 */
	typedef void (*referenceSAXFunc)(void* ctx, const xmlChar* name) referenceSAXFunc;
	/**
	 * charactersSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @ch:  a xmlChar string<br>
	 * @len: the number of xmlChar<br>
	 * * Receiving some chars from the parser.
	 */
	typedef void (*charactersSAXFunc)(void* ctx, const xmlChar* ch, int len) charactersSAXFunc;
	/**
	 * ignorableWhitespaceSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @ch:  a xmlChar string<br>
	 * @len: the number of xmlChar<br>
	 * * Receiving some ignorable whitespaces from the parser.<br>
	 * UNUSED: by default the DOM building will use characters.
	 */
	typedef void (*ignorableWhitespaceSAXFunc)(void* ctx, const xmlChar* ch, int len) ignorableWhitespaceSAXFunc;
	/**
	 * processingInstructionSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @target:  the target name<br>
	 * @data: the PI data's<br>
	 * * A processing instruction has been parsed.
	 */
	typedef void (*processingInstructionSAXFunc)(void* ctx, const xmlChar* target, const xmlChar* data) processingInstructionSAXFunc;
	/**
	 * commentSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @value:  the comment content<br>
	 * * A comment has been parsed.
	 */
	typedef void (*commentSAXFunc)(void* ctx, const xmlChar* value) commentSAXFunc;
	/**
	 * cdataBlockSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @value:  The pcdata content<br>
	 * @len:  the block length<br>
	 * * Called when a pcdata block has been parsed.
	 */
	typedef void (*cdataBlockSAXFunc)(void* ctx, const xmlChar* value, int len) cdataBlockSAXFunc;
	/**
	 * warningSAXFunc:<br>
	 * @ctx:  an XML parser context<br>
	 * @msg:  the message to display/transmit<br>
	 * @...:  extra parameters for the message display<br>
	 * <br>
	 * Display and format a warning messages, callback.
	 */
	typedef void (*warningSAXFunc)(void* ctx, const char* msg, ...) warningSAXFunc;
	/**
	 * errorSAXFunc:<br>
	 * @ctx:  an XML parser context<br>
	 * @msg:  the message to display/transmit<br>
	 * @...:  extra parameters for the message display<br>
	 * <br>
	 * Display and format an error messages, callback.
	 */
	typedef void (*errorSAXFunc)(void* ctx, const char* msg, ...) errorSAXFunc;
	/**
	 * fatalErrorSAXFunc:<br>
	 * @ctx:  an XML parser context<br>
	 * @msg:  the message to display/transmit<br>
	 * @...:  extra parameters for the message display<br>
	 * <br>
	 * Display and format fatal error messages, callback.<br>
	 * Note: so far fatalError() SAX callbacks are not used, error()<br>
	 *       get all the callbacks for errors.
	 */
	typedef void (*fatalErrorSAXFunc)(void* ctx, const char* msg, ...) fatalErrorSAXFunc;
	/**
	 * isStandaloneSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * * Is this document tagged standalone?<br>
	 * * Returns 1 if true
	 */
	typedef int (*isStandaloneSAXFunc)(void* ctx) isStandaloneSAXFunc;
	/**
	 * hasInternalSubsetSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * * Does this document has an internal subset.<br>
	 * * Returns 1 if true
	 */
	typedef int (*hasInternalSubsetSAXFunc)(void* ctx) hasInternalSubsetSAXFunc;
	/**
	 * hasExternalSubsetSAXFunc:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * * Does this document has an external subset?<br>
	 * * Returns 1 if true
	 */
	typedef int (*hasExternalSubsetSAXFunc)(void* ctx) hasExternalSubsetSAXFunc;
	/**
	 * startElementNsSAX2Func:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @localname:  the local name of the element<br>
	 * @prefix:  the element namespace prefix if available<br>
	 * @URI:  the element namespace name if available<br>
	 * @nb_namespaces:  number of namespace definitions on that node<br>
	 * @namespaces:  pointer to the array of prefix/URI pairs namespace definitions<br>
	 * @nb_attributes:  the number of attributes on that node<br>
	 * @nb_defaulted:  the number of defaulted attributes. The defaulted<br>
	 *                  ones are at the end of the array<br>
	 * @attributes:  pointer to the array of (localname/prefix/URI/value/end)<br>
	 *               attribute values.<br>
	 * * SAX2 callback when an element start has been detected by the parser.<br>
	 * It provides the namespace informations for the element, as well as<br>
	 * the new namespace declarations on the element.
	 */
	typedef void (*startElementNsSAX2Func)(void* ctx, const xmlChar* localname, const xmlChar* prefix, const xmlChar* URI, int nb_namespaces, const xmlChar** namespaces, int nb_attributes, int nb_defaulted, const xmlChar** attributes) startElementNsSAX2Func;
	/**
	 * endElementNsSAX2Func:<br>
	 * @ctx:  the user data (XML parser context)<br>
	 * @localname:  the local name of the element<br>
	 * @prefix:  the element namespace prefix if available<br>
	 * @URI:  the element namespace name if available<br>
	 * * SAX2 callback when an element end has been detected by the parser.<br>
	 * It provides the namespace informations for the element.
	 */
	typedef void (*endElementNsSAX2Func)(void* ctx, const xmlChar* localname, const xmlChar* prefix, const xmlChar* URI) endElementNsSAX2Func;
	struct _xmlSAXHandler {
		internalSubsetSAXFunc internalSubset;
		isStandaloneSAXFunc isStandalone;
		hasInternalSubsetSAXFunc hasInternalSubset;
		hasExternalSubsetSAXFunc hasExternalSubset;
		resolveEntitySAXFunc resolveEntity;
		getEntitySAXFunc getEntity;
		entityDeclSAXFunc entityDecl;
		notationDeclSAXFunc notationDecl;
		attributeDeclSAXFunc attributeDecl;
		elementDeclSAXFunc elementDecl;
		unparsedEntityDeclSAXFunc unparsedEntityDecl;
		setDocumentLocatorSAXFunc setDocumentLocator;
		startDocumentSAXFunc startDocument;
		endDocumentSAXFunc endDocument;
		startElementSAXFunc startElement;
		endElementSAXFunc endElement;
		referenceSAXFunc reference;
		charactersSAXFunc characters;
		ignorableWhitespaceSAXFunc ignorableWhitespace;
		processingInstructionSAXFunc processingInstruction;
		commentSAXFunc comment;
		warningSAXFunc warning;
		errorSAXFunc error;
		fatalErrorSAXFunc fatalError; /* unused error() get all the errors */
		getParameterEntitySAXFunc getParameterEntity;
		cdataBlockSAXFunc cdataBlock;
		externalSubsetSAXFunc externalSubset;
		unsigned int initialized;
		void* _private;
		startElementNsSAX2Func startElementNs;
		endElementNsSAX2Func endElementNs;
		xmlStructuredErrorFunc serror;
	};
	/** SAX Version 1 */
	typedef _xmlSAXHandlerV1 xmlSAXHandlerV1;
	typedef xmlSAXHandlerV1* xmlSAXHandlerV1Ptr;
	struct _xmlSAXHandlerV1 {
		internalSubsetSAXFunc internalSubset;
		isStandaloneSAXFunc isStandalone;
		hasInternalSubsetSAXFunc hasInternalSubset;
		hasExternalSubsetSAXFunc hasExternalSubset;
		resolveEntitySAXFunc resolveEntity;
		getEntitySAXFunc getEntity;
		entityDeclSAXFunc entityDecl;
		notationDeclSAXFunc notationDecl;
		attributeDeclSAXFunc attributeDecl;
		elementDeclSAXFunc elementDecl;
		unparsedEntityDeclSAXFunc unparsedEntityDecl;
		setDocumentLocatorSAXFunc setDocumentLocator;
		startDocumentSAXFunc startDocument;
		endDocumentSAXFunc endDocument;
		startElementSAXFunc startElement;
		endElementSAXFunc endElement;
		referenceSAXFunc reference;
		charactersSAXFunc characters;
		ignorableWhitespaceSAXFunc ignorableWhitespace;
		processingInstructionSAXFunc processingInstruction;
		commentSAXFunc comment;
		warningSAXFunc warning;
		errorSAXFunc error;
		fatalErrorSAXFunc fatalError; /* unused error() get all the errors */
		getParameterEntitySAXFunc getParameterEntity;
		cdataBlockSAXFunc cdataBlock;
		externalSubsetSAXFunc externalSubset;
		unsigned int initialized;
	};
	/**
	 * xmlExternalEntityLoader:<br>
	 * @URL: The System ID of the resource requested<br>
	 * @ID: The Public ID of the resource requested<br>
	 * @context: the XML parser context <br>
	 * * External entity loaders types.<br>
	 * * Returns the entity input parser.
	 */
	typedef xmlParserInputPtr (*xmlExternalEntityLoader)(const char* URL, const char* ID, xmlParserCtxtPtr context) xmlExternalEntityLoader;
	typedef int xmlParserInputPtr_callback(void* ctx, const xmlChar* publicId, const xmlChar* systemId);
	typedef int xmlEntityPtr_callback(void* ctx, const xmlChar* name);
}




/** Identifier for conversion method from one codeset to another. */
typedef void* iconv_t;
/**
 * Allocate descriptor for code conversion from codeset FROMCODE to<br>
 * codeset TOCODE.<br>
 * This function is a possible cancellation point and therefore not<br>
 * marked with __THROW.<br>
 * Original signature : <code>iconv_t iconv_open(__const char*, __const char*)</code>
 */
extern iconv_t iconv_open(__const char* __tocode, __const char* __fromcode);
/**
 * Convert at most *INBYTESLEFT bytes from *INBUF according to the<br>
 * code conversion algorithm specified by CD and place up to<br>
 * OUTBYTESLEFT bytes in buffer at *OUTBUF.<br>
 * Original signature : <code>size_t iconv(iconv_t, __declspec(__restrict) char**, __declspec(__restrict) size_t*, __declspec(__restrict) char**, __declspec(__restrict) size_t*)</code>
 */
extern size_t iconv(iconv_t __cd, __declspec(__restrict) char** __inbuf, __declspec(__restrict) size_t* __inbytesleft, __declspec(__restrict) char** __outbuf, __declspec(__restrict) size_t* __outbytesleft);
/**
 * Free resources allocated for descriptor CD for code conversion.<br>
 * This function is a possible cancellation point and therefore not<br>
 * marked with __THROW.<br>
 * Original signature : <code>int iconv_close(iconv_t)</code>
 */
extern int iconv_close(iconv_t __cd);
extern ""C"" {
/**
	 * xmlCharEncoding:<br>
	 * * Predefined values for some standard encodings.<br>
	 * Libxml does not do beforehand translation on UTF8 and ISOLatinX.<br>
	 * It also supports ASCII, ISO-8859-1, and UTF16 (LE and BE) by default.<br>
	 * * Anything else would have to be translated to UTF8 before being<br>
	 * given to the parser itself. The BOM for UTF16 and the encoding<br>
	 * declaration are looked at and a converter is looked for at that<br>
	 * point. If not found the parser stops here as asked by the XML REC. A<br>
	 * converter can be registered by the user using xmlRegisterCharEncodingHandler<br>
	 * but the current form doesn't allow stateful transcoding (a serious<br>
	 * problem agreed !). If iconv has been found it will be used<br>
	 * automatically and allow stateful transcoding, the simplest is then<br>
	 * to be sure to enable iconv and to provide iconv libs for the encoding<br>
	 * support needed.<br>
	 * * Note that the generic "UTF-16" is not a predefined value.  Instead, only<br>
	 * the specific UTF-16LE and UTF-16BE are present.
	 */
	typedef enum xmlCharEncoding {
		XML_CHAR_ENCODING_ERROR = -1 /* No char encoding detected */,
		XML_CHAR_ENCODING_NONE = 0 /* No char encoding detected */,
		XML_CHAR_ENCODING_UTF8 = 1 /* UTF-8 */,
		XML_CHAR_ENCODING_UTF16LE = 2 /* UTF-16 little endian */,
		XML_CHAR_ENCODING_UTF16BE = 3 /* UTF-16 big endian */,
		XML_CHAR_ENCODING_UCS4LE = 4 /* UCS-4 little endian */,
		XML_CHAR_ENCODING_UCS4BE = 5 /* UCS-4 big endian */,
		XML_CHAR_ENCODING_EBCDIC = 6 /* EBCDIC uh! */,
		XML_CHAR_ENCODING_UCS4_2143 = 7 /* UCS-4 unusual ordering */,
		XML_CHAR_ENCODING_UCS4_3412 = 8 /* UCS-4 unusual ordering */,
		XML_CHAR_ENCODING_UCS2 = 9 /* UCS-2 */,
		XML_CHAR_ENCODING_8859_1 = 10 /* ISO-8859-1 ISO Latin 1 */,
		XML_CHAR_ENCODING_8859_2 = 11 /* ISO-8859-2 ISO Latin 2 */,
		XML_CHAR_ENCODING_8859_3 = 12 /* ISO-8859-3 */,
		XML_CHAR_ENCODING_8859_4 = 13 /* ISO-8859-4 */,
		XML_CHAR_ENCODING_8859_5 = 14 /* ISO-8859-5 */,
		XML_CHAR_ENCODING_8859_6 = 15 /* ISO-8859-6 */,
		XML_CHAR_ENCODING_8859_7 = 16 /* ISO-8859-7 */,
		XML_CHAR_ENCODING_8859_8 = 17 /* ISO-8859-8 */,
		XML_CHAR_ENCODING_8859_9 = 18 /* ISO-8859-9 */,
		XML_CHAR_ENCODING_2022_JP = 19 /* ISO-2022-JP */,
		XML_CHAR_ENCODING_SHIFT_JIS = 20 /* Shift_JIS */,
		XML_CHAR_ENCODING_EUC_JP = 21 /* EUC-JP */,
		XML_CHAR_ENCODING_ASCII = 22 /* pure ASCII */
	} xmlCharEncoding;
	/**
	 * xmlCharEncodingInputFunc:<br>
	 * @out:  a pointer to an array of bytes to store the UTF-8 result<br>
	 * @outlen:  the length of @out<br>
	 * @in:  a pointer to an array of chars in the original encoding<br>
	 * @inlen:  the length of @in<br>
	 * * Take a block of chars in the original encoding and try to convert<br>
	 * it to an UTF-8 block of chars out.<br>
	 * * Returns the number of bytes written, -1 if lack of space, or -2<br>
	 *     if the transcoding failed.<br>
	 * The value of @inlen after return is the number of octets consumed<br>
	 *     if the return value is positive, else unpredictiable.<br>
	 * The value of @outlen after return is the number of octets consumed.
	 */
	typedef int (*xmlCharEncodingInputFunc)(unsigned char* out, int* outlen, const unsigned char* in, int* inlen) xmlCharEncodingInputFunc;
	/**
	 * xmlCharEncodingOutputFunc:<br>
	 * @out:  a pointer to an array of bytes to store the result<br>
	 * @outlen:  the length of @out<br>
	 * @in:  a pointer to an array of UTF-8 chars<br>
	 * @inlen:  the length of @in<br>
	 * * Take a block of UTF-8 chars in and try to convert it to another<br>
	 * encoding.<br>
	 * Note: a first call designed to produce heading info is called with<br>
	 * in = NULL. If stateful this should also initialize the encoder state.<br>
	 * * Returns the number of bytes written, -1 if lack of space, or -2<br>
	 *     if the transcoding failed.<br>
	 * The value of @inlen after return is the number of octets consumed<br>
	 *     if the return value is positive, else unpredictiable.<br>
	 * The value of @outlen after return is the number of octets produced.
	 */
	typedef int (*xmlCharEncodingOutputFunc)(unsigned char* out, int* outlen, const unsigned char* in, int* inlen) xmlCharEncodingOutputFunc;
	/**
	 * Block defining the handlers for non UTF-8 encodings.<br>
	 * If iconv is supported, there are two extra fields.
	 */
	typedef _xmlCharEncodingHandler xmlCharEncodingHandler;
	typedef xmlCharEncodingHandler* xmlCharEncodingHandlerPtr;
	struct _xmlCharEncodingHandler {
		char* name;
		xmlCharEncodingInputFunc input;
		xmlCharEncodingOutputFunc output;
		iconv_t iconv_in;
		iconv_t iconv_out;
	};
}
extern ""C"" {
/**
	 * Interfaces for encoding handlers.<br>
	 * Original signature : <code>void xmlInitCharEncodingHandlers()</code>
	 */
	void xmlInitCharEncodingHandlers();
	/** Original signature : <code>void xmlCleanupCharEncodingHandlers()</code> */
	void xmlCleanupCharEncodingHandlers();
	/** Original signature : <code>void xmlRegisterCharEncodingHandler(xmlCharEncodingHandlerPtr)</code> */
	void xmlRegisterCharEncodingHandler(xmlCharEncodingHandlerPtr handler);
	/** Original signature : <code>xmlCharEncodingHandlerPtr xmlGetCharEncodingHandler(xmlCharEncoding)</code> */
	xmlCharEncodingHandlerPtr xmlGetCharEncodingHandler(xmlCharEncoding enc);
	/** Original signature : <code>xmlCharEncodingHandlerPtr xmlFindCharEncodingHandler(const char*)</code> */
	xmlCharEncodingHandlerPtr xmlFindCharEncodingHandler(const char* name);
	/** Original signature : <code>xmlCharEncodingHandlerPtr xmlNewCharEncodingHandler(const char*, xmlCharEncodingInputFunc, xmlCharEncodingOutputFunc)</code> */
	xmlCharEncodingHandlerPtr xmlNewCharEncodingHandler(const char* name, xmlCharEncodingInputFunc input, xmlCharEncodingOutputFunc output);
	/**
	 * Interfaces for encoding names and aliases.<br>
	 * Original signature : <code>int xmlAddEncodingAlias(const char*, const char*)</code>
	 */
	int xmlAddEncodingAlias(const char* name, const char* alias);
	/** Original signature : <code>int xmlDelEncodingAlias(const char*)</code> */
	int xmlDelEncodingAlias(const char* alias);
	/** Original signature : <code>char* xmlGetEncodingAlias(const char*)</code> */
	const char* xmlGetEncodingAlias(const char* alias);
	/** Original signature : <code>void xmlCleanupEncodingAliases()</code> */
	void xmlCleanupEncodingAliases();
	/** Original signature : <code>xmlCharEncoding xmlParseCharEncoding(const char*)</code> */
	xmlCharEncoding xmlParseCharEncoding(const char* name);
	/** Original signature : <code>char* xmlGetCharEncodingName(xmlCharEncoding)</code> */
	const char* xmlGetCharEncodingName(xmlCharEncoding enc);
	/**
	 * Interfaces directly used by the parsers.<br>
	 * Original signature : <code>xmlCharEncoding xmlDetectCharEncoding(const unsigned char*, int)</code>
	 */
	xmlCharEncoding xmlDetectCharEncoding(const unsigned char* in, int len);
	/** Original signature : <code>int xmlCharEncOutFunc(xmlCharEncodingHandler*, xmlBufferPtr, xmlBufferPtr)</code> */
	int xmlCharEncOutFunc(xmlCharEncodingHandler* handler, xmlBufferPtr out, xmlBufferPtr in);
	/** Original signature : <code>int xmlCharEncInFunc(xmlCharEncodingHandler*, xmlBufferPtr, xmlBufferPtr)</code> */
	int xmlCharEncInFunc(xmlCharEncodingHandler* handler, xmlBufferPtr out, xmlBufferPtr in);
	/** Original signature : <code>int xmlCharEncFirstLine(xmlCharEncodingHandler*, xmlBufferPtr, xmlBufferPtr)</code> */
	int xmlCharEncFirstLine(xmlCharEncodingHandler* handler, xmlBufferPtr out, xmlBufferPtr in);
	/** Original signature : <code>int xmlCharEncCloseFunc(xmlCharEncodingHandler*)</code> */
	int xmlCharEncCloseFunc(xmlCharEncodingHandler* handler);
	/**
	 * Export a few useful functions<br>
	 * Original signature : <code>int UTF8Toisolat1(unsigned char*, int*, const unsigned char*, int*)</code>
	 */
	int UTF8Toisolat1(unsigned char* out, int* outlen, const unsigned char* in, int* inlen);
	/** Original signature : <code>int isolat1ToUTF8(unsigned char*, int*, const unsigned char*, int*)</code> */
	int isolat1ToUTF8(unsigned char* out, int* outlen, const unsigned char* in, int* inlen);
}



extern ""C"" {
/**
	 * xmlInputMatchCallback:<br>
	 * @filename: the filename or URI<br>
	 * * Callback used in the I/O Input API to detect if the current handler <br>
	 * can provide input fonctionnalities for this resource.<br>
	 * * Returns 1 if yes and 0 if another Input module should be used
	 */
	typedef int (*xmlInputMatchCallback)(const char* filename) xmlInputMatchCallback;
	/**
	 * xmlInputOpenCallback:<br>
	 * @filename: the filename or URI<br>
	 * * Callback used in the I/O Input API to open the resource<br>
	 * * Returns an Input context or NULL in case or error
	 */
	typedef void* (*xmlInputOpenCallback)(const char* filename) xmlInputOpenCallback;
	/**
	 * xmlInputReadCallback:<br>
	 * @context:  an Input context<br>
	 * @buffer:  the buffer to store data read<br>
	 * @len:  the length of the buffer in bytes<br>
	 * * Callback used in the I/O Input API to read the resource<br>
	 * * Returns the number of bytes read or -1 in case of error
	 */
	typedef int (*xmlInputReadCallback)(void* context, char* buffer, int len) xmlInputReadCallback;
	/**
	 * xmlInputCloseCallback:<br>
	 * @context:  an Input context<br>
	 * * Callback used in the I/O Input API to close the resource<br>
	 * * Returns 0 or -1 in case of error
	 */
	typedef int (*xmlInputCloseCallback)(void* context) xmlInputCloseCallback;
	/**
	 * xmlOutputMatchCallback:<br>
	 * @filename: the filename or URI<br>
	 * * Callback used in the I/O Output API to detect if the current handler <br>
	 * can provide output fonctionnalities for this resource.<br>
	 * * Returns 1 if yes and 0 if another Output module should be used
	 */
	typedef int (*xmlOutputMatchCallback)(const char* filename) xmlOutputMatchCallback;
	/**
	 * xmlOutputOpenCallback:<br>
	 * @filename: the filename or URI<br>
	 * * Callback used in the I/O Output API to open the resource<br>
	 * * Returns an Output context or NULL in case or error
	 */
	typedef void* (*xmlOutputOpenCallback)(const char* filename) xmlOutputOpenCallback;
	/**
	 * xmlOutputWriteCallback:<br>
	 * @context:  an Output context<br>
	 * @buffer:  the buffer of data to write<br>
	 * @len:  the length of the buffer in bytes<br>
	 * * Callback used in the I/O Output API to write to the resource<br>
	 * * Returns the number of bytes written or -1 in case of error
	 */
	typedef int (*xmlOutputWriteCallback)(void* context, const char* buffer, int len) xmlOutputWriteCallback;
	/**
	 * xmlOutputCloseCallback:<br>
	 * @context:  an Output context<br>
	 * * Callback used in the I/O Output API to close the resource<br>
	 * * Returns 0 or -1 in case of error
	 */
	typedef int (*xmlOutputCloseCallback)(void* context) xmlOutputCloseCallback;
}



extern ""C"" {
struct _xmlParserInputBuffer {
		void* context;
		xmlInputReadCallback readcallback;
		xmlInputCloseCallback closecallback;
		xmlCharEncodingHandlerPtr encoder; /* I18N conversions to UTF-8 */
		xmlBufferPtr buffer; /* Local buffer encoded in UTF-8 */
		xmlBufferPtr raw; /* if encoder != NULL buffer for raw input */
		int compressed; /* -1=unknown, 0=not compressed, 1=compressed */
		int error;
		unsigned long rawconsumed; /* amount consumed from raw */
	};
	struct _xmlOutputBuffer {
		void* context;
		xmlOutputWriteCallback writecallback;
		xmlOutputCloseCallback closecallback;
		xmlCharEncodingHandlerPtr encoder; /* I18N conversions to UTF-8 */
		xmlBufferPtr buffer; /* Local buffer encoded in UTF-8 or ISOLatin */
		xmlBufferPtr conv; /* if encoder != NULL buffer for output */
		int written; /* total number of byte written */
		int error;
	};
	/**
	 * Interfaces for input<br>
	 * Original signature : <code>void xmlCleanupInputCallbacks()</code>
	 */
	void xmlCleanupInputCallbacks();
	/** Original signature : <code>int xmlPopInputCallbacks()</code> */
	int xmlPopInputCallbacks();
	/** Original signature : <code>void xmlRegisterDefaultInputCallbacks()</code> */
	void xmlRegisterDefaultInputCallbacks();
	/** Original signature : <code>xmlParserInputBufferPtr xmlAllocParserInputBuffer(xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlAllocParserInputBuffer(xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputBufferPtr xmlParserInputBufferCreateFilename(const char*, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlParserInputBufferCreateFilename(const char* URI, xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputBufferPtr xmlParserInputBufferCreateFile(FILE*, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlParserInputBufferCreateFile(FILE* file, xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputBufferPtr xmlParserInputBufferCreateFd(int, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlParserInputBufferCreateFd(int fd, xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputBufferPtr xmlParserInputBufferCreateMem(const char*, int, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlParserInputBufferCreateMem(const char* mem, int size, xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputBufferPtr xmlParserInputBufferCreateStatic(const char*, int, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlParserInputBufferCreateStatic(const char* mem, int size, xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputBufferPtr xmlParserInputBufferCreateIO(xmlInputReadCallback, xmlInputCloseCallback, void*, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr xmlParserInputBufferCreateIO(xmlInputReadCallback ioread, xmlInputCloseCallback ioclose, void* ioctx, xmlCharEncoding enc);
	/** Original signature : <code>int xmlParserInputBufferRead(xmlParserInputBufferPtr, int)</code> */
	int xmlParserInputBufferRead(xmlParserInputBufferPtr in, int len);
	/** Original signature : <code>int xmlParserInputBufferGrow(xmlParserInputBufferPtr, int)</code> */
	int xmlParserInputBufferGrow(xmlParserInputBufferPtr in, int len);
	/** Original signature : <code>int xmlParserInputBufferPush(xmlParserInputBufferPtr, int, const char*)</code> */
	int xmlParserInputBufferPush(xmlParserInputBufferPtr in, int len, const char* buf);
	/** Original signature : <code>void xmlFreeParserInputBuffer(xmlParserInputBufferPtr)</code> */
	void xmlFreeParserInputBuffer(xmlParserInputBufferPtr in);
	/** Original signature : <code>char* xmlParserGetDirectory(const char*)</code> */
	char* xmlParserGetDirectory(const char* filename);
	/** Original signature : <code>int xmlRegisterInputCallbacks(xmlInputMatchCallback, xmlInputOpenCallback, xmlInputReadCallback, xmlInputCloseCallback)</code> */
	int xmlRegisterInputCallbacks(xmlInputMatchCallback matchFunc, xmlInputOpenCallback openFunc, xmlInputReadCallback readFunc, xmlInputCloseCallback closeFunc);
	/** Original signature : <code>xmlParserInputBufferPtr __xmlParserInputBufferCreateFilename(const char*, xmlCharEncoding)</code> */
	xmlParserInputBufferPtr __xmlParserInputBufferCreateFilename(const char* URI, xmlCharEncoding enc);
	/**
	 * Interfaces for output<br>
	 * Original signature : <code>void xmlCleanupOutputCallbacks()</code>
	 */
	void xmlCleanupOutputCallbacks();
	/** Original signature : <code>void xmlRegisterDefaultOutputCallbacks()</code> */
	void xmlRegisterDefaultOutputCallbacks();
	/** Original signature : <code>xmlOutputBufferPtr xmlAllocOutputBuffer(xmlCharEncodingHandlerPtr)</code> */
	xmlOutputBufferPtr xmlAllocOutputBuffer(xmlCharEncodingHandlerPtr encoder);
	/** Original signature : <code>xmlOutputBufferPtr xmlOutputBufferCreateFilename(const char*, xmlCharEncodingHandlerPtr, int)</code> */
	xmlOutputBufferPtr xmlOutputBufferCreateFilename(const char* URI, xmlCharEncodingHandlerPtr encoder, int compression);
	/** Original signature : <code>xmlOutputBufferPtr xmlOutputBufferCreateFile(FILE*, xmlCharEncodingHandlerPtr)</code> */
	xmlOutputBufferPtr xmlOutputBufferCreateFile(FILE* file, xmlCharEncodingHandlerPtr encoder);
	/** Original signature : <code>xmlOutputBufferPtr xmlOutputBufferCreateBuffer(xmlBufferPtr, xmlCharEncodingHandlerPtr)</code> */
	xmlOutputBufferPtr xmlOutputBufferCreateBuffer(xmlBufferPtr buffer, xmlCharEncodingHandlerPtr encoder);
	/** Original signature : <code>xmlOutputBufferPtr xmlOutputBufferCreateFd(int, xmlCharEncodingHandlerPtr)</code> */
	xmlOutputBufferPtr xmlOutputBufferCreateFd(int fd, xmlCharEncodingHandlerPtr encoder);
	/** Original signature : <code>xmlOutputBufferPtr xmlOutputBufferCreateIO(xmlOutputWriteCallback, xmlOutputCloseCallback, void*, xmlCharEncodingHandlerPtr)</code> */
	xmlOutputBufferPtr xmlOutputBufferCreateIO(xmlOutputWriteCallback iowrite, xmlOutputCloseCallback ioclose, void* ioctx, xmlCharEncodingHandlerPtr encoder);
	/** Original signature : <code>int xmlOutputBufferWrite(xmlOutputBufferPtr, int, const char*)</code> */
	int xmlOutputBufferWrite(xmlOutputBufferPtr out, int len, const char* buf);
	/** Original signature : <code>int xmlOutputBufferWriteString(xmlOutputBufferPtr, const char*)</code> */
	int xmlOutputBufferWriteString(xmlOutputBufferPtr out, const char* str);
	/** Original signature : <code>int xmlOutputBufferWriteEscape(xmlOutputBufferPtr, const xmlChar*, xmlCharEncodingOutputFunc)</code> */
	int xmlOutputBufferWriteEscape(xmlOutputBufferPtr out, const xmlChar* str, xmlCharEncodingOutputFunc escaping);
	/** Original signature : <code>int xmlOutputBufferFlush(xmlOutputBufferPtr)</code> */
	int xmlOutputBufferFlush(xmlOutputBufferPtr out);
	/** Original signature : <code>int xmlOutputBufferClose(xmlOutputBufferPtr)</code> */
	int xmlOutputBufferClose(xmlOutputBufferPtr out);
	/** Original signature : <code>int xmlRegisterOutputCallbacks(xmlOutputMatchCallback, xmlOutputOpenCallback, xmlOutputWriteCallback, xmlOutputCloseCallback)</code> */
	int xmlRegisterOutputCallbacks(xmlOutputMatchCallback matchFunc, xmlOutputOpenCallback openFunc, xmlOutputWriteCallback writeFunc, xmlOutputCloseCallback closeFunc);
	/** Original signature : <code>xmlOutputBufferPtr __xmlOutputBufferCreateFilename(const char*, xmlCharEncodingHandlerPtr, int)</code> */
	xmlOutputBufferPtr __xmlOutputBufferCreateFilename(const char* URI, xmlCharEncodingHandlerPtr encoder, int compression);
	/**
	 * This function only exists if HTTP support built into the library<br>
	 * Original signature : <code>void xmlRegisterHTTPPostCallbacks()</code>
	 */
	void xmlRegisterHTTPPostCallbacks();
	/** Original signature : <code>xmlParserInputPtr xmlCheckHTTPInput(xmlParserCtxtPtr, xmlParserInputPtr)</code> */
	xmlParserInputPtr xmlCheckHTTPInput(xmlParserCtxtPtr ctxt, xmlParserInputPtr ret);
	/**
	 * A predefined entity loader disabling network accesses<br>
	 * Original signature : <code>xmlParserInputPtr xmlNoNetExternalEntityLoader(const char*, const char*, xmlParserCtxtPtr)</code>
	 */
	xmlParserInputPtr xmlNoNetExternalEntityLoader(const char* URL, const char* ID, xmlParserCtxtPtr ctxt);
	/**
	 * xmlNormalizeWindowsPath is obsolete, don't use it. <br>
	 * Check xmlCanonicPath in uri.h for a better alternative.<br>
	 * Original signature : <code>xmlChar* xmlNormalizeWindowsPath(const xmlChar*)</code>
	 */
	xmlChar* xmlNormalizeWindowsPath(const xmlChar* path);
	/** Original signature : <code>int xmlCheckFilename(const char*)</code> */
	int xmlCheckFilename(const char* path);
	/**
	 * Default 'file://' protocol callbacks<br>
	 * Original signature : <code>int xmlFileMatch(const char*)</code>
	 */
	int xmlFileMatch(const char* filename);
	/** Original signature : <code>void* xmlFileOpen(const char*)</code> */
	void* xmlFileOpen(const char* filename);
	/** Original signature : <code>int xmlFileRead(void*, char*, int)</code> */
	int xmlFileRead(void* context, char* buffer, int len);
	/** Original signature : <code>int xmlFileClose(void*)</code> */
	int xmlFileClose(void* context);
	/**
	 * Default 'http://' protocol callbacks<br>
	 * Original signature : <code>int xmlIOHTTPMatch(const char*)</code>
	 */
	int xmlIOHTTPMatch(const char* filename);
	/** Original signature : <code>void* xmlIOHTTPOpen(const char*)</code> */
	void* xmlIOHTTPOpen(const char* filename);
	/** Original signature : <code>void* xmlIOHTTPOpenW(const char*, int)</code> */
	void* xmlIOHTTPOpenW(const char* post_uri, int compression);
	/** Original signature : <code>int xmlIOHTTPRead(void*, char*, int)</code> */
	int xmlIOHTTPRead(void* context, char* buffer, int len);
	/** Original signature : <code>int xmlIOHTTPClose(void*)</code> */
	int xmlIOHTTPClose(void* context);
	/**
	 * Default 'ftp://' protocol callbacks<br>
	 * Original signature : <code>int xmlIOFTPMatch(const char*)</code>
	 */
	int xmlIOFTPMatch(const char* filename);
	/** Original signature : <code>void* xmlIOFTPOpen(const char*)</code> */
	void* xmlIOFTPOpen(const char* filename);
	/** Original signature : <code>int xmlIOFTPRead(void*, char*, int)</code> */
	int xmlIOFTPRead(void* context, char* buffer, int len);
	/** Original signature : <code>int xmlIOFTPClose(void*)</code> */
	int xmlIOFTPClose(void* context);
}

extern ""C"" {
/**
	 * Init/Cleanup<br>
	 * Original signature : <code>void xmlInitParser()</code>
	 */
	void xmlInitParser();
	/** Original signature : <code>void xmlCleanupParser()</code> */
	void xmlCleanupParser();
	/**
	 * Input functions<br>
	 * Original signature : <code>int xmlParserInputRead(xmlParserInputPtr, int)</code>
	 */
	int xmlParserInputRead(xmlParserInputPtr in, int len);
	/** Original signature : <code>int xmlParserInputGrow(xmlParserInputPtr, int)</code> */
	int xmlParserInputGrow(xmlParserInputPtr in, int len);
	/**
	 * Basic parsing Interfaces<br>
	 * Original signature : <code>xmlDocPtr xmlParseDoc(const xmlChar*)</code>
	 */
	xmlDocPtr xmlParseDoc(const xmlChar* cur);
	/** Original signature : <code>xmlDocPtr xmlParseFile(const char*)</code> */
	xmlDocPtr xmlParseFile(const char* filename);
	/** Original signature : <code>xmlDocPtr xmlParseMemory(const char*, int)</code> */
	xmlDocPtr xmlParseMemory(const char* buffer, int size);
	/** Original signature : <code>int xmlSubstituteEntitiesDefault(int)</code> */
	int xmlSubstituteEntitiesDefault(int val);
	/** Original signature : <code>int xmlKeepBlanksDefault(int)</code> */
	int xmlKeepBlanksDefault(int val);
	/** Original signature : <code>void xmlStopParser(xmlParserCtxtPtr)</code> */
	void xmlStopParser(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>int xmlPedanticParserDefault(int)</code> */
	int xmlPedanticParserDefault(int val);
	/** Original signature : <code>int xmlLineNumbersDefault(int)</code> */
	int xmlLineNumbersDefault(int val);
	/**
	 * Recovery mode<br>
	 * Original signature : <code>xmlDocPtr xmlRecoverDoc(const xmlChar*)</code>
	 */
	xmlDocPtr xmlRecoverDoc(const xmlChar* cur);
	/** Original signature : <code>xmlDocPtr xmlRecoverMemory(const char*, int)</code> */
	xmlDocPtr xmlRecoverMemory(const char* buffer, int size);
	/** Original signature : <code>xmlDocPtr xmlRecoverFile(const char*)</code> */
	xmlDocPtr xmlRecoverFile(const char* filename);
	/**
	 * Less common routines and SAX interfaces<br>
	 * Original signature : <code>int xmlParseDocument(xmlParserCtxtPtr)</code>
	 */
	int xmlParseDocument(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>int xmlParseExtParsedEnt(xmlParserCtxtPtr)</code> */
	int xmlParseExtParsedEnt(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>int xmlSAXUserParseFile(xmlSAXHandlerPtr, void*, const char*)</code> */
	int xmlSAXUserParseFile(xmlSAXHandlerPtr sax, void* user_data, const char* filename);
	/** Original signature : <code>int xmlSAXUserParseMemory(xmlSAXHandlerPtr, void*, const char*, int)</code> */
	int xmlSAXUserParseMemory(xmlSAXHandlerPtr sax, void* user_data, const char* buffer, int size);
	/** Original signature : <code>xmlDocPtr xmlSAXParseDoc(xmlSAXHandlerPtr, const xmlChar*, int)</code> */
	xmlDocPtr xmlSAXParseDoc(xmlSAXHandlerPtr sax, const xmlChar* cur, int recovery);
	/** Original signature : <code>xmlDocPtr xmlSAXParseMemory(xmlSAXHandlerPtr, const char*, int, int)</code> */
	xmlDocPtr xmlSAXParseMemory(xmlSAXHandlerPtr sax, const char* buffer, int size, int recovery);
	/** Original signature : <code>xmlDocPtr xmlSAXParseMemoryWithData(xmlSAXHandlerPtr, const char*, int, int, void*)</code> */
	xmlDocPtr xmlSAXParseMemoryWithData(xmlSAXHandlerPtr sax, const char* buffer, int size, int recovery, void* data);
	/** Original signature : <code>xmlDocPtr xmlSAXParseFile(xmlSAXHandlerPtr, const char*, int)</code> */
	xmlDocPtr xmlSAXParseFile(xmlSAXHandlerPtr sax, const char* filename, int recovery);
	/** Original signature : <code>xmlDocPtr xmlSAXParseFileWithData(xmlSAXHandlerPtr, const char*, int, void*)</code> */
	xmlDocPtr xmlSAXParseFileWithData(xmlSAXHandlerPtr sax, const char* filename, int recovery, void* data);
	/** Original signature : <code>xmlDocPtr xmlSAXParseEntity(xmlSAXHandlerPtr, const char*)</code> */
	xmlDocPtr xmlSAXParseEntity(xmlSAXHandlerPtr sax, const char* filename);
	/** Original signature : <code>xmlDocPtr xmlParseEntity(const char*)</code> */
	xmlDocPtr xmlParseEntity(const char* filename);
	/** Original signature : <code>xmlDtdPtr xmlSAXParseDTD(xmlSAXHandlerPtr, const xmlChar*, const xmlChar*)</code> */
	xmlDtdPtr xmlSAXParseDTD(xmlSAXHandlerPtr sax, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>xmlDtdPtr xmlParseDTD(const xmlChar*, const xmlChar*)</code> */
	xmlDtdPtr xmlParseDTD(const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>xmlDtdPtr xmlIOParseDTD(xmlSAXHandlerPtr, xmlParserInputBufferPtr, xmlCharEncoding)</code> */
	xmlDtdPtr xmlIOParseDTD(xmlSAXHandlerPtr sax, xmlParserInputBufferPtr input, xmlCharEncoding enc);
	/** Original signature : <code>int xmlParseBalancedChunkMemory(xmlDocPtr, xmlSAXHandlerPtr, void*, int, const xmlChar*, xmlNodePtr*)</code> */
	int xmlParseBalancedChunkMemory(xmlDocPtr doc, xmlSAXHandlerPtr sax, void* user_data, int depth, const xmlChar* string, xmlNodePtr* lst);
	/** Original signature : <code>xmlParserErrors xmlParseInNodeContext(xmlNodePtr, const char*, int, int, xmlNodePtr*)</code> */
	xmlParserErrors xmlParseInNodeContext(xmlNodePtr node, const char* data, int datalen, int options, xmlNodePtr* lst);
	/** Original signature : <code>int xmlParseBalancedChunkMemoryRecover(xmlDocPtr, xmlSAXHandlerPtr, void*, int, const xmlChar*, xmlNodePtr*, int)</code> */
	int xmlParseBalancedChunkMemoryRecover(xmlDocPtr doc, xmlSAXHandlerPtr sax, void* user_data, int depth, const xmlChar* string, xmlNodePtr* lst, int recover);
	/** Original signature : <code>int xmlParseExternalEntity(xmlDocPtr, xmlSAXHandlerPtr, void*, int, const xmlChar*, const xmlChar*, xmlNodePtr*)</code> */
	int xmlParseExternalEntity(xmlDocPtr doc, xmlSAXHandlerPtr sax, void* user_data, int depth, const xmlChar* URL, const xmlChar* ID, xmlNodePtr* lst);
	/** Original signature : <code>int xmlParseCtxtExternalEntity(xmlParserCtxtPtr, const xmlChar*, const xmlChar*, xmlNodePtr*)</code> */
	int xmlParseCtxtExternalEntity(xmlParserCtxtPtr ctx, const xmlChar* URL, const xmlChar* ID, xmlNodePtr* lst);
	/**
	 * Parser contexts handling.<br>
	 * Original signature : <code>xmlParserCtxtPtr xmlNewParserCtxt()</code>
	 */
	xmlParserCtxtPtr xmlNewParserCtxt();
	/** Original signature : <code>int xmlInitParserCtxt(xmlParserCtxtPtr)</code> */
	int xmlInitParserCtxt(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>void xmlClearParserCtxt(xmlParserCtxtPtr)</code> */
	void xmlClearParserCtxt(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>void xmlFreeParserCtxt(xmlParserCtxtPtr)</code> */
	void xmlFreeParserCtxt(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>void xmlSetupParserForBuffer(xmlParserCtxtPtr, const xmlChar*, const char*)</code> */
	void xmlSetupParserForBuffer(xmlParserCtxtPtr ctxt, const xmlChar* buffer, const char* filename);
	/** Original signature : <code>xmlParserCtxtPtr xmlCreateDocParserCtxt(const xmlChar*)</code> */
	xmlParserCtxtPtr xmlCreateDocParserCtxt(const xmlChar* cur);
	/**
	 * Reading/setting optional parsing features.<br>
	 * Original signature : <code>int xmlGetFeaturesList(int*, const char**)</code>
	 */
	int xmlGetFeaturesList(int* len, const char** result);
	/** Original signature : <code>int xmlGetFeature(xmlParserCtxtPtr, const char*, void*)</code> */
	int xmlGetFeature(xmlParserCtxtPtr ctxt, const char* name, void* result);
	/** Original signature : <code>int xmlSetFeature(xmlParserCtxtPtr, const char*, void*)</code> */
	int xmlSetFeature(xmlParserCtxtPtr ctxt, const char* name, void* value);
	/**
	 * Interfaces for the Push mode.<br>
	 * Original signature : <code>xmlParserCtxtPtr xmlCreatePushParserCtxt(xmlSAXHandlerPtr, void*, const char*, int, const char*)</code>
	 */
	xmlParserCtxtPtr xmlCreatePushParserCtxt(xmlSAXHandlerPtr sax, void* user_data, const char* chunk, int size, const char* filename);
	/** Original signature : <code>int xmlParseChunk(xmlParserCtxtPtr, const char*, int, int)</code> */
	int xmlParseChunk(xmlParserCtxtPtr ctxt, const char* chunk, int size, int terminate);
	/**
	 * Special I/O mode.<br>
	 * Original signature : <code>xmlParserCtxtPtr xmlCreateIOParserCtxt(xmlSAXHandlerPtr, void*, xmlInputReadCallback, xmlInputCloseCallback, void*, xmlCharEncoding)</code>
	 */
	xmlParserCtxtPtr xmlCreateIOParserCtxt(xmlSAXHandlerPtr sax, void* user_data, xmlInputReadCallback ioread, xmlInputCloseCallback ioclose, void* ioctx, xmlCharEncoding enc);
	/** Original signature : <code>xmlParserInputPtr xmlNewIOInputStream(xmlParserCtxtPtr, xmlParserInputBufferPtr, xmlCharEncoding)</code> */
	xmlParserInputPtr xmlNewIOInputStream(xmlParserCtxtPtr ctxt, xmlParserInputBufferPtr input, xmlCharEncoding enc);
	/**
	 * Node infos.<br>
	 * Original signature : <code>xmlParserNodeInfo* xmlParserFindNodeInfo(const xmlParserCtxtPtr, const xmlNodePtr)</code>
	 */
	const xmlParserNodeInfo* xmlParserFindNodeInfo(const xmlParserCtxtPtr ctxt, const xmlNodePtr node);
	/** Original signature : <code>void xmlInitNodeInfoSeq(xmlParserNodeInfoSeqPtr)</code> */
	void xmlInitNodeInfoSeq(xmlParserNodeInfoSeqPtr seq);
	/** Original signature : <code>void xmlClearNodeInfoSeq(xmlParserNodeInfoSeqPtr)</code> */
	void xmlClearNodeInfoSeq(xmlParserNodeInfoSeqPtr seq);
	/** Original signature : <code>long xmlParserFindNodeInfoIndex(const xmlParserNodeInfoSeqPtr, const xmlNodePtr)</code> */
	unsigned long xmlParserFindNodeInfoIndex(const xmlParserNodeInfoSeqPtr seq, const xmlNodePtr node);
	/** Original signature : <code>void xmlParserAddNodeInfo(xmlParserCtxtPtr, const xmlParserNodeInfoPtr)</code> */
	void xmlParserAddNodeInfo(xmlParserCtxtPtr ctxt, const xmlParserNodeInfoPtr info);
	/**
	 * External entities handling actually implemented in xmlIO.<br>
	 * Original signature : <code>void xmlSetExternalEntityLoader(xmlExternalEntityLoader)</code>
	 */
	void xmlSetExternalEntityLoader(xmlExternalEntityLoader f);
	/** Original signature : <code>xmlExternalEntityLoader xmlGetExternalEntityLoader()</code> */
	xmlExternalEntityLoader xmlGetExternalEntityLoader();
	/** Original signature : <code>xmlParserInputPtr xmlLoadExternalEntity(const char*, const char*, xmlParserCtxtPtr)</code> */
	xmlParserInputPtr xmlLoadExternalEntity(const char* URL, const char* ID, xmlParserCtxtPtr ctxt);
	/**
	 * Index lookup, actually implemented in the encoding module<br>
	 * Original signature : <code>long xmlByteConsumed(xmlParserCtxtPtr)</code>
	 */
	long xmlByteConsumed(xmlParserCtxtPtr ctxt);
	/**
	 * xmlParserOption:<br>
	 * * This is the set of XML parser options that can be passed down<br>
	 * to the xmlReadDoc() and similar calls.
	 */
	typedef enum xmlParserOption {
		XML_PARSE_RECOVER = 1 << 0 /* recover on errors */,
		XML_PARSE_NOENT = 1 << 1 /* substitute entities */,
		XML_PARSE_DTDLOAD = 1 << 2 /* load the external subset */,
		XML_PARSE_DTDATTR = 1 << 3 /* default DTD attributes */,
		XML_PARSE_DTDVALID = 1 << 4 /* validate with the DTD */,
		XML_PARSE_NOERROR = 1 << 5 /* suppress error reports */,
		XML_PARSE_NOWARNING = 1 << 6 /* suppress warning reports */,
		XML_PARSE_PEDANTIC = 1 << 7 /* pedantic error reporting */,
		XML_PARSE_NOBLANKS = 1 << 8 /* remove blank nodes */,
		XML_PARSE_SAX1 = 1 << 9 /* use the SAX1 interface internally */,
		XML_PARSE_XINCLUDE = 1 << 10 /* Implement XInclude substitition  */,
		XML_PARSE_NONET = 1 << 11 /* Forbid network access */,
		XML_PARSE_NODICT = 1 << 12 /* Do not reuse the context dictionnary */,
		XML_PARSE_NSCLEAN = 1 << 13 /* remove redundant namespaces declarations */,
		XML_PARSE_NOCDATA = 1 << 14 /* merge CDATA as text nodes */,
		XML_PARSE_NOXINCNODE = 1 << 15 /* do not generate XINCLUDE START/END nodes */,
		XML_PARSE_COMPACT = 1 << 16 /* compact small text nodes; no modification of
                                   the tree allowed afterwards (will possibly
				   crash if you try to modify the tree) */,
		XML_PARSE_OLD10 = 1 << 17 /* parse using XML-1.0 before update 5 */,
		XML_PARSE_NOBASEFIX = 1 << 18 /* do not fixup XINCLUDE xml:base uris */,
		XML_PARSE_HUGE = 1 << 19 /* relax any hardcoded limit from the parser */,
		XML_PARSE_OLDSAX = 1 << 20 /* parse using SAX2 interface from before 2.7.0 */
	} xmlParserOption;
	/** Original signature : <code>void xmlCtxtReset(xmlParserCtxtPtr)</code> */
	void xmlCtxtReset(xmlParserCtxtPtr ctxt);
	/** Original signature : <code>int xmlCtxtResetPush(xmlParserCtxtPtr, const char*, int, const char*, const char*)</code> */
	int xmlCtxtResetPush(xmlParserCtxtPtr ctxt, const char* chunk, int size, const char* filename, const char* encoding);
	/** Original signature : <code>int xmlCtxtUseOptions(xmlParserCtxtPtr, int)</code> */
	int xmlCtxtUseOptions(xmlParserCtxtPtr ctxt, int options);
	/** Original signature : <code>xmlDocPtr xmlReadDoc(const xmlChar*, const char*, const char*, int)</code> */
	xmlDocPtr xmlReadDoc(const xmlChar* cur, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlReadFile(const char*, const char*, int)</code> */
	xmlDocPtr xmlReadFile(const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlReadMemory(const char*, int, const char*, const char*, int)</code> */
	xmlDocPtr xmlReadMemory(const char* buffer, int size, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlReadFd(int, const char*, const char*, int)</code> */
	xmlDocPtr xmlReadFd(int fd, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlReadIO(xmlInputReadCallback, xmlInputCloseCallback, void*, const char*, const char*, int)</code> */
	xmlDocPtr xmlReadIO(xmlInputReadCallback ioread, xmlInputCloseCallback ioclose, void* ioctx, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlCtxtReadDoc(xmlParserCtxtPtr, const xmlChar*, const char*, const char*, int)</code> */
	xmlDocPtr xmlCtxtReadDoc(xmlParserCtxtPtr ctxt, const xmlChar* cur, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlCtxtReadFile(xmlParserCtxtPtr, const char*, const char*, int)</code> */
	xmlDocPtr xmlCtxtReadFile(xmlParserCtxtPtr ctxt, const char* filename, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlCtxtReadMemory(xmlParserCtxtPtr, const char*, int, const char*, const char*, int)</code> */
	xmlDocPtr xmlCtxtReadMemory(xmlParserCtxtPtr ctxt, const char* buffer, int size, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlCtxtReadFd(xmlParserCtxtPtr, int, const char*, const char*, int)</code> */
	xmlDocPtr xmlCtxtReadFd(xmlParserCtxtPtr ctxt, int fd, const char* URL, const char* encoding, int options);
	/** Original signature : <code>xmlDocPtr xmlCtxtReadIO(xmlParserCtxtPtr, xmlInputReadCallback, xmlInputCloseCallback, void*, const char*, const char*, int)</code> */
	xmlDocPtr xmlCtxtReadIO(xmlParserCtxtPtr ctxt, xmlInputReadCallback ioread, xmlInputCloseCallback ioclose, void* ioctx, const char* URL, const char* encoding, int options);
	/**
	 * xmlFeature:<br>
	 * * Used to examine the existance of features that can be enabled<br>
	 * or disabled at compile-time.<br>
	 * They used to be called XML_FEATURE_xxx but this clashed with Expat
	 */
	typedef enum xmlFeature {
		XML_WITH_THREAD = 1,
		XML_WITH_TREE = 2,
		XML_WITH_OUTPUT = 3,
		XML_WITH_PUSH = 4,
		XML_WITH_READER = 5,
		XML_WITH_PATTERN = 6,
		XML_WITH_WRITER = 7,
		XML_WITH_SAX1 = 8,
		XML_WITH_FTP = 9,
		XML_WITH_HTTP = 10,
		XML_WITH_VALID = 11,
		XML_WITH_HTML = 12,
		XML_WITH_LEGACY = 13,
		XML_WITH_C14N = 14,
		XML_WITH_CATALOG = 15,
		XML_WITH_XPATH = 16,
		XML_WITH_XPTR = 17,
		XML_WITH_XINCLUDE = 18,
		XML_WITH_ICONV = 19,
		XML_WITH_ISO8859X = 20,
		XML_WITH_UNICODE = 21,
		XML_WITH_REGEXP = 22,
		XML_WITH_AUTOMATA = 23,
		XML_WITH_EXPR = 24,
		XML_WITH_SCHEMAS = 25,
		XML_WITH_SCHEMATRON = 26,
		XML_WITH_MODULES = 27,
		XML_WITH_DEBUG = 28,
		XML_WITH_DEBUG_MEM = 29,
		XML_WITH_DEBUG_RUN = 30,
		XML_WITH_ZLIB = 31,
		XML_WITH_ICU = 32,
		XML_WITH_NONE = 99999 /* just to be sure of allocation size */
	} xmlFeature;
	/** Original signature : <code>int xmlHasFeature(xmlFeature)</code> */
	int xmlHasFeature(xmlFeature feature);
}








/** Returned by `div'. */
typedef struct div_t {
	int quot; /* Quotient.  */
	int rem; /* Remainder.  */
} div_t;
/** Returned by `ldiv'. */
typedef struct ldiv_t {
	long long quot; /* Quotient.  */
	long long rem; /* Remainder.  */
} ldiv_t;
/** Returned by `lldiv'. */
typedef struct lldiv_t {
	long long long quot; /* Quotient.  */
	long long long rem; /* Remainder.  */
} lldiv_t;










extern ""C"" {
/**
	 * Various defines for the various Link properties.<br>
	 * * NOTE: the link detection layer will try to resolve QName expansion<br>
	 *       of namespaces. If "foo" is the prefix for "http://foo.com/"<br>
	 *       then the link detection layer will expand role="foo:myrole"<br>
	 *       to "http://foo.com/:myrole".<br>
	 * NOTE: the link detection layer will expand URI-Refences found on<br>
	 *       href attributes by using the base mechanism if found.
	 */
	typedef xmlChar* xlinkHRef;
	typedef xmlChar* xlinkRole;
	typedef xmlChar* xlinkTitle;
	typedef enum xlinkType {
		XLINK_TYPE_NONE = 0,
		XLINK_TYPE_SIMPLE,
		XLINK_TYPE_EXTENDED,
		XLINK_TYPE_EXTENDED_SET
	} xlinkType;
	typedef enum xlinkShow {
		XLINK_SHOW_NONE = 0,
		XLINK_SHOW_NEW,
		XLINK_SHOW_EMBED,
		XLINK_SHOW_REPLACE
	} xlinkShow;
	typedef enum xlinkActuate {
		XLINK_ACTUATE_NONE = 0,
		XLINK_ACTUATE_AUTO,
		XLINK_ACTUATE_ONREQUEST
	} xlinkActuate;
	/**
	 * xlinkNodeDetectFunc:<br>
	 * @ctx:  user data pointer<br>
	 * @node:  the node to check<br>
	 * <br>
	 * This is the prototype for the link detection routine.<br>
	 * It calls the default link detection callbacks upon link detection.
	 */
	typedef void (*xlinkNodeDetectFunc)(void* ctx, xmlNodePtr node) xlinkNodeDetectFunc;
	/**
	 * xlinkSimpleLinkFunk:<br>
	 * @ctx:  user data pointer<br>
	 * @node:  the node carrying the link<br>
	 * @href:  the target of the link<br>
	 * @role:  the role string<br>
	 * @title:  the link title<br>
	 * * This is the prototype for a simple link detection callback.
	 */
	typedef void (*xlinkSimpleLinkFunk)(void* ctx, xmlNodePtr node, const xlinkHRef href, const xlinkRole role, const xlinkTitle title) xlinkSimpleLinkFunk;
	/**
	 * xlinkExtendedLinkFunk:<br>
	 * @ctx:  user data pointer<br>
	 * @node:  the node carrying the link<br>
	 * @nbLocators: the number of locators detected on the link<br>
	 * @hrefs:  pointer to the array of locator hrefs<br>
	 * @roles:  pointer to the array of locator roles<br>
	 * @nbArcs: the number of arcs detected on the link<br>
	 * @from:  pointer to the array of source roles found on the arcs<br>
	 * @to:  pointer to the array of target roles found on the arcs<br>
	 * @show:  array of values for the show attributes found on the arcs<br>
	 * @actuate:  array of values for the actuate attributes found on the arcs<br>
	 * @nbTitles: the number of titles detected on the link<br>
	 * @title:  array of titles detected on the link<br>
	 * @langs:  array of xml:lang values for the titles<br>
	 * * This is the prototype for a extended link detection callback.
	 */
	typedef void (*xlinkExtendedLinkFunk)(void* ctx, xmlNodePtr node, int nbLocators, const xlinkHRef* hrefs, const xlinkRole* roles, int nbArcs, const xlinkRole* from, const xlinkRole* to, xlinkShow* show, xlinkActuate* actuate, int nbTitles, const xlinkTitle* titles, const xmlChar** langs) xlinkExtendedLinkFunk;
	/**
	 * xlinkExtendedLinkSetFunk:<br>
	 * @ctx:  user data pointer<br>
	 * @node:  the node carrying the link<br>
	 * @nbLocators: the number of locators detected on the link<br>
	 * @hrefs:  pointer to the array of locator hrefs<br>
	 * @roles:  pointer to the array of locator roles<br>
	 * @nbTitles: the number of titles detected on the link<br>
	 * @title:  array of titles detected on the link<br>
	 * @langs:  array of xml:lang values for the titles<br>
	 * * This is the prototype for a extended link set detection callback.
	 */
	typedef void (*xlinkExtendedLinkSetFunk)(void* ctx, xmlNodePtr node, int nbLocators, const xlinkHRef* hrefs, const xlinkRole* roles, int nbTitles, const xlinkTitle* titles, const xmlChar** langs) xlinkExtendedLinkSetFunk;
	/**
	 * This is the structure containing a set of Links detection callbacks.<br>
	 * * There is no default xlink callbacks, if one want to get link<br>
	 * recognition activated, those call backs must be provided before parsing.
	 */
	typedef _xlinkHandler xlinkHandler;
	typedef xlinkHandler* xlinkHandlerPtr;
	struct _xlinkHandler {
		xlinkSimpleLinkFunk simple;
		xlinkExtendedLinkFunk extended;
		xlinkExtendedLinkSetFunk set;
	};
	/**
	 * The default detection routine, can be overridden, they call the default<br>
	 * detection callbacks.<br>
	 * Original signature : <code>xlinkNodeDetectFunc xlinkGetDefaultDetect()</code>
	 */
	xlinkNodeDetectFunc xlinkGetDefaultDetect();
	/** Original signature : <code>void xlinkSetDefaultDetect(xlinkNodeDetectFunc)</code> */
	void xlinkSetDefaultDetect(xlinkNodeDetectFunc func);
	/**
	 * Routines to set/get the default handlers.<br>
	 * Original signature : <code>xlinkHandlerPtr xlinkGetDefaultHandler()</code>
	 */
	xlinkHandlerPtr xlinkGetDefaultHandler();
	/** Original signature : <code>void xlinkSetDefaultHandler(xlinkHandlerPtr)</code> */
	void xlinkSetDefaultHandler(xlinkHandlerPtr handler);
	/**
	 * Link detection module itself.<br>
	 * Original signature : <code>xlinkType xlinkIsLink(xmlDocPtr, xmlNodePtr)</code>
	 */
	xlinkType xlinkIsLink(xmlDocPtr doc, xmlNodePtr node);
}
extern ""C"" {
/** Original signature : <code>xmlChar* getPublicId(void*)</code> */
	const xmlChar* getPublicId(void* ctx);
	/** Original signature : <code>xmlChar* getSystemId(void*)</code> */
	const xmlChar* getSystemId(void* ctx);
	/** Original signature : <code>void setDocumentLocator(void*, xmlSAXLocatorPtr)</code> */
	void setDocumentLocator(void* ctx, xmlSAXLocatorPtr loc);
	/** Original signature : <code>int getLineNumber(void*)</code> */
	int getLineNumber(void* ctx);
	/** Original signature : <code>int getColumnNumber(void*)</code> */
	int getColumnNumber(void* ctx);
	/** Original signature : <code>int isStandalone(void*)</code> */
	int isStandalone(void* ctx);
	/** Original signature : <code>int hasInternalSubset(void*)</code> */
	int hasInternalSubset(void* ctx);
	/** Original signature : <code>int hasExternalSubset(void*)</code> */
	int hasExternalSubset(void* ctx);
	/** Original signature : <code>void internalSubset(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void internalSubset(void* ctx, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>void externalSubset(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void externalSubset(void* ctx, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>xmlEntityPtr getEntity(void*, const xmlChar*)</code> */
	xmlEntityPtr getEntity(void* ctx, const xmlChar* name);
	/** Original signature : <code>xmlEntityPtr getParameterEntity(void*, const xmlChar*)</code> */
	xmlEntityPtr getParameterEntity(void* ctx, const xmlChar* name);
	/** Original signature : <code>xmlParserInputPtr resolveEntity(void*, const xmlChar*, const xmlChar*)</code> */
	xmlParserInputPtr resolveEntity(void* ctx, const xmlChar* publicId, const xmlChar* systemId);
	/** Original signature : <code>void entityDecl(void*, const xmlChar*, int, const xmlChar*, const xmlChar*, xmlChar*)</code> */
	void entityDecl(void* ctx, const xmlChar* name, int type, const xmlChar* publicId, const xmlChar* systemId, xmlChar* content);
	/** Original signature : <code>void attributeDecl(void*, const xmlChar*, const xmlChar*, int, int, const xmlChar*, xmlEnumerationPtr)</code> */
	void attributeDecl(void* ctx, const xmlChar* elem, const xmlChar* fullname, int type, int def, const xmlChar* defaultValue, xmlEnumerationPtr tree);
	/** Original signature : <code>void elementDecl(void*, const xmlChar*, int, xmlElementContentPtr)</code> */
	void elementDecl(void* ctx, const xmlChar* name, int type, xmlElementContentPtr content);
	/** Original signature : <code>void notationDecl(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void notationDecl(void* ctx, const xmlChar* name, const xmlChar* publicId, const xmlChar* systemId);
	/** Original signature : <code>void unparsedEntityDecl(void*, const xmlChar*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void unparsedEntityDecl(void* ctx, const xmlChar* name, const xmlChar* publicId, const xmlChar* systemId, const xmlChar* notationName);
	/** Original signature : <code>void startDocument(void*)</code> */
	void startDocument(void* ctx);
	/** Original signature : <code>void endDocument(void*)</code> */
	void endDocument(void* ctx);
	/** Original signature : <code>void attribute(void*, const xmlChar*, const xmlChar*)</code> */
	void attribute(void* ctx, const xmlChar* fullname, const xmlChar* value);
	/** Original signature : <code>void startElement(void*, const xmlChar*, const xmlChar**)</code> */
	void startElement(void* ctx, const xmlChar* fullname, const xmlChar** atts);
	/** Original signature : <code>void endElement(void*, const xmlChar*)</code> */
	void endElement(void* ctx, const xmlChar* name);
	/** Original signature : <code>void reference(void*, const xmlChar*)</code> */
	void reference(void* ctx, const xmlChar* name);
	/** Original signature : <code>void characters(void*, const xmlChar*, int)</code> */
	void characters(void* ctx, const xmlChar* ch, int len);
	/** Original signature : <code>void ignorableWhitespace(void*, const xmlChar*, int)</code> */
	void ignorableWhitespace(void* ctx, const xmlChar* ch, int len);
	/** Original signature : <code>void processingInstruction(void*, const xmlChar*, const xmlChar*)</code> */
	void processingInstruction(void* ctx, const xmlChar* target, const xmlChar* data);
	/** Original signature : <code>void globalNamespace(void*, const xmlChar*, const xmlChar*)</code> */
	void globalNamespace(void* ctx, const xmlChar* href, const xmlChar* prefix);
	/** Original signature : <code>void setNamespace(void*, const xmlChar*)</code> */
	void setNamespace(void* ctx, const xmlChar* name);
	/** Original signature : <code>xmlNsPtr getNamespace(void*)</code> */
	xmlNsPtr getNamespace(void* ctx);
	/** Original signature : <code>int checkNamespace(void*, xmlChar*)</code> */
	int checkNamespace(void* ctx, xmlChar* nameSpace);
	/** Original signature : <code>void namespaceDecl(void*, const xmlChar*, const xmlChar*)</code> */
	void namespaceDecl(void* ctx, const xmlChar* href, const xmlChar* prefix);
	/** Original signature : <code>void comment(void*, const xmlChar*)</code> */
	void comment(void* ctx, const xmlChar* value);
	/** Original signature : <code>void cdataBlock(void*, const xmlChar*, int)</code> */
	void cdataBlock(void* ctx, const xmlChar* value, int len);
	/** Original signature : <code>void initxmlDefaultSAXHandler(xmlSAXHandlerV1*, int)</code> */
	void initxmlDefaultSAXHandler(xmlSAXHandlerV1* hdlr, int warning);
	/** Original signature : <code>void inithtmlDefaultSAXHandler(xmlSAXHandlerV1*)</code> */
	void inithtmlDefaultSAXHandler(xmlSAXHandlerV1* hdlr);
	/** Original signature : <code>void initdocbDefaultSAXHandler(xmlSAXHandlerV1*)</code> */
	void initdocbDefaultSAXHandler(xmlSAXHandlerV1* hdlr);
}






extern ""C"" {
/** Original signature : <code>xmlChar* xmlSAX2GetPublicId(void*)</code> */
	const xmlChar* xmlSAX2GetPublicId(void* ctx);
	/** Original signature : <code>xmlChar* xmlSAX2GetSystemId(void*)</code> */
	const xmlChar* xmlSAX2GetSystemId(void* ctx);
	/** Original signature : <code>void xmlSAX2SetDocumentLocator(void*, xmlSAXLocatorPtr)</code> */
	void xmlSAX2SetDocumentLocator(void* ctx, xmlSAXLocatorPtr loc);
	/** Original signature : <code>int xmlSAX2GetLineNumber(void*)</code> */
	int xmlSAX2GetLineNumber(void* ctx);
	/** Original signature : <code>int xmlSAX2GetColumnNumber(void*)</code> */
	int xmlSAX2GetColumnNumber(void* ctx);
	/** Original signature : <code>int xmlSAX2IsStandalone(void*)</code> */
	int xmlSAX2IsStandalone(void* ctx);
	/** Original signature : <code>int xmlSAX2HasInternalSubset(void*)</code> */
	int xmlSAX2HasInternalSubset(void* ctx);
	/** Original signature : <code>int xmlSAX2HasExternalSubset(void*)</code> */
	int xmlSAX2HasExternalSubset(void* ctx);
	/** Original signature : <code>void xmlSAX2InternalSubset(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void xmlSAX2InternalSubset(void* ctx, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>void xmlSAX2ExternalSubset(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void xmlSAX2ExternalSubset(void* ctx, const xmlChar* name, const xmlChar* ExternalID, const xmlChar* SystemID);
	/** Original signature : <code>xmlEntityPtr xmlSAX2GetEntity(void*, const xmlChar*)</code> */
	xmlEntityPtr xmlSAX2GetEntity(void* ctx, const xmlChar* name);
	/** Original signature : <code>xmlEntityPtr xmlSAX2GetParameterEntity(void*, const xmlChar*)</code> */
	xmlEntityPtr xmlSAX2GetParameterEntity(void* ctx, const xmlChar* name);
	/** Original signature : <code>xmlParserInputPtr xmlSAX2ResolveEntity(void*, const xmlChar*, const xmlChar*)</code> */
	xmlParserInputPtr xmlSAX2ResolveEntity(void* ctx, const xmlChar* publicId, const xmlChar* systemId);
	/** Original signature : <code>void xmlSAX2EntityDecl(void*, const xmlChar*, int, const xmlChar*, const xmlChar*, xmlChar*)</code> */
	void xmlSAX2EntityDecl(void* ctx, const xmlChar* name, int type, const xmlChar* publicId, const xmlChar* systemId, xmlChar* content);
	/** Original signature : <code>void xmlSAX2AttributeDecl(void*, const xmlChar*, const xmlChar*, int, int, const xmlChar*, xmlEnumerationPtr)</code> */
	void xmlSAX2AttributeDecl(void* ctx, const xmlChar* elem, const xmlChar* fullname, int type, int def, const xmlChar* defaultValue, xmlEnumerationPtr tree);
	/** Original signature : <code>void xmlSAX2ElementDecl(void*, const xmlChar*, int, xmlElementContentPtr)</code> */
	void xmlSAX2ElementDecl(void* ctx, const xmlChar* name, int type, xmlElementContentPtr content);
	/** Original signature : <code>void xmlSAX2NotationDecl(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void xmlSAX2NotationDecl(void* ctx, const xmlChar* name, const xmlChar* publicId, const xmlChar* systemId);
	/** Original signature : <code>void xmlSAX2UnparsedEntityDecl(void*, const xmlChar*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void xmlSAX2UnparsedEntityDecl(void* ctx, const xmlChar* name, const xmlChar* publicId, const xmlChar* systemId, const xmlChar* notationName);
	/** Original signature : <code>void xmlSAX2StartDocument(void*)</code> */
	void xmlSAX2StartDocument(void* ctx);
	/** Original signature : <code>void xmlSAX2EndDocument(void*)</code> */
	void xmlSAX2EndDocument(void* ctx);
	/** Original signature : <code>void xmlSAX2StartElement(void*, const xmlChar*, const xmlChar**)</code> */
	void xmlSAX2StartElement(void* ctx, const xmlChar* fullname, const xmlChar** atts);
	/** Original signature : <code>void xmlSAX2EndElement(void*, const xmlChar*)</code> */
	void xmlSAX2EndElement(void* ctx, const xmlChar* name);
	/** Original signature : <code>void xmlSAX2StartElementNs(void*, const xmlChar*, const xmlChar*, const xmlChar*, int, const xmlChar**, int, int, const xmlChar**)</code> */
	void xmlSAX2StartElementNs(void* ctx, const xmlChar* localname, const xmlChar* prefix, const xmlChar* URI, int nb_namespaces, const xmlChar** namespaces, int nb_attributes, int nb_defaulted, const xmlChar** attributes);
	/** Original signature : <code>void xmlSAX2EndElementNs(void*, const xmlChar*, const xmlChar*, const xmlChar*)</code> */
	void xmlSAX2EndElementNs(void* ctx, const xmlChar* localname, const xmlChar* prefix, const xmlChar* URI);
	/** Original signature : <code>void xmlSAX2Reference(void*, const xmlChar*)</code> */
	void xmlSAX2Reference(void* ctx, const xmlChar* name);
	/** Original signature : <code>void xmlSAX2Characters(void*, const xmlChar*, int)</code> */
	void xmlSAX2Characters(void* ctx, const xmlChar* ch, int len);
	/** Original signature : <code>void xmlSAX2IgnorableWhitespace(void*, const xmlChar*, int)</code> */
	void xmlSAX2IgnorableWhitespace(void* ctx, const xmlChar* ch, int len);
	/** Original signature : <code>void xmlSAX2ProcessingInstruction(void*, const xmlChar*, const xmlChar*)</code> */
	void xmlSAX2ProcessingInstruction(void* ctx, const xmlChar* target, const xmlChar* data);
	/** Original signature : <code>void xmlSAX2Comment(void*, const xmlChar*)</code> */
	void xmlSAX2Comment(void* ctx, const xmlChar* value);
	/** Original signature : <code>void xmlSAX2CDataBlock(void*, const xmlChar*, int)</code> */
	void xmlSAX2CDataBlock(void* ctx, const xmlChar* value, int len);
	/** Original signature : <code>int xmlSAXDefaultVersion(int)</code> */
	int xmlSAXDefaultVersion(int version);
	/** Original signature : <code>int xmlSAXVersion(xmlSAXHandler*, int)</code> */
	int xmlSAXVersion(xmlSAXHandler* hdlr, int version);
	/** Original signature : <code>void xmlSAX2InitDefaultSAXHandler(xmlSAXHandler*, int)</code> */
	void xmlSAX2InitDefaultSAXHandler(xmlSAXHandler* hdlr, int warning);
	/** Original signature : <code>void xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler*)</code> */
	void xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler* hdlr);
	/** Original signature : <code>void htmlDefaultSAXHandlerInit()</code> */
	void htmlDefaultSAXHandlerInit();
	/** Original signature : <code>void xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler*)</code> */
	void xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler* hdlr);
	/** Original signature : <code>void docbDefaultSAXHandlerInit()</code> */
	void docbDefaultSAXHandlerInit();
	/** Original signature : <code>void xmlDefaultSAXHandlerInit()</code> */
	void xmlDefaultSAXHandlerInit();
}

extern ""C"" {
/** Original signature : <code>void xmlInitGlobals()</code> */
	void xmlInitGlobals();
	/** Original signature : <code>void xmlCleanupGlobals()</code> */
	void xmlCleanupGlobals();
	/**
	 * xmlParserInputBufferCreateFilenameFunc:<br>
	 * @URI: the URI to read from<br>
	 * @enc: the requested source encoding<br>
	 * * Signature for the function doing the lookup for a suitable input method<br>
	 * corresponding to an URI.<br>
	 * * Returns the new xmlParserInputBufferPtr in case of success or NULL if no<br>
	 *         method was found.
	 */
	typedef xmlParserInputBufferPtr_callback xmlParserInputBufferPtr(* xmlParserInputBufferCreateFilenameFunc);
	/**
	 * xmlOutputBufferCreateFilenameFunc:<br>
	 * @URI: the URI to write to<br>
	 * @enc: the requested target encoding<br>
	 * * Signature for the function doing the lookup for a suitable output method<br>
	 * corresponding to an URI.<br>
	 * * Returns the new xmlOutputBufferPtr in case of success or NULL if no<br>
	 *         method was found.
	 */
	typedef xmlOutputBufferPtr_callback xmlOutputBufferPtr(* xmlOutputBufferCreateFilenameFunc);
	/** Original signature : <code>xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc)</code> */
	xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func);
	/** Original signature : <code>xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc)</code> */
	xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func);
	/**
	 * xmlRegisterNodeFunc:<br>
	 * @node: the current node<br>
	 * * Signature for the registration callback of a created node
	 */
	typedef void (*xmlRegisterNodeFunc)(xmlNodePtr node) xmlRegisterNodeFunc;
	/**
	 * xmlDeregisterNodeFunc:<br>
	 * @node: the current node<br>
	 * * Signature for the deregistration callback of a discarded node
	 */
	typedef void (*xmlDeregisterNodeFunc)(xmlNodePtr node) xmlDeregisterNodeFunc;
	typedef _xmlGlobalState xmlGlobalState;
	typedef xmlGlobalState* xmlGlobalStatePtr;
	struct _xmlGlobalState {
		const char* xmlParserVersion;
		xmlSAXLocator xmlDefaultSAXLocator;
		xmlSAXHandlerV1 xmlDefaultSAXHandler;
		xmlSAXHandlerV1 docbDefaultSAXHandler;
		xmlSAXHandlerV1 htmlDefaultSAXHandler;
		xmlFreeFunc xmlFree;
		xmlMallocFunc xmlMalloc;
		xmlStrdupFunc xmlMemStrdup;
		xmlReallocFunc xmlRealloc;
		xmlGenericErrorFunc xmlGenericError;
		xmlStructuredErrorFunc xmlStructuredError;
		void* xmlGenericErrorContext;
		int oldXMLWDcompatibility;
		xmlBufferAllocationScheme xmlBufferAllocScheme;
		int xmlDefaultBufferSize;
		int xmlSubstituteEntitiesDefaultValue;
		int xmlDoValidityCheckingDefaultValue;
		int xmlGetWarningsDefaultValue;
		int xmlKeepBlanksDefaultValue;
		int xmlLineNumbersDefaultValue;
		int xmlLoadExtDtdDefaultValue;
		int xmlParserDebugEntities;
		int xmlPedanticParserDefaultValue;
		int xmlSaveNoEmptyTags;
		int xmlIndentTreeOutput;
		const char* xmlTreeIndentString;
		xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
		xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;
		xmlMallocFunc xmlMallocAtomic;
		xmlError xmlLastError;
		xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameValue;
		xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameValue;
		void* xmlStructuredErrorContext;
	};
	typedef int xmlParserInputBufferPtr_callback(const char* URI, xmlCharEncoding enc);
	typedef int xmlOutputBufferPtr_callback(const char* URI, xmlCharEncodingHandlerPtr encoder, int compression);
}
extern ""C"" {
/** Original signature : <code>void xmlInitializeGlobalState(xmlGlobalStatePtr)</code> */
	void xmlInitializeGlobalState(xmlGlobalStatePtr gs);
	/** Original signature : <code>void xmlThrDefSetGenericErrorFunc(void*, xmlGenericErrorFunc)</code> */
	void xmlThrDefSetGenericErrorFunc(void* ctx, xmlGenericErrorFunc handler);
	/** Original signature : <code>void xmlThrDefSetStructuredErrorFunc(void*, xmlStructuredErrorFunc)</code> */
	void xmlThrDefSetStructuredErrorFunc(void* ctx, xmlStructuredErrorFunc handler);
	/** Original signature : <code>xmlRegisterNodeFunc xmlRegisterNodeDefault(xmlRegisterNodeFunc)</code> */
	xmlRegisterNodeFunc xmlRegisterNodeDefault(xmlRegisterNodeFunc func);
	/** Original signature : <code>xmlRegisterNodeFunc xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc)</code> */
	xmlRegisterNodeFunc xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func);
	/** Original signature : <code>xmlDeregisterNodeFunc xmlDeregisterNodeDefault(xmlDeregisterNodeFunc)</code> */
	xmlDeregisterNodeFunc xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func);
	/** Original signature : <code>xmlDeregisterNodeFunc xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc)</code> */
	xmlDeregisterNodeFunc xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func);
	/** Original signature : <code>xmlOutputBufferCreateFilenameFunc xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc)</code> */
	xmlOutputBufferCreateFilenameFunc xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func);
	/** Original signature : <code>xmlParserInputBufferCreateFilenameFunc xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc)</code> */
	xmlParserInputBufferCreateFilenameFunc xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func);
	/**
	 * In general the memory allocation entry points are not kept<br>
	 * thread specific but this can be overridden by LIBXML_THREAD_ALLOC_ENABLED<br>
	 *    - xmlMalloc<br>
	 *    - xmlMallocAtomic<br>
	 *    - xmlRealloc<br>
	 *    - xmlMemStrdup<br>
	 *    - xmlFree
	 */
	extern xmlMallocFunc xmlMalloc;
	extern xmlMallocFunc xmlMallocAtomic;
	extern xmlReallocFunc xmlRealloc;
	extern xmlFreeFunc xmlFree;
	extern xmlStrdupFunc xmlMemStrdup;
	/** Original signature : <code>xmlSAXHandlerV1* __docbDefaultSAXHandler()</code> */
	xmlSAXHandlerV1* __docbDefaultSAXHandler();
	/** Original signature : <code>xmlSAXHandlerV1* __htmlDefaultSAXHandler()</code> */
	xmlSAXHandlerV1* __htmlDefaultSAXHandler();
	/** Original signature : <code>xmlError* __xmlLastError()</code> */
	xmlError* __xmlLastError();
	/**
	 * Everything starting from the line below is<br>
	 * Automatically generated by build_glob.py.<br>
	 * Do not modify the previous line.<br>
	 * Original signature : <code>int* __oldXMLWDcompatibility()</code>
	 */
	int* __oldXMLWDcompatibility();
	/** Original signature : <code>xmlBufferAllocationScheme* __xmlBufferAllocScheme()</code> */
	xmlBufferAllocationScheme* __xmlBufferAllocScheme();
	/** Original signature : <code>xmlBufferAllocationScheme xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme)</code> */
	xmlBufferAllocationScheme xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v);
	/** Original signature : <code>int* __xmlDefaultBufferSize()</code> */
	int* __xmlDefaultBufferSize();
	/** Original signature : <code>int xmlThrDefDefaultBufferSize(int)</code> */
	int xmlThrDefDefaultBufferSize(int v);
	/** Original signature : <code>xmlSAXHandlerV1* __xmlDefaultSAXHandler()</code> */
	xmlSAXHandlerV1* __xmlDefaultSAXHandler();
	/** Original signature : <code>xmlSAXLocator* __xmlDefaultSAXLocator()</code> */
	xmlSAXLocator* __xmlDefaultSAXLocator();
	/** Original signature : <code>int* __xmlDoValidityCheckingDefaultValue()</code> */
	int* __xmlDoValidityCheckingDefaultValue();
	/** Original signature : <code>int xmlThrDefDoValidityCheckingDefaultValue(int)</code> */
	int xmlThrDefDoValidityCheckingDefaultValue(int v);
	/** Original signature : <code>xmlGenericErrorFunc* __xmlGenericError()</code> */
	xmlGenericErrorFunc* __xmlGenericError();
	/** Original signature : <code>xmlStructuredErrorFunc* __xmlStructuredError()</code> */
	xmlStructuredErrorFunc* __xmlStructuredError();
	/** Original signature : <code>void** __xmlGenericErrorContext()</code> */
	void** __xmlGenericErrorContext();
	/** Original signature : <code>void** __xmlStructuredErrorContext()</code> */
	void** __xmlStructuredErrorContext();
	/** Original signature : <code>int* __xmlGetWarningsDefaultValue()</code> */
	int* __xmlGetWarningsDefaultValue();
	/** Original signature : <code>int xmlThrDefGetWarningsDefaultValue(int)</code> */
	int xmlThrDefGetWarningsDefaultValue(int v);
	/** Original signature : <code>int* __xmlIndentTreeOutput()</code> */
	int* __xmlIndentTreeOutput();
	/** Original signature : <code>int xmlThrDefIndentTreeOutput(int)</code> */
	int xmlThrDefIndentTreeOutput(int v);
	/** Original signature : <code>char** __xmlTreeIndentString()</code> */
	const char** __xmlTreeIndentString();
	/** Original signature : <code>char* xmlThrDefTreeIndentString(const char*)</code> */
	const char* xmlThrDefTreeIndentString(const char* v);
	/** Original signature : <code>int* __xmlKeepBlanksDefaultValue()</code> */
	int* __xmlKeepBlanksDefaultValue();
	/** Original signature : <code>int xmlThrDefKeepBlanksDefaultValue(int)</code> */
	int xmlThrDefKeepBlanksDefaultValue(int v);
	/** Original signature : <code>int* __xmlLineNumbersDefaultValue()</code> */
	int* __xmlLineNumbersDefaultValue();
	/** Original signature : <code>int xmlThrDefLineNumbersDefaultValue(int)</code> */
	int xmlThrDefLineNumbersDefaultValue(int v);
	/** Original signature : <code>int* __xmlLoadExtDtdDefaultValue()</code> */
	int* __xmlLoadExtDtdDefaultValue();
	/** Original signature : <code>int xmlThrDefLoadExtDtdDefaultValue(int)</code> */
	int xmlThrDefLoadExtDtdDefaultValue(int v);
	/** Original signature : <code>int* __xmlParserDebugEntities()</code> */
	int* __xmlParserDebugEntities();
	/** Original signature : <code>int xmlThrDefParserDebugEntities(int)</code> */
	int xmlThrDefParserDebugEntities(int v);
	/** Original signature : <code>char** __xmlParserVersion()</code> */
	const char** __xmlParserVersion();
	/** Original signature : <code>int* __xmlPedanticParserDefaultValue()</code> */
	int* __xmlPedanticParserDefaultValue();
	/** Original signature : <code>int xmlThrDefPedanticParserDefaultValue(int)</code> */
	int xmlThrDefPedanticParserDefaultValue(int v);
	/** Original signature : <code>int* __xmlSaveNoEmptyTags()</code> */
	int* __xmlSaveNoEmptyTags();
	/** Original signature : <code>int xmlThrDefSaveNoEmptyTags(int)</code> */
	int xmlThrDefSaveNoEmptyTags(int v);
	/** Original signature : <code>int* __xmlSubstituteEntitiesDefaultValue()</code> */
	int* __xmlSubstituteEntitiesDefaultValue();
	/** Original signature : <code>int xmlThrDefSubstituteEntitiesDefaultValue(int)</code> */
	int xmlThrDefSubstituteEntitiesDefaultValue(int v);
	/** Original signature : <code>xmlRegisterNodeFunc* __xmlRegisterNodeDefaultValue()</code> */
	xmlRegisterNodeFunc* __xmlRegisterNodeDefaultValue();
	/** Original signature : <code>xmlDeregisterNodeFunc* __xmlDeregisterNodeDefaultValue()</code> */
	xmlDeregisterNodeFunc* __xmlDeregisterNodeDefaultValue();
	/** Original signature : <code>xmlParserInputBufferCreateFilenameFunc* __xmlParserInputBufferCreateFilenameValue()</code> */
	xmlParserInputBufferCreateFilenameFunc* __xmlParserInputBufferCreateFilenameValue();
	/** Original signature : <code>xmlOutputBufferCreateFilenameFunc* __xmlOutputBufferCreateFilenameValue()</code> */
	xmlOutputBufferCreateFilenameFunc* __xmlOutputBufferCreateFilenameValue();
}
extern ""C"" {
/** Original signature : <code>xmlMutexPtr xmlNewMutex()</code> */
	xmlMutexPtr xmlNewMutex();
	/** Original signature : <code>void xmlMutexLock(xmlMutexPtr)</code> */
	void xmlMutexLock(xmlMutexPtr tok);
	/** Original signature : <code>void xmlMutexUnlock(xmlMutexPtr)</code> */
	void xmlMutexUnlock(xmlMutexPtr tok);
	/** Original signature : <code>void xmlFreeMutex(xmlMutexPtr)</code> */
	void xmlFreeMutex(xmlMutexPtr tok);
	/** Original signature : <code>xmlRMutexPtr xmlNewRMutex()</code> */
	xmlRMutexPtr xmlNewRMutex();
	/** Original signature : <code>void xmlRMutexLock(xmlRMutexPtr)</code> */
	void xmlRMutexLock(xmlRMutexPtr tok);
	/** Original signature : <code>void xmlRMutexUnlock(xmlRMutexPtr)</code> */
	void xmlRMutexUnlock(xmlRMutexPtr tok);
	/** Original signature : <code>void xmlFreeRMutex(xmlRMutexPtr)</code> */
	void xmlFreeRMutex(xmlRMutexPtr tok);
	/**
	 * Library wide APIs.<br>
	 * Original signature : <code>void xmlInitThreads()</code>
	 */
	void xmlInitThreads();
	/** Original signature : <code>void xmlLockLibrary()</code> */
	void xmlLockLibrary();
	/** Original signature : <code>void xmlUnlockLibrary()</code> */
	void xmlUnlockLibrary();
	/** Original signature : <code>int xmlGetThreadId()</code> */
	int xmlGetThreadId();
	/** Original signature : <code>int xmlIsMainThread()</code> */
	int xmlIsMainThread();
	/** Original signature : <code>void xmlCleanupThreads()</code> */
	void xmlCleanupThreads();
	/** Original signature : <code>xmlGlobalStatePtr xmlGetGlobalState()</code> */
	xmlGlobalStatePtr xmlGetGlobalState();
}





extern ""C"" {
/**
	 * xsltMaxDepth:<br>
	 * * This value is used to detect templates loops.
	 */
	extern int xsltMaxDepth;
	/**
	 * xsltEngineVersion:<br>
	 * * The version string for libxslt.
	 */
	extern const char* xsltEngineVersion;
	/**
	 * xsltLibxsltVersion:<br>
	 * * The version of libxslt compiled.
	 */
	extern const int xsltLibxsltVersion;
	/**
	 * xsltLibxmlVersion:<br>
	 * * The version of libxml libxslt was compiled against.
	 */
	extern const int xsltLibxmlVersion;
	/**
	 * Global initialization function.<br>
	 * Original signature : <code>void xsltInit()</code>
	 */
	void xsltInit();
	/**
	 * Global cleanup function.<br>
	 * Original signature : <code>void xsltCleanupGlobals()</code>
	 */
	void xsltCleanupGlobals();
}








extern ""C"" {
typedef _xmlXPathContext xmlXPathContext;
	typedef xmlXPathContext* xmlXPathContextPtr;
	typedef _xmlXPathParserContext xmlXPathParserContext;
	typedef xmlXPathParserContext* xmlXPathParserContextPtr;
	/** The set of XPath error codes. */
	typedef enum xmlXPathError {
		XPATH_EXPRESSION_OK = 0,
		XPATH_NUMBER_ERROR,
		XPATH_UNFINISHED_LITERAL_ERROR,
		XPATH_START_LITERAL_ERROR,
		XPATH_VARIABLE_REF_ERROR,
		XPATH_UNDEF_VARIABLE_ERROR,
		XPATH_INVALID_PREDICATE_ERROR,
		XPATH_EXPR_ERROR,
		XPATH_UNCLOSED_ERROR,
		XPATH_UNKNOWN_FUNC_ERROR,
		XPATH_INVALID_OPERAND,
		XPATH_INVALID_TYPE,
		XPATH_INVALID_ARITY,
		XPATH_INVALID_CTXT_SIZE,
		XPATH_INVALID_CTXT_POSITION,
		XPATH_MEMORY_ERROR,
		XPTR_SYNTAX_ERROR,
		XPTR_RESOURCE_ERROR,
		XPTR_SUB_RESOURCE_ERROR,
		XPATH_UNDEF_PREFIX_ERROR,
		XPATH_ENCODING_ERROR,
		XPATH_INVALID_CHAR_ERROR,
		XPATH_INVALID_CTXT,
		XPATH_STACK_ERROR
	} xmlXPathError;
	/** A node-set (an unordered collection of nodes without duplicates). */
	typedef _xmlNodeSet xmlNodeSet;
	typedef xmlNodeSet* xmlNodeSetPtr;
	struct _xmlNodeSet {
		int nodeNr; /* number of nodes in the set */
		int nodeMax; /* size of the array as allocated */
		xmlNodePtr* nodeTab; /* array of nodes in no particular order */
	};
	/**
	 * An expression is evaluated to yield an object, which<br>
	 * has one of the following four basic types:<br>
	 *   - node-set<br>
	 *   - boolean<br>
	 *   - number<br>
	 *   - string<br>
	 * * @@ XPointer will add more types !
	 */
	typedef enum xmlXPathObjectType {
		XPATH_UNDEFINED = 0,
		XPATH_NODESET = 1,
		XPATH_BOOLEAN = 2,
		XPATH_NUMBER = 3,
		XPATH_STRING = 4,
		XPATH_POINT = 5,
		XPATH_RANGE = 6,
		XPATH_LOCATIONSET = 7,
		XPATH_USERS = 8,
		XPATH_XSLT_TREE = 9 /* An XSLT value tree, non modifiable */
	} xmlXPathObjectType;
	typedef _xmlXPathObject xmlXPathObject;
	typedef xmlXPathObject* xmlXPathObjectPtr;
	struct _xmlXPathObject {
		xmlXPathObjectType type;
		xmlNodeSetPtr nodesetval;
		int boolval;
		double floatval;
		xmlChar* stringval;
		void* user;
		int index;
		void* user2;
		int index2;
	};
	/**
	 * xmlXPathConvertFunc:<br>
	 * @obj:  an XPath object<br>
	 * @type:  the number of the target type<br>
	 * * A conversion function is associated to a type and used to cast<br>
	 * the new type to primitive values.<br>
	 * * Returns -1 in case of error, 0 otherwise
	 */
	typedef int (*xmlXPathConvertFunc)(xmlXPathObjectPtr obj, int type) xmlXPathConvertFunc;
	/** Extra type: a name and a conversion function. */
	typedef _xmlXPathType xmlXPathType;
	typedef xmlXPathType* xmlXPathTypePtr;
	struct _xmlXPathType {
		const xmlChar* name; /* the type name */
		xmlXPathConvertFunc func; /* the conversion function */
	};
	/** Extra variable: a name and a value. */
	typedef _xmlXPathVariable xmlXPathVariable;
	typedef xmlXPathVariable* xmlXPathVariablePtr;
	struct _xmlXPathVariable {
		const xmlChar* name; /* the variable name */
		xmlXPathObjectPtr value; /* the value */
	};
	/**
	 * xmlXPathEvalFunc:<br>
	 * @ctxt: an XPath parser context<br>
	 * @nargs: the number of arguments passed to the function<br>
	 * * An XPath evaluation function, the parameters are on the XPath context stack.
	 */
	typedef void (*xmlXPathEvalFunc)(xmlXPathParserContextPtr ctxt, int nargs) xmlXPathEvalFunc;
	/** Extra function: a name and a evaluation function. */
	typedef _xmlXPathFunct xmlXPathFunct;
	typedef xmlXPathFunct* xmlXPathFuncPtr;
	struct _xmlXPathFunct {
		const xmlChar* name; /* the function name */
		xmlXPathEvalFunc func; /* the evaluation function */
	};
	/**
	 * xmlXPathAxisFunc:<br>
	 * @ctxt:  the XPath interpreter context<br>
	 * @cur:  the previous node being explored on that axis<br>
	 * * An axis traversal function. To traverse an axis, the engine calls<br>
	 * the first time with cur == NULL and repeat until the function returns<br>
	 * NULL indicating the end of the axis traversal.<br>
	 * * Returns the next node in that axis or NULL if at the end of the axis.
	 */
	typedef xmlXPathObjectPtr (*xmlXPathAxisFunc)(xmlXPathParserContextPtr ctxt, xmlXPathObjectPtr cur) xmlXPathAxisFunc;
	/** Extra axis: a name and an axis function. */
	typedef _xmlXPathAxis xmlXPathAxis;
	typedef xmlXPathAxis* xmlXPathAxisPtr;
	struct _xmlXPathAxis {
		const xmlChar* name; /* the axis name */
		xmlXPathAxisFunc func; /* the search function */
	};
	/**
	 * xmlXPathFunction:<br>
	 * @ctxt:  the XPath interprestation context<br>
	 * @nargs:  the number of arguments<br>
	 * * An XPath function.<br>
	 * The arguments (if any) are popped out from the context stack<br>
	 * and the result is pushed on the stack.
	 */
	typedef void (*xmlXPathFunction)(xmlXPathParserContextPtr ctxt, int nargs) xmlXPathFunction;
	/**
	 * xmlXPathVariableLookupFunc:<br>
	 * @ctxt:  an XPath context<br>
	 * @name:  name of the variable<br>
	 * @ns_uri:  the namespace name hosting this variable<br>
	 * * Prototype for callbacks used to plug variable lookup in the XPath<br>
	 * engine.<br>
	 * * Returns the XPath object value or NULL if not found.
	 */
	typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc)(void* ctxt, const xmlChar* name, const xmlChar* ns_uri) xmlXPathVariableLookupFunc;
	/**
	 * xmlXPathFuncLookupFunc:<br>
	 * @ctxt:  an XPath context<br>
	 * @name:  name of the function<br>
	 * @ns_uri:  the namespace name hosting this function<br>
	 * * Prototype for callbacks used to plug function lookup in the XPath<br>
	 * engine.<br>
	 * * Returns the XPath function or NULL if not found.
	 */
	typedef xmlXPathFunction (*xmlXPathFuncLookupFunc)(void* ctxt, const xmlChar* name, const xmlChar* ns_uri) xmlXPathFuncLookupFunc;
	/**
	 * xmlXPathContext:<br>
	 * Expression evaluation occurs with respect to a context.<br>
	 * he context consists of:<br>
	 *    - a node (the context node) <br>
	 *    - a node list (the context node list) <br>
	 *    - a set of variable bindings <br>
	 *    - a function library <br>
	 *    - the set of namespace declarations in scope for the expression <br>
	 * Following the switch to hash tables, this need to be trimmed up at<br>
	 * the next binary incompatible release.<br>
	 * The node may be modified when the context is passed to libxml2<br>
	 * for an XPath evaluation so you may need to initialize it again<br>
	 * before the next call.
	 */
	struct _xmlXPathContext {
		xmlDocPtr doc; /* The current document */
		xmlNodePtr node; /* The current node */
		int nb_variables_unused; /* unused (hash table) */
		int max_variables_unused; /* unused (hash table) */
		xmlHashTablePtr varHash; /* Hash table of defined variables */
		int nb_types; /* number of defined types */
		int max_types; /* max number of types */
		xmlXPathTypePtr types; /* Array of defined types */
		int nb_funcs_unused; /* unused (hash table) */
		int max_funcs_unused; /* unused (hash table) */
		xmlHashTablePtr funcHash; /* Hash table of defined funcs */
		int nb_axis; /* number of defined axis */
		int max_axis; /* max number of axis */
		xmlXPathAxisPtr axis; /* Array of defined axis */
		xmlNsPtr* namespaces; /* Array of namespaces */
		int nsNr; /* number of namespace in scope */
		void* user; /* function to free */
		int contextSize; /* the context size */
		int proximityPosition; /* the proximity position */
		int xptr; /* is this an XPointer context? */
		xmlNodePtr here; /* for here() */
		xmlNodePtr origin; /* for origin() */
		xmlHashTablePtr nsHash; /* The namespaces hash table */
		xmlXPathVariableLookupFunc varLookupFunc; /* variable lookup func */
		void* varLookupData; /* variable lookup data */
		void* extra; /* needed for XSLT */
		const xmlChar* function;
		const xmlChar* functionURI;
		xmlXPathFuncLookupFunc funcLookupFunc; /* function lookup func */
		void* funcLookupData; /* function lookup data */
		xmlNsPtr* tmpNsList; /* Array of namespaces */
		int tmpNsNr; /* number of namespaces in scope */
		void* userData; /* user specific data block */
		xmlStructuredErrorFunc error; /* the callback in case of errors */
		xmlError lastError; /* the last error */
		xmlNodePtr debugNode; /* the source node XSLT */
		xmlDictPtr dict; /* dictionary if any */
		int flags; /* flags to control compilation */
		void* cache;
	};
	/** The structure of a compiled expression form is not public. */
	typedef _xmlXPathCompExpr xmlXPathCompExpr;
	typedef xmlXPathCompExpr* xmlXPathCompExprPtr;
	/**
	 * xmlXPathParserContext:<br>
	 * An XPath parser context. It contains pure parsing informations,<br>
	 * an xmlXPathContext, and the stack of objects.
	 */
	struct _xmlXPathParserContext {
		const xmlChar* cur; /* the current char being parsed */
		const xmlChar* base; /* the full expression */
		int error; /* error code */
		xmlXPathContextPtr context; /* the evaluation context */
		xmlXPathObjectPtr value; /* the current value */
		int valueNr; /* number of values stacked */
		int valueMax; /* max number of values stacked */
		xmlXPathObjectPtr* valueTab; /* stack of values */
		xmlXPathCompExprPtr comp; /* the precompiled expression */
		int xptr; /* it this an XPointer expression */
		xmlNodePtr ancestor; /* used for walking preceding axis */
		int valueFrame; /* used to limit Pop on the stack */
	};
	/** Objects and Nodesets handling */
	extern double xmlXPathNAN;
	extern double xmlXPathPINF;
	extern double xmlXPathNINF;
	/**
	 * xmlXPathNodeSetIsEmpty:<br>
	 * @ns: a node-set<br>
	 * * Checks whether @ns is empty or not.<br>
	 * * Returns %TRUE if @ns is an empty node-set.<br>
	 * Original signature : <code>void xmlXPathFreeObject(xmlXPathObjectPtr)</code>
	 */
	void xmlXPathFreeObject(xmlXPathObjectPtr obj);
	/** Original signature : <code>xmlNodeSetPtr xmlXPathNodeSetCreate(xmlNodePtr)</code> */
	xmlNodeSetPtr xmlXPathNodeSetCreate(xmlNodePtr val);
	/** Original signature : <code>void xmlXPathFreeNodeSetList(xmlXPathObjectPtr)</code> */
	void xmlXPathFreeNodeSetList(xmlXPathObjectPtr obj);
	/** Original signature : <code>void xmlXPathFreeNodeSet(xmlNodeSetPtr)</code> */
	void xmlXPathFreeNodeSet(xmlNodeSetPtr obj);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathObjectCopy(xmlXPathObjectPtr)</code> */
	xmlXPathObjectPtr xmlXPathObjectCopy(xmlXPathObjectPtr val);
	/** Original signature : <code>int xmlXPathCmpNodes(xmlNodePtr, xmlNodePtr)</code> */
	int xmlXPathCmpNodes(xmlNodePtr node1, xmlNodePtr node2);
	/**
	 * Conversion functions to basic types.<br>
	 * Original signature : <code>int xmlXPathCastNumberToBoolean(double)</code>
	 */
	int xmlXPathCastNumberToBoolean(double val);
	/** Original signature : <code>int xmlXPathCastStringToBoolean(const xmlChar*)</code> */
	int xmlXPathCastStringToBoolean(const xmlChar* val);
	/** Original signature : <code>int xmlXPathCastNodeSetToBoolean(xmlNodeSetPtr)</code> */
	int xmlXPathCastNodeSetToBoolean(xmlNodeSetPtr ns);
	/** Original signature : <code>int xmlXPathCastToBoolean(xmlXPathObjectPtr)</code> */
	int xmlXPathCastToBoolean(xmlXPathObjectPtr val);
	/** Original signature : <code>double xmlXPathCastBooleanToNumber(int)</code> */
	double xmlXPathCastBooleanToNumber(int val);
	/** Original signature : <code>double xmlXPathCastStringToNumber(const xmlChar*)</code> */
	double xmlXPathCastStringToNumber(const xmlChar* val);
	/** Original signature : <code>double xmlXPathCastNodeToNumber(xmlNodePtr)</code> */
	double xmlXPathCastNodeToNumber(xmlNodePtr node);
	/** Original signature : <code>double xmlXPathCastNodeSetToNumber(xmlNodeSetPtr)</code> */
	double xmlXPathCastNodeSetToNumber(xmlNodeSetPtr ns);
	/** Original signature : <code>double xmlXPathCastToNumber(xmlXPathObjectPtr)</code> */
	double xmlXPathCastToNumber(xmlXPathObjectPtr val);
	/** Original signature : <code>xmlChar* xmlXPathCastBooleanToString(int)</code> */
	xmlChar* xmlXPathCastBooleanToString(int val);
	/** Original signature : <code>xmlChar* xmlXPathCastNumberToString(double)</code> */
	xmlChar* xmlXPathCastNumberToString(double val);
	/** Original signature : <code>xmlChar* xmlXPathCastNodeToString(xmlNodePtr)</code> */
	xmlChar* xmlXPathCastNodeToString(xmlNodePtr node);
	/** Original signature : <code>xmlChar* xmlXPathCastNodeSetToString(xmlNodeSetPtr)</code> */
	xmlChar* xmlXPathCastNodeSetToString(xmlNodeSetPtr ns);
	/** Original signature : <code>xmlChar* xmlXPathCastToString(xmlXPathObjectPtr)</code> */
	xmlChar* xmlXPathCastToString(xmlXPathObjectPtr val);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathConvertBoolean(xmlXPathObjectPtr)</code> */
	xmlXPathObjectPtr xmlXPathConvertBoolean(xmlXPathObjectPtr val);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathConvertNumber(xmlXPathObjectPtr)</code> */
	xmlXPathObjectPtr xmlXPathConvertNumber(xmlXPathObjectPtr val);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathConvertString(xmlXPathObjectPtr)</code> */
	xmlXPathObjectPtr xmlXPathConvertString(xmlXPathObjectPtr val);
	/**
	 * Context handling.<br>
	 * Original signature : <code>xmlXPathContextPtr xmlXPathNewContext(xmlDocPtr)</code>
	 */
	xmlXPathContextPtr xmlXPathNewContext(xmlDocPtr doc);
	/** Original signature : <code>void xmlXPathFreeContext(xmlXPathContextPtr)</code> */
	void xmlXPathFreeContext(xmlXPathContextPtr ctxt);
	/** Original signature : <code>int xmlXPathContextSetCache(xmlXPathContextPtr, int, int, int)</code> */
	int xmlXPathContextSetCache(xmlXPathContextPtr ctxt, int active, int value, int options);
	/**
	 * Evaluation functions.<br>
	 * Original signature : <code>long xmlXPathOrderDocElems(xmlDocPtr)</code>
	 */
	long xmlXPathOrderDocElems(xmlDocPtr doc);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathEval(const xmlChar*, xmlXPathContextPtr)</code> */
	xmlXPathObjectPtr xmlXPathEval(const xmlChar* str, xmlXPathContextPtr ctx);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathEvalExpression(const xmlChar*, xmlXPathContextPtr)</code> */
	xmlXPathObjectPtr xmlXPathEvalExpression(const xmlChar* str, xmlXPathContextPtr ctxt);
	/** Original signature : <code>int xmlXPathEvalPredicate(xmlXPathContextPtr, xmlXPathObjectPtr)</code> */
	int xmlXPathEvalPredicate(xmlXPathContextPtr ctxt, xmlXPathObjectPtr res);
	/**
	 * Separate compilation/evaluation entry points.<br>
	 * Original signature : <code>xmlXPathCompExprPtr xmlXPathCompile(const xmlChar*)</code>
	 */
	xmlXPathCompExprPtr xmlXPathCompile(const xmlChar* str);
	/** Original signature : <code>xmlXPathCompExprPtr xmlXPathCtxtCompile(xmlXPathContextPtr, const xmlChar*)</code> */
	xmlXPathCompExprPtr xmlXPathCtxtCompile(xmlXPathContextPtr ctxt, const xmlChar* str);
	/** Original signature : <code>xmlXPathObjectPtr xmlXPathCompiledEval(xmlXPathCompExprPtr, xmlXPathContextPtr)</code> */
	xmlXPathObjectPtr xmlXPathCompiledEval(xmlXPathCompExprPtr comp, xmlXPathContextPtr ctx);
	/** Original signature : <code>int xmlXPathCompiledEvalToBoolean(xmlXPathCompExprPtr, xmlXPathContextPtr)</code> */
	int xmlXPathCompiledEvalToBoolean(xmlXPathCompExprPtr comp, xmlXPathContextPtr ctxt);
	/** Original signature : <code>void xmlXPathFreeCompExpr(xmlXPathCompExprPtr)</code> */
	void xmlXPathFreeCompExpr(xmlXPathCompExprPtr comp);
	/** Original signature : <code>void xmlXPathInit()</code> */
	void xmlXPathInit();
	/** Original signature : <code>int xmlXPathIsNaN(double)</code> */
	int xmlXPathIsNaN(double val);
	/** Original signature : <code>int xmlXPathIsInf(double)</code> */
	int xmlXPathIsInf(double val);
}







/**
 * XSLT_LOCALE_NONE:<br>
 * Macro indicating that locale are not supported
 */
typedef void* xsltLocale;
typedef xmlChar xsltLocaleChar;
/** Original signature : <code>xsltLocale xsltNewLocale(const xmlChar*)</code> */
xsltLocale xsltNewLocale(const xmlChar* langName);
/** Original signature : <code>void xsltFreeLocale(xsltLocale)</code> */
void xsltFreeLocale(xsltLocale locale);
/** Original signature : <code>xsltLocaleChar* xsltStrxfrm(xsltLocale, const xmlChar*)</code> */
xsltLocaleChar* xsltStrxfrm(xsltLocale locale, const xmlChar* string);
/** Original signature : <code>int xsltLocaleStrcmp(xsltLocale, const xsltLocaleChar*, const xsltLocaleChar*)</code> */
int xsltLocaleStrcmp(xsltLocale locale, const xsltLocaleChar* str1, const xsltLocaleChar* str2);



extern ""C"" {
/**
	 * xsltNumberData:<br>
	 * * This data structure is just a wrapper to pass xsl:number data in.
	 */
	typedef _xsltNumberData xsltNumberData;
	typedef xsltNumberData* xsltNumberDataPtr;
	struct _xsltNumberData {
		const xmlChar* level;
		const xmlChar* count;
		const xmlChar* from;
		const xmlChar* value;
		const xmlChar* format;
		int has_format;
		int digitsPerGroup;
		int groupingCharacter;
		int groupingCharacterLen;
		xmlDocPtr doc;
		xmlNodePtr node;
	};
	/**
	 * xsltFormatNumberInfo,:<br>
	 * * This data structure lists the various parameters needed to format numbers.
	 */
	typedef _xsltFormatNumberInfo xsltFormatNumberInfo;
	typedef xsltFormatNumberInfo* xsltFormatNumberInfoPtr;
	struct _xsltFormatNumberInfo {
		int integer_hash; /* Number of '#' in integer part */
		int integer_digits; /* Number of '0' in integer part */
		int frac_digits; /* Number of '0' in fractional part */
		int frac_hash; /* Number of '#' in fractional part */
		int group; /* Number of chars per display 'group' */
		int multiplier; /* Scaling for percent or permille */
		char add_decimal; /* Flag for whether decimal point appears in pattern */
		char is_multiplier_set; /* Flag to catch multiple occurences of percent/permille */
		char is_negative_pattern; /* Flag for processing -ve prefix/suffix */
	};
}
extern ""C"" {
/**
	 * xsltRuntimeExtra:<br>
	 * * Extra information added to the transformation context.
	 */
	typedef _xsltRuntimeExtra xsltRuntimeExtra;
	typedef xsltRuntimeExtra* xsltRuntimeExtraPtr;
	struct _xsltRuntimeExtra {
		void* info; /* pointer to the extra data */
		xmlFreeFunc deallocate; /* pointer to the deallocation routine */
		val_union val; /* dual-purpose field */
		union  val_union {
			void* ptr; /* data not needing deallocation */
			int ival; /* integer value storage */
		};
	};
	/**
	 * xsltTemplate:<br>
	 * * The in-memory structure corresponding to an XSLT Template.
	 */
	typedef _xsltTemplate xsltTemplate;
	typedef xsltTemplate* xsltTemplatePtr;
	struct _xsltTemplate {
		_xsltTemplate* next; /* chained list sorted by priority */
		_xsltStylesheet* style; /* the containing stylesheet */
		xmlChar* match; /* the matching string */
		float priority; /* as given from the stylesheet, not computed */
		const xmlChar* name; /* the local part of the name QName */
		const xmlChar* nameURI; /* the URI part of the name QName */
		const xmlChar* mode; /* the local part of the mode QName */
		const xmlChar* modeURI; /* the URI part of the mode QName */
		xmlNodePtr content; /* the template replacement value */
		xmlNodePtr elem; /* the source element */
		int inheritedNsNr; /* number of inherited namespaces */
		xmlNsPtr* inheritedNs; /* inherited non-excluded namespaces */
		int nbCalls; /* the number of time the template was called */
		unsigned long time; /* the time spent in this template */
		void* params; /* xsl:param instructions */
	};
	/**
	 * xsltDecimalFormat:<br>
	 * * Data structure of decimal-format.
	 */
	typedef _xsltDecimalFormat xsltDecimalFormat;
	typedef xsltDecimalFormat* xsltDecimalFormatPtr;
	struct _xsltDecimalFormat {
		_xsltDecimalFormat* next; /* chained list */
		xmlChar* name;
		xmlChar* digit;
		xmlChar* patternSeparator;
		xmlChar* minusSign;
		xmlChar* infinity;
		xmlChar* noNumber; /* Not-a-number */
		xmlChar* decimalPoint;
		xmlChar* grouping;
		xmlChar* percent;
		xmlChar* permille;
		xmlChar* zeroDigit;
	};
	/**
	 * xsltDocument:<br>
	 * * Data structure associated to a parsed document.
	 */
	typedef _xsltDocument xsltDocument;
	typedef xsltDocument* xsltDocumentPtr;
	struct _xsltDocument {
		_xsltDocument* next; /* documents are kept in a chained list */
		int main; /* is this the main document */
		xmlDocPtr doc; /* the parsed document */
		void* keys; /* key tables storage */
		_xsltDocument* includes; /* subsidiary includes */
		int preproc; /* pre-processing already done */
		int nbKeysComputed;
	};
	/**
	 * xsltKeyDef:<br>
	 * * Representation of an xsl:key.
	 */
	typedef _xsltKeyDef xsltKeyDef;
	typedef xsltKeyDef* xsltKeyDefPtr;
	struct _xsltKeyDef {
		_xsltKeyDef* next;
		xmlNodePtr inst;
		xmlChar* name;
		xmlChar* nameURI;
		xmlChar* match;
		xmlChar* use;
		xmlXPathCompExprPtr comp;
		xmlXPathCompExprPtr usecomp;
		xmlNsPtr* nsList; /* the namespaces in scope */
		int nsNr; /* the number of namespaces in scope */
	};
	/**
	 * xsltKeyTable:<br>
	 * * Holds the computed keys for key definitions of the same QName.<br>
	 * Is owned by an xsltDocument.
	 */
	typedef _xsltKeyTable xsltKeyTable;
	typedef xsltKeyTable* xsltKeyTablePtr;
	struct _xsltKeyTable {
		_xsltKeyTable* next;
		xmlChar* name;
		xmlChar* nameURI;
		xmlHashTablePtr keys;
	};
	/**
	 * The in-memory structure corresponding to an XSLT Stylesheet.<br>
	 * NOTE: most of the content is simply linked from the doc tree<br>
	 *       structure, no specific allocation is made.
	 */
	typedef _xsltStylesheet xsltStylesheet;
	typedef xsltStylesheet* xsltStylesheetPtr;
	typedef _xsltTransformContext xsltTransformContext;
	typedef xsltTransformContext* xsltTransformContextPtr;
	/**
	 * xsltElemPreComp:<br>
	 * * The in-memory structure corresponding to element precomputed data,<br>
	 * designed to be extended by extension implementors.
	 */
	typedef _xsltElemPreComp xsltElemPreComp;
	typedef xsltElemPreComp* xsltElemPreCompPtr;
	/**
	 * xsltTransformFunction:<br>
	 * @ctxt: the XSLT transformation context<br>
	 * @node: the input node<br>
	 * @inst: the stylesheet node<br>
	 * @comp: the compiled information from the stylesheet<br>
	 * * Signature of the function associated to elements part of the<br>
	 * stylesheet language like xsl:if or xsl:apply-templates.
	 */
	typedef void (*xsltTransformFunction)(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltElemPreCompPtr comp) xsltTransformFunction;
	/**
	 * xsltSortFunc:<br>
	 * @ctxt:    a transformation context<br>
	 * @sorts:   the node-set to sort<br>
	 * @nbsorts: the number of sorts<br>
	 * * Signature of the function to use during sorting
	 */
	typedef void (*xsltSortFunc)(xsltTransformContextPtr ctxt, xmlNodePtr* sorts, int nbsorts) xsltSortFunc;
	typedef enum xsltStyleType {
		XSLT_FUNC_COPY = 1,
		XSLT_FUNC_SORT,
		XSLT_FUNC_TEXT,
		XSLT_FUNC_ELEMENT,
		XSLT_FUNC_ATTRIBUTE,
		XSLT_FUNC_COMMENT,
		XSLT_FUNC_PI,
		XSLT_FUNC_COPYOF,
		XSLT_FUNC_VALUEOF,
		XSLT_FUNC_NUMBER,
		XSLT_FUNC_APPLYIMPORTS,
		XSLT_FUNC_CALLTEMPLATE,
		XSLT_FUNC_APPLYTEMPLATES,
		XSLT_FUNC_CHOOSE,
		XSLT_FUNC_IF,
		XSLT_FUNC_FOREACH,
		XSLT_FUNC_DOCUMENT,
		XSLT_FUNC_WITHPARAM,
		XSLT_FUNC_PARAM,
		XSLT_FUNC_VARIABLE,
		XSLT_FUNC_WHEN,
		XSLT_FUNC_EXTENSION
	} xsltStyleType;
	/**
	 * xsltElemPreCompDeallocator:<br>
	 * @comp:  the #xsltElemPreComp to free up<br>
	 * * Deallocates an #xsltElemPreComp structure.
	 */
	typedef void (*xsltElemPreCompDeallocator)(xsltElemPreCompPtr comp) xsltElemPreCompDeallocator;
	/**
	 * xsltElemPreComp:<br>
	 * The basic structure for compiled items of the AST of the XSLT processor.<br>
	 * This structure is also intended to be extended by extension implementors.<br>
	 * TODO: This is somehow not nice, since it has a "free" field, which<br>
	 *   derived stylesheet-structs do not have.
	 */
	struct _xsltElemPreComp {
		xsltElemPreCompPtr next; /* next item in the global chained
					   list hold by xsltStylesheet. */
		xsltStyleType type; /* type of the element */
		xsltTransformFunction func; /* handling function */
		xmlNodePtr inst; /* the node in the stylesheet's tree
					   corresponding to this item */
		xsltElemPreCompDeallocator free; /* the deallocator */
	};
	/**
	 * xsltStylePreComp:<br>
	 * * The abstract basic structure for items of the XSLT processor.<br>
	 * This includes:<br>
	 * 1) compiled forms of XSLT instructions (xsl:if, xsl:attribute, etc.)<br>
	 * 2) compiled forms of literal result elements<br>
	 * 3) compiled forms of extension elements
	 */
	typedef _xsltStylePreComp xsltStylePreComp;
	typedef xsltStylePreComp* xsltStylePreCompPtr;
	/**
	 * _xsltStylePreComp:<br>
	 * The in-memory structure corresponding to XSLT stylesheet constructs<br>
	 * precomputed data.
	 */
	struct _xsltStylePreComp {
		xsltElemPreCompPtr next; /* chained list */
		xsltStyleType type; /* type of the element */
		xsltTransformFunction func; /* handling function */
		xmlNodePtr inst; /* the instruction */
		const xmlChar* stype; /* sort */
		int has_stype; /* sort */
		int number; /* sort */
		const xmlChar* order; /* sort */
		int has_order; /* sort */
		int descending; /* sort */
		const xmlChar* lang; /* sort */
		int has_lang; /* sort */
		xsltLocale locale; /* sort */
		const xmlChar* case_order; /* sort */
		int lower_first; /* sort */
		const xmlChar* use; /* copy, element */
		int has_use; /* copy, element */
		int noescape; /* text */
		const xmlChar* name; /* element, attribute, pi */
		int has_name; /* element, attribute, pi */
		const xmlChar* ns; /* element */
		int has_ns; /* element */
		const xmlChar* mode; /* apply-templates */
		const xmlChar* modeURI; /* apply-templates */
		const xmlChar* test; /* if */
		xsltTemplatePtr templ; /* call-template */
		const xmlChar* select; /* sort, copy-of, value-of, apply-templates */
		int ver11; /* document */
		const xmlChar* filename; /* document URL */
		int has_filename; /* document */
		xsltNumberData numdata; /* number */
		xmlXPathCompExprPtr comp; /* a precompiled XPath expression */
		xmlNsPtr* nsList; /* the namespaces in scope */
		int nsNr; /* the number of namespaces in scope */
	};
	/**
	 * The in-memory structure corresponding to an XSLT Variable<br>
	 * or Param.
	 */
	typedef _xsltStackElem xsltStackElem;
	typedef xsltStackElem* xsltStackElemPtr;
	struct _xsltStackElem {
		_xsltStackElem* next; /* chained list */
		xsltStylePreCompPtr comp; /* the compiled form */
		int computed; /* was the evaluation done */
		const xmlChar* name; /* the local part of the name QName */
		const xmlChar* nameURI; /* the URI part of the name QName */
		const xmlChar* select; /* the eval string */
		xmlNodePtr tree; /* the sequence constructor if no eval
				    string or the location */
		xmlXPathObjectPtr value; /* The value if computed */
		xmlDocPtr fragment; /* The Result Tree Fragments (needed for XSLT 1.0)
				   which are bound to the variable's lifetime. */
		int level; /* the depth in the tree;
                                   -1 if persistent (e.g. a given xsl:with-param) */
		xsltTransformContextPtr context; /* The transformation context; needed to cache
                                        the variables */
		int flags;
	};
	/**
	 * Note that we added a @compCtxt field to anchor an stylesheet compilation<br>
	 * context, since, due to historical reasons, various compile-time function<br>
	 * take only the stylesheet as argument and not a compilation context.
	 */
	struct _xsltStylesheet {
		_xsltStylesheet* parent;
		_xsltStylesheet* next;
		_xsltStylesheet* imports;
		xsltDocumentPtr docList; /* the include document list */
		xmlDocPtr doc; /* the parsed XML stylesheet */
		xmlHashTablePtr stripSpaces; /* the hash table of the strip-space and
				   preserve space elements */
		int stripAll; /* strip-space * (1) preserve-space * (-1) */
		xmlHashTablePtr cdataSection; /* the hash table of the cdata-section */
		xsltStackElemPtr variables; /* linked list of param and variables */
		xsltTemplatePtr templates; /* the ordered list of templates */
		void* templatesHash; /* hash table or wherever compiled templates
				   informations are stored */
		void* rootMatch; /* template based on / */
		void* keyMatch; /* template based on key() */
		void* elemMatch; /* template based on * */
		void* attrMatch; /* template based on @* */
		void* parentMatch; /* template based on .. */
		void* textMatch; /* template based on text() */
		void* piMatch; /* template based on processing-instruction() */
		void* commentMatch; /* template based on comment() */
		xmlHashTablePtr nsAliases; /* the namespace alias hash tables */
		xmlHashTablePtr attributeSets; /* the attribute sets hash tables */
		xmlHashTablePtr nsHash; /* the set of namespaces in use:
                                   ATTENTION: This is used for
                                   execution of XPath expressions; unfortunately
                                   it restricts the stylesheet to have distinct
                                   prefixes.
				   TODO: We need to get rid of this.    
				 */
		void* nsDefs; /* ATTENTION TODO: This is currently used to store
				   xsltExtDefPtr (in extensions.c) and
                                   *not* xmlNsPtr.
				 */
		void* keys; /* key definitions */
		xmlChar* method; /* the output method */
		xmlChar* methodURI; /* associated namespace if any */
		xmlChar* version; /* version string */
		xmlChar* encoding; /* encoding string */
		int omitXmlDeclaration; /* omit-xml-declaration = "yes" | "no" */
		xsltDecimalFormatPtr decimalFormat;
		int standalone; /* standalone = "yes" | "no" */
		xmlChar* doctypePublic; /* doctype-public string */
		xmlChar* doctypeSystem; /* doctype-system string */
		int indent; /* should output being indented */
		xmlChar* mediaType; /* media-type string */
		xsltElemPreCompPtr preComps; /* list of precomputed blocks */
		int warnings; /* number of warnings found at compilation */
		int errors; /* number of errors found at compilation */
		xmlChar* exclPrefix; /* last excluded prefixes */
		xmlChar** exclPrefixTab; /* array of excluded prefixes */
		int exclPrefixNr; /* number of excluded prefixes in scope */
		int exclPrefixMax; /* size of the array */
		void* _private; /* user defined data */
		xmlHashTablePtr extInfos; /* the extension data */
		int extrasNr; /* the number of extras required */
		xsltDocumentPtr includes; /* points to last nested include */
		xmlDictPtr dict;
		void* attVTs;
		const xmlChar* defaultAlias;
		int nopreproc;
		int internalized;
		int literal_result;
		xsltStylesheetPtr principal;
	};
	typedef _xsltTransformCache xsltTransformCache;
	typedef xsltTransformCache* xsltTransformCachePtr;
	struct _xsltTransformCache {
		xmlDocPtr RVT;
		int nbRVT;
		xsltStackElemPtr stackItems;
		int nbStackItems;
	};
	/** The in-memory structure corresponding to an XSLT Transformation. */
	typedef enum xsltOutputType {
		XSLT_OUTPUT_XML = 0,
		XSLT_OUTPUT_HTML,
		XSLT_OUTPUT_TEXT
	} xsltOutputType;
	typedef enum xsltTransformState {
		XSLT_STATE_OK = 0,
		XSLT_STATE_ERROR,
		XSLT_STATE_STOPPED
	} xsltTransformState;
	struct _xsltTransformContext {
		xsltStylesheetPtr style; /* the stylesheet used */
		xsltOutputType type; /* the type of output */
		xsltTemplatePtr templ; /* the current template */
		int templNr; /* Nb of templates in the stack */
		int templMax; /* Size of the templtes stack */
		xsltTemplatePtr* templTab; /* the template stack */
		xsltStackElemPtr vars; /* the current variable list */
		int varsNr; /* Nb of variable list in the stack */
		int varsMax; /* Size of the variable list stack */
		xsltStackElemPtr* varsTab; /* the variable list stack */
		int varsBase; /* the var base for current templ */
		xmlHashTablePtr extFunctions; /* the extension functions */
		xmlHashTablePtr extElements; /* the extension elements */
		xmlHashTablePtr extInfos; /* the extension data */
		const xmlChar* mode; /* the current mode */
		const xmlChar* modeURI; /* the current mode URI */
		xsltDocumentPtr docList; /* the document list */
		xsltDocumentPtr document; /* the current source document; can be NULL if an RTF */
		xmlNodePtr node; /* the current node being processed */
		xmlNodeSetPtr nodeList; /* the current node list */
		xmlDocPtr output; /* the resulting document */
		xmlNodePtr insert; /* the insertion node */
		xmlXPathContextPtr xpathCtxt; /* the XPath context */
		xsltTransformState state; /* the current state */
		xmlHashTablePtr globalVars; /* the global variables and params */
		xmlNodePtr inst; /* the instruction in the stylesheet */
		int xinclude; /* should XInclude be processed */
		const char* outputFile; /* the output URI if known */
		int profile; /* is this run profiled */
		long prof; /* the current profiled value */
		int profNr; /* Nb of templates in the stack */
		int profMax; /* Size of the templtaes stack */
		long* profTab; /* the profile template stack */
		void* _private; /* user defined data */
		int extrasNr; /* the number of extras used */
		int extrasMax; /* the number of extras allocated */
		xsltRuntimeExtraPtr extras; /* extra per runtime informations */
		xsltDocumentPtr styleList; /* the stylesheet docs list */
		void* sec; /* the security preferences if any */
		xmlGenericErrorFunc error; /* a specific error handler */
		void* errctx; /* context for the error handler */
		xsltSortFunc sortfunc; /* a ctxt specific sort routine */
		xmlDocPtr tmpRVT; /* list of RVT without persistance */
		xmlDocPtr persistRVT; /* list of persistant RVTs */
		int ctxtflags; /* context processing flags */
		const xmlChar* lasttext; /* last text node content */
		unsigned int lasttsize; /* last text node size */
		unsigned int lasttuse; /* last text node use */
		int debugStatus; /* the context level debug status */
		unsigned long* traceCode; /* pointer to the variable holding the mask */
		int parserOptions; /* parser options xmlParserOption */
		xmlDictPtr dict;
		xmlDocPtr tmpDoc; /* Obsolete; not used in the library. */
		int internalized;
		int nbKeys;
		int hasTemplKeyPatterns;
		xsltTemplatePtr currentTemplateRule; /* the Current Template Rule */
		xmlNodePtr initialContextNode;
		xmlDocPtr initialContextDoc;
		xsltTransformCachePtr cache;
		void* contextVariable; /* the current variable item */
		xmlDocPtr localRVT; /* list of local tree fragments; will be freed when
			   the instruction which created the fragment
                           exits */
		xmlDocPtr localRVTBase;
		int keyInitLevel; /* Needed to catch recursive keys issues */
		int funcLevel; /* Needed to catch recursive functions issues */
	};
	/**
	 * Functions associated to the internal types<br>
	 * xsltDecimalFormatPtr	xsltDecimalFormatGetByName(xsltStylesheetPtr sheet,<br>
	 * xmlChar *name);<br>
	 * Original signature : <code>xsltStylesheetPtr xsltNewStylesheet()</code>
	 */
	xsltStylesheetPtr xsltNewStylesheet();
	/** Original signature : <code>xsltStylesheetPtr xsltParseStylesheetFile(const xmlChar*)</code> */
	xsltStylesheetPtr xsltParseStylesheetFile(const xmlChar* filename);
	/** Original signature : <code>void xsltFreeStylesheet(xsltStylesheetPtr)</code> */
	void xsltFreeStylesheet(xsltStylesheetPtr style);
	/** Original signature : <code>int xsltIsBlank(xmlChar*)</code> */
	int xsltIsBlank(xmlChar* str);
	/** Original signature : <code>void xsltFreeStackElemList(xsltStackElemPtr)</code> */
	void xsltFreeStackElemList(xsltStackElemPtr elem);
	/** Original signature : <code>xsltDecimalFormatPtr xsltDecimalFormatGetByName(xsltStylesheetPtr, xmlChar*)</code> */
	xsltDecimalFormatPtr xsltDecimalFormatGetByName(xsltStylesheetPtr style, xmlChar* name);
	/** Original signature : <code>xsltStylesheetPtr xsltParseStylesheetProcess(xsltStylesheetPtr, xmlDocPtr)</code> */
	xsltStylesheetPtr xsltParseStylesheetProcess(xsltStylesheetPtr ret, xmlDocPtr doc);
	/** Original signature : <code>void xsltParseStylesheetOutput(xsltStylesheetPtr, xmlNodePtr)</code> */
	void xsltParseStylesheetOutput(xsltStylesheetPtr style, xmlNodePtr cur);
	/** Original signature : <code>xsltStylesheetPtr xsltParseStylesheetDoc(xmlDocPtr)</code> */
	xsltStylesheetPtr xsltParseStylesheetDoc(xmlDocPtr doc);
	/** Original signature : <code>xsltStylesheetPtr xsltParseStylesheetImportedDoc(xmlDocPtr, xsltStylesheetPtr)</code> */
	xsltStylesheetPtr xsltParseStylesheetImportedDoc(xmlDocPtr doc, xsltStylesheetPtr style);
	/** Original signature : <code>xsltStylesheetPtr xsltLoadStylesheetPI(xmlDocPtr)</code> */
	xsltStylesheetPtr xsltLoadStylesheetPI(xmlDocPtr doc);
	/** Original signature : <code>void xsltNumberFormat(xsltTransformContextPtr, xsltNumberDataPtr, xmlNodePtr)</code> */
	void xsltNumberFormat(xsltTransformContextPtr ctxt, xsltNumberDataPtr data, xmlNodePtr node);
	/** Original signature : <code>xmlXPathError xsltFormatNumberConversion(xsltDecimalFormatPtr, xmlChar*, double, xmlChar**)</code> */
	xmlXPathError xsltFormatNumberConversion(xsltDecimalFormatPtr self, xmlChar* format, double number, xmlChar** result);
	/** Original signature : <code>void xsltParseTemplateContent(xsltStylesheetPtr, xmlNodePtr)</code> */
	void xsltParseTemplateContent(xsltStylesheetPtr style, xmlNodePtr templ);
	/** Original signature : <code>int xsltAllocateExtra(xsltStylesheetPtr)</code> */
	int xsltAllocateExtra(xsltStylesheetPtr style);
	/** Original signature : <code>int xsltAllocateExtraCtxt(xsltTransformContextPtr)</code> */
	int xsltAllocateExtraCtxt(xsltTransformContextPtr ctxt);
	/**
	 * Extra functions for Result Value Trees<br>
	 * Original signature : <code>xmlDocPtr xsltCreateRVT(xsltTransformContextPtr)</code>
	 */
	xmlDocPtr xsltCreateRVT(xsltTransformContextPtr ctxt);
	/** Original signature : <code>int xsltRegisterTmpRVT(xsltTransformContextPtr, xmlDocPtr)</code> */
	int xsltRegisterTmpRVT(xsltTransformContextPtr ctxt, xmlDocPtr RVT);
	/** Original signature : <code>int xsltRegisterLocalRVT(xsltTransformContextPtr, xmlDocPtr)</code> */
	int xsltRegisterLocalRVT(xsltTransformContextPtr ctxt, xmlDocPtr RVT);
	/** Original signature : <code>int xsltRegisterPersistRVT(xsltTransformContextPtr, xmlDocPtr)</code> */
	int xsltRegisterPersistRVT(xsltTransformContextPtr ctxt, xmlDocPtr RVT);
	/** Original signature : <code>int xsltExtensionInstructionResultRegister(xsltTransformContextPtr, xmlXPathObjectPtr)</code> */
	int xsltExtensionInstructionResultRegister(xsltTransformContextPtr ctxt, xmlXPathObjectPtr obj);
	/** Original signature : <code>int xsltExtensionInstructionResultFinalize(xsltTransformContextPtr)</code> */
	int xsltExtensionInstructionResultFinalize(xsltTransformContextPtr ctxt);
	/** Original signature : <code>void xsltFreeRVTs(xsltTransformContextPtr)</code> */
	void xsltFreeRVTs(xsltTransformContextPtr ctxt);
	/** Original signature : <code>void xsltReleaseRVT(xsltTransformContextPtr, xmlDocPtr)</code> */
	void xsltReleaseRVT(xsltTransformContextPtr ctxt, xmlDocPtr RVT);
	/** Original signature : <code>int xsltTransStorageAdd(xsltTransformContextPtr, void*, void*)</code> */
	int xsltTransStorageAdd(xsltTransformContextPtr ctxt, void* id, void* data);
	/** Original signature : <code>void* xsltTransStorageRemove(xsltTransformContextPtr, void*)</code> */
	void* xsltTransStorageRemove(xsltTransformContextPtr ctxt, void* id);
	/**
	 * Extra functions for Attribute Value Templates<br>
	 * Original signature : <code>void xsltCompileAttr(xsltStylesheetPtr, xmlAttrPtr)</code>
	 */
	void xsltCompileAttr(xsltStylesheetPtr style, xmlAttrPtr attr);
	/** Original signature : <code>xmlChar* xsltEvalAVT(xsltTransformContextPtr, void*, xmlNodePtr)</code> */
	xmlChar* xsltEvalAVT(xsltTransformContextPtr ctxt, void* avt, xmlNodePtr node);
	/** Original signature : <code>void xsltFreeAVTList(void*)</code> */
	void xsltFreeAVTList(void* avt);
	/**
	 * Extra function for successful xsltCleanupGlobals / xsltInit sequence.<br>
	 * Original signature : <code>void xsltUninit()</code>
	 */
	void xsltUninit();
	/**
	 * *<br>
	 *  Transformation-time functions for *internal* use only               *<br>
	 * 								*<br>
	 * **********************************************************************<br>
	 * Original signature : <code>int xsltInitCtxtKey(xsltTransformContextPtr, xsltDocumentPtr, xsltKeyDefPtr)</code>
	 */
	int xsltInitCtxtKey(xsltTransformContextPtr ctxt, xsltDocumentPtr doc, xsltKeyDefPtr keyd);
	/** Original signature : <code>int xsltInitAllDocKeys(xsltTransformContextPtr)</code> */
	int xsltInitAllDocKeys(xsltTransformContextPtr ctxt);
}





extern ""C"" {
/**
	 * XInclude default processing.<br>
	 * Original signature : <code>void xsltSetXIncludeDefault(int)</code>
	 */
	void xsltSetXIncludeDefault(int xinclude);
	/** Original signature : <code>int xsltGetXIncludeDefault()</code> */
	int xsltGetXIncludeDefault();
	/**
	 * Export context to users.<br>
	 * Original signature : <code>xsltTransformContextPtr xsltNewTransformContext(xsltStylesheetPtr, xmlDocPtr)</code>
	 */
	xsltTransformContextPtr xsltNewTransformContext(xsltStylesheetPtr style, xmlDocPtr doc);
	/** Original signature : <code>void xsltFreeTransformContext(xsltTransformContextPtr)</code> */
	void xsltFreeTransformContext(xsltTransformContextPtr ctxt);
	/** Original signature : <code>xmlDocPtr xsltApplyStylesheetUser(xsltStylesheetPtr, xmlDocPtr, const char**, const char*, FILE*, xsltTransformContextPtr)</code> */
	xmlDocPtr xsltApplyStylesheetUser(xsltStylesheetPtr style, xmlDocPtr doc, const char** params, const char* output, FILE* profile, xsltTransformContextPtr userCtxt);
	/** Original signature : <code>void xsltProcessOneNode(xsltTransformContextPtr, xmlNodePtr, xsltStackElemPtr)</code> */
	void xsltProcessOneNode(xsltTransformContextPtr ctxt, xmlNodePtr node, xsltStackElemPtr params);
	/**
	 * Private Interfaces.<br>
	 * Original signature : <code>void xsltApplyStripSpaces(xsltTransformContextPtr, xmlNodePtr)</code>
	 */
	void xsltApplyStripSpaces(xsltTransformContextPtr ctxt, xmlNodePtr node);
	/** Original signature : <code>xmlDocPtr xsltApplyStylesheet(xsltStylesheetPtr, xmlDocPtr, const char**)</code> */
	xmlDocPtr xsltApplyStylesheet(xsltStylesheetPtr style, xmlDocPtr doc, const char** params);
	/** Original signature : <code>xmlDocPtr xsltProfileStylesheet(xsltStylesheetPtr, xmlDocPtr, const char**, FILE*)</code> */
	xmlDocPtr xsltProfileStylesheet(xsltStylesheetPtr style, xmlDocPtr doc, const char** params, FILE* output);
	/** Original signature : <code>int xsltRunStylesheet(xsltStylesheetPtr, xmlDocPtr, const char**, const char*, xmlSAXHandlerPtr, xmlOutputBufferPtr)</code> */
	int xsltRunStylesheet(xsltStylesheetPtr style, xmlDocPtr doc, const char** params, const char* output, xmlSAXHandlerPtr SAX, xmlOutputBufferPtr IObuf);
	/** Original signature : <code>int xsltRunStylesheetUser(xsltStylesheetPtr, xmlDocPtr, const char**, const char*, xmlSAXHandlerPtr, xmlOutputBufferPtr, FILE*, xsltTransformContextPtr)</code> */
	int xsltRunStylesheetUser(xsltStylesheetPtr style, xmlDocPtr doc, const char** params, const char* output, xmlSAXHandlerPtr SAX, xmlOutputBufferPtr IObuf, FILE* profile, xsltTransformContextPtr userCtxt);
	/** Original signature : <code>void xsltApplyOneTemplate(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltTemplatePtr, xsltStackElemPtr)</code> */
	void xsltApplyOneTemplate(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr list, xsltTemplatePtr templ, xsltStackElemPtr params);
	/** Original signature : <code>void xsltDocumentElem(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltDocumentElem(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltSort(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltSort(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltCopy(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltCopy(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltText(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltText(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltElement(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltElement(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltComment(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltComment(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltAttribute(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltAttribute(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltProcessingInstruction(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltProcessingInstruction(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltCopyOf(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltCopyOf(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltValueOf(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltValueOf(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltNumber(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltNumber(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltApplyImports(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltApplyImports(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltCallTemplate(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltCallTemplate(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltApplyTemplates(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltApplyTemplates(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltChoose(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltChoose(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltIf(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltIf(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltForEach(xsltTransformContextPtr, xmlNodePtr, xmlNodePtr, xsltStylePreCompPtr)</code> */
	void xsltForEach(xsltTransformContextPtr ctxt, xmlNodePtr node, xmlNodePtr inst, xsltStylePreCompPtr comp);
	/** Original signature : <code>void xsltRegisterAllElement(xsltTransformContextPtr)</code> */
	void xsltRegisterAllElement(xsltTransformContextPtr ctxt);
	/** Original signature : <code>xmlNodePtr xsltCopyTextString(xsltTransformContextPtr, xmlNodePtr, const xmlChar*, int)</code> */
	xmlNodePtr xsltCopyTextString(xsltTransformContextPtr ctxt, xmlNodePtr target, const xmlChar* string, int noescape);
	/**
	 * Following 2 functions needed for libexslt/functions.c<br>
	 * Original signature : <code>void xsltLocalVariablePop(xsltTransformContextPtr, int, int)</code>
	 */
	void xsltLocalVariablePop(xsltTransformContextPtr ctxt, int limitNr, int level);
	/** Original signature : <code>int xsltLocalVariablePush(xsltTransformContextPtr, xsltStackElemPtr, int)</code> */
	int xsltLocalVariablePush(xsltTransformContextPtr ctxt, xsltStackElemPtr variable, int level);
	/**
	 * Hook for the debugger if activated.<br>
	 * Original signature : <code>void xslHandleDebugger(xmlNodePtr, xmlNodePtr, xsltTemplatePtr, xsltTransformContextPtr)</code>
	 */
	void xslHandleDebugger(xmlNodePtr cur, xmlNodePtr node, xsltTemplatePtr templ, xsltTransformContextPtr ctxt);
}




/**
 * $Id: debug.h,v 1.5 2006/01/30 23:07:57 mclark Exp $<br>
 * * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.<br>
 * Michael Clark <michael@metaparadigm.com><br>
 * * This library is free software; you can redistribute it and/or modify<br>
 * it under the terms of the MIT license. See COPYING for details.<br>
 * Original signature : <code>void mc_set_debug(int)</code>
 */
extern void mc_set_debug(int debug);
/** Original signature : <code>int mc_get_debug()</code> */
extern int mc_get_debug();
/** Original signature : <code>void mc_set_syslog(int)</code> */
extern void mc_set_syslog(int syslog);
/** Original signature : <code>void mc_abort(const char*, null)</code> */
extern void mc_abort(const char* msg, ...);
/** Original signature : <code>void mc_debug(const char*, null)</code> */
extern void mc_debug(const char* msg, ...);
/** Original signature : <code>void mc_error(const char*, null)</code> */
extern void mc_error(const char* msg, ...);
/** Original signature : <code>void mc_info(const char*, null)</code> */
extern void mc_info(const char* msg, ...);

/** sentinel pointer value for freed slots */
struct lh_entry;
/** callback function prototypes */
typedef void lh_entry_free_fn(lh_entry* e);
/** callback function prototypes */
typedef unsigned long lh_hash_fn(void* k);
/** callback function prototypes */
typedef int lh_equal_fn(void* k1, void* k2);
/** An entry in the hash table */
struct lh_entry {
	void* k;
	void* v;
	lh_entry* next;
	lh_entry* prev;
};
/** The hash table structure. */
struct lh_table {
	int size;
	int count;
	int collisions;
	int resizes;
	int lookups;
	int inserts;
	int deletes;
	char* name;
	lh_entry* head;
	lh_entry* tail;
	lh_entry* table;
	lh_entry_free_fn* free_fn;
	lh_hash_fn* hash_fn;
	lh_equal_fn* equal_fn;
};
/**
 * Pre-defined hash and equality functions<br>
 * Original signature : <code>long lh_ptr_hash(void*)</code>
 */
extern unsigned long lh_ptr_hash(void* k);
/** Original signature : <code>int lh_ptr_equal(void*, void*)</code> */
extern int lh_ptr_equal(void* k1, void* k2);
/** Original signature : <code>long lh_char_hash(void*)</code> */
extern unsigned long lh_char_hash(void* k);
/** Original signature : <code>int lh_char_equal(void*, void*)</code> */
extern int lh_char_equal(void* k1, void* k2);
/**
 * Create a new linkhash table.<br>
 * @param size initial table size. The table is automatically resized<br>
 * although this incurs a performance penalty.<br>
 * @param name the table name.<br>
 * @param free_fn callback function used to free memory for entries<br>
 * when lh_table_free or lh_table_delete is called.<br>
 * If NULL is provided, then memory for keys and values<br>
 * must be freed by the caller.<br>
 * @param hash_fn  function used to hash keys. 2 standard ones are defined:<br>
 * lh_ptr_hash and lh_char_hash for hashing pointer values<br>
 * and C strings respectively.<br>
 * @param equal_fn comparison function to compare keys. 2 standard ones defined:<br>
 * lh_ptr_hash and lh_char_hash for comparing pointer values<br>
 * and C strings respectively.<br>
 * @return a pointer onto the linkhash table.<br>
 * Original signature : <code>lh_table* lh_table_new(int, char*, lh_entry_free_fn*, lh_hash_fn*, lh_equal_fn*)</code>
 */
extern lh_table* lh_table_new(int size, char* name, lh_entry_free_fn* free_fn, lh_hash_fn* hash_fn, lh_equal_fn* equal_fn);
/**
 * Convenience function to create a new linkhash<br>
 * table with char keys.<br>
 * @param size initial table size.<br>
 * @param name table name.<br>
 * @param free_fn callback function used to free memory for entries.<br>
 * @return a pointer onto the linkhash table.<br>
 * Original signature : <code>lh_table* lh_kchar_table_new(int, char*, lh_entry_free_fn*)</code>
 */
extern lh_table* lh_kchar_table_new(int size, char* name, lh_entry_free_fn* free_fn);
/**
 * Convenience function to create a new linkhash<br>
 * table with ptr keys.<br>
 * @param size initial table size.<br>
 * @param name table name.<br>
 * @param free_fn callback function used to free memory for entries.<br>
 * @return a pointer onto the linkhash table.<br>
 * Original signature : <code>lh_table* lh_kptr_table_new(int, char*, lh_entry_free_fn*)</code>
 */
extern lh_table* lh_kptr_table_new(int size, char* name, lh_entry_free_fn* free_fn);
/**
 * Free a linkhash table.<br>
 * If a callback free function is provided then it is called for all<br>
 * entries in the table.<br>
 * @param t table to free.<br>
 * Original signature : <code>void lh_table_free(lh_table*)</code>
 */
extern void lh_table_free(lh_table* t);
/**
 * Insert a record into the table.<br>
 * @param t the table to insert into.<br>
 * @param k a pointer to the key to insert.<br>
 * @param v a pointer to the value to insert.<br>
 * Original signature : <code>int lh_table_insert(lh_table*, void*, void*)</code>
 */
extern int lh_table_insert(lh_table* t, void* k, void* v);
/**
 * Lookup a record into the table.<br>
 * @param t the table to lookup<br>
 * @param k a pointer to the key to lookup<br>
 * @return a pointer to the record structure of the value or NULL if it does not exist.<br>
 * Original signature : <code>lh_entry* lh_table_lookup_entry(lh_table*, void*)</code>
 */
extern lh_entry* lh_table_lookup_entry(lh_table* t, void* k);
/**
 * Lookup a record into the table<br>
 * @param t the table to lookup<br>
 * @param k a pointer to the key to lookup<br>
 * @return a pointer to the found value or NULL if it does not exist.<br>
 * Original signature : <code>void* lh_table_lookup(lh_table*, void*)</code>
 */
extern void* lh_table_lookup(lh_table* t, void* k);
/**
 * Delete a record from the table.<br>
 * If a callback free function is provided then it is called for the<br>
 * for the item being deleted.<br>
 * @param t the table to delete from.<br>
 * @param e a pointer to the entry to delete.<br>
 * @return 0 if the item was deleted.<br>
 * @return -1 if it was not found.<br>
 * Original signature : <code>int lh_table_delete_entry(lh_table*, lh_entry*)</code>
 */
extern int lh_table_delete_entry(lh_table* t, lh_entry* e);
/**
 * Delete a record from the table.<br>
 * If a callback free function is provided then it is called for the<br>
 * for the item being deleted.<br>
 * @param t the table to delete from.<br>
 * @param k a pointer to the key to delete.<br>
 * @return 0 if the item was deleted.<br>
 * @return -1 if it was not found.<br>
 * Original signature : <code>int lh_table_delete(lh_table*, void*)</code>
 */
extern int lh_table_delete(lh_table* t, void* k);
/** Original signature : <code>void lh_abort(const char*, null)</code> */
void lh_abort(const char* msg, ...);
/** Original signature : <code>void lh_table_resize(lh_table*, int)</code> */
void lh_table_resize(lh_table* t, int new_size);

/**
 * $Id: arraylist.h,v 1.4 2006/01/26 02:16:28 mclark Exp $<br>
 * * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.<br>
 * Michael Clark <michael@metaparadigm.com><br>
 * * This library is free software; you can redistribute it and/or modify<br>
 * it under the terms of the MIT license. See COPYING for details.
 */
typedef void array_list_free_fn(void* data);
struct array_list {
	void** array;
	int length;
	int size;
	array_list_free_fn* free_fn;
};
/** Original signature : <code>array_list* array_list_new(array_list_free_fn*)</code> */
extern array_list* array_list_new(array_list_free_fn* free_fn);
/** Original signature : <code>void array_list_free(array_list*)</code> */
extern void array_list_free(array_list* al);
/** Original signature : <code>void* array_list_get_idx(array_list*, int)</code> */
extern void* array_list_get_idx(array_list* al, int i);
/** Original signature : <code>int array_list_put_idx(array_list*, int, void*)</code> */
extern int array_list_put_idx(array_list* al, int i, void* data);
/** Original signature : <code>int array_list_add(array_list*, void*)</code> */
extern int array_list_add(array_list* al, void* data);
/** Original signature : <code>int array_list_length(array_list*)</code> */
extern int array_list_length(array_list* al);


/**
 * $Id: json_object.h,v 1.12 2006/01/30 23:07:57 mclark Exp $<br>
 * * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.<br>
 * Michael Clark <michael@metaparadigm.com><br>
 * * This library is free software; you can redistribute it and/or modify<br>
 * it under the terms of the MIT license. See COPYING for details.
 */
extern char* json_number_chars;
extern char* json_hex_chars;
/** forward structure definitions */
typedef int boolean;
struct printbuf;
struct lh_table;
struct array_list;
struct json_object;
struct json_object_iter;
/** supported object types */
enum json_type {
	json_type_null,
	json_type_boolean,
	json_type_double,
	json_type_int,
	json_type_object,
	json_type_array,
	json_type_string
};
/**
 * Increment the reference count of json_object<br>
 * @param obj the json_object instance<br>
 * Original signature : <code>json_object* json_object_get(json_object*)</code>
 */
extern json_object* json_object_get(json_object* obj);
/**
 * Decrement the reference count of json_object and free if it reaches zero<br>
 * @param obj the json_object instance<br>
 * Original signature : <code>void json_object_put(json_object*)</code>
 */
extern void json_object_put(json_object* obj);
/**
 * Check if the json_object is of a given type<br>
 * @param obj the json_object instance<br>
 * @param type one of:<br>
 * json_type_boolean,<br>
 * json_type_double,<br>
 * json_type_int,<br>
 * json_type_object,<br>
 * json_type_array,<br>
 * json_type_string,<br>
 * Original signature : <code>int json_object_is_type(json_object*, json_type)</code>
 */
extern int json_object_is_type(json_object* obj, json_type type);
/**
 * Get the type of the json_object<br>
 * @param obj the json_object instance<br>
 * @returns type being one of:<br>
 * json_type_boolean,<br>
 * json_type_double,<br>
 * json_type_int,<br>
 * json_type_object,<br>
 * json_type_array,<br>
 * json_type_string,<br>
 * Original signature : <code>json_type json_object_get_type(json_object*)</code>
 */
extern json_type json_object_get_type(json_object* obj);
/**
 * Stringify object to json format<br>
 * @param obj the json_object instance<br>
 * @returns a string in JSON format<br>
 * Original signature : <code>char* json_object_to_json_string(json_object*)</code>
 */
extern char* json_object_to_json_string(json_object* obj);
/**
 * Create a new empty object<br>
 * @returns a json_object of type json_type_object<br>
 * Original signature : <code>json_object* json_object_new_object()</code>
 */
extern json_object* json_object_new_object();
/**
 * Get the hashtable of a json_object of type json_type_object<br>
 * @param obj the json_object instance<br>
 * @returns a linkhash<br>
 * Original signature : <code>lh_table* json_object_get_object(json_object*)</code>
 */
extern lh_table* json_object_get_object(json_object* obj);
/**
 * Add an object field to a json_object of type json_type_object<br>
 * * The reference count will *not* be incremented. This is to make adding<br>
 * fields to objects in code more compact. If you want to retain a reference<br>
 * to an added object you must wrap the passed object with json_object_get<br>
 * * @param obj the json_object instance<br>
 * @param key the object field name (a private copy will be duplicated)<br>
 * @param val a json_object or NULL member to associate with the given field<br>
 * Original signature : <code>void json_object_object_add(json_object*, char*, json_object*)</code>
 */
extern void json_object_object_add(json_object* obj, char* key, json_object* val);
/**
 * Get the json_object associate with a given object field<br>
 * @param obj the json_object instance<br>
 * @param key the object field name<br>
 * @returns the json_object associated with the given field name<br>
 * Original signature : <code>json_object* json_object_object_get(json_object*, char*)</code>
 */
extern json_object* json_object_object_get(json_object* obj, char* key);
/**
 * Delete the given json_object field<br>
 * * The reference count will be decremented for the deleted object<br>
 * * @param obj the json_object instance<br>
 * @param key the object field name<br>
 * Original signature : <code>void json_object_object_del(json_object*, char*)</code>
 */
extern void json_object_object_del(json_object* obj, char* key);
/**
 * Create a new empty json_object of type json_type_array<br>
 * @returns a json_object of type json_type_array<br>
 * Original signature : <code>json_object* json_object_new_array()</code>
 */
extern json_object* json_object_new_array();
/**
 * Get the arraylist of a json_object of type json_type_array<br>
 * @param obj the json_object instance<br>
 * @returns an arraylist<br>
 * Original signature : <code>array_list* json_object_get_array(json_object*)</code>
 */
extern array_list* json_object_get_array(json_object* obj);
/**
 * Get the length of a json_object of type json_type_array<br>
 * @param obj the json_object instance<br>
 * @returns an int<br>
 * Original signature : <code>int json_object_array_length(json_object*)</code>
 */
extern int json_object_array_length(json_object* obj);
/**
 * Add an element to the end of a json_object of type json_type_array<br>
 * * The reference count will *not* be incremented. This is to make adding<br>
 * fields to objects in code more compact. If you want to retain a reference<br>
 * to an added object you must wrap the passed object with json_object_get<br>
 * * @param obj the json_object instance<br>
 * @param val the json_object to be added<br>
 * Original signature : <code>int json_object_array_add(json_object*, json_object*)</code>
 */
extern int json_object_array_add(json_object* obj, json_object* val);
/**
 * Insert or replace an element at a specified index in an array (a json_object of type json_type_array)<br>
 * * The reference count will *not* be incremented. This is to make adding<br>
 * fields to objects in code more compact. If you want to retain a reference<br>
 * to an added object you must wrap the passed object with json_object_get<br>
 * * The reference count of a replaced object will be decremented.<br>
 * * The array size will be automatically be expanded to the size of the<br>
 * index if the index is larger than the current size.<br>
 * * @param obj the json_object instance<br>
 * @param idx the index to insert the element at<br>
 * @param val the json_object to be added<br>
 * Original signature : <code>int json_object_array_put_idx(json_object*, int, json_object*)</code>
 */
extern int json_object_array_put_idx(json_object* obj, int idx, json_object* val);
/**
 * Get the element at specificed index of the array (a json_object of type json_type_array)<br>
 * @param obj the json_object instance<br>
 * @param idx the index to get the element at<br>
 * @returns the json_object at the specified index (or NULL)<br>
 * Original signature : <code>json_object* json_object_array_get_idx(json_object*, int)</code>
 */
extern json_object* json_object_array_get_idx(json_object* obj, int idx);
/**
 * Create a new empty json_object of type json_type_boolean<br>
 * @param b a boolean TRUE or FALSE (0 or 1)<br>
 * @returns a json_object of type json_type_boolean<br>
 * Original signature : <code>json_object* json_object_new_boolean(boolean)</code>
 */
extern json_object* json_object_new_boolean(boolean b);
/**
 * Get the boolean value of a json_object<br>
 * * The type is coerced to a boolean if the passed object is not a boolean.<br>
 * integer and double objects will return FALSE if there value is zero<br>
 * or TRUE otherwise. If the passed object is a string it will return<br>
 * TRUE if it has a non zero length. If any other object type is passed<br>
 * TRUE will be returned if the object is not NULL.<br>
 * * @param obj the json_object instance<br>
 * @returns a boolean<br>
 * Original signature : <code>boolean json_object_get_boolean(json_object*)</code>
 */
extern boolean json_object_get_boolean(json_object* obj);
/**
 * Create a new empty json_object of type json_type_int<br>
 * @param i the integer<br>
 * @returns a json_object of type json_type_int<br>
 * Original signature : <code>json_object* json_object_new_int(int)</code>
 */
extern json_object* json_object_new_int(int i);
/**
 * Get the int value of a json_object<br>
 * * The type is coerced to a int if the passed object is not a int.<br>
 * double objects will return their integer conversion. Strings will be<br>
 * parsed as an integer. If no conversion exists then 0 is returned.<br>
 * * @param obj the json_object instance<br>
 * @returns an int<br>
 * Original signature : <code>int json_object_get_int(json_object*)</code>
 */
extern int json_object_get_int(json_object* obj);
/**
 * Create a new empty json_object of type json_type_double<br>
 * @param d the double<br>
 * @returns a json_object of type json_type_double<br>
 * Original signature : <code>json_object* json_object_new_double(double)</code>
 */
extern json_object* json_object_new_double(double d);
/**
 * Get the double value of a json_object<br>
 * * The type is coerced to a double if the passed object is not a double.<br>
 * integer objects will return their dboule conversion. Strings will be<br>
 * parsed as a double. If no conversion exists then 0.0 is returned.<br>
 * * @param obj the json_object instance<br>
 * @returns an double<br>
 * Original signature : <code>double json_object_get_double(json_object*)</code>
 */
extern double json_object_get_double(json_object* obj);
/**
 * Create a new empty json_object of type json_type_string<br>
 * * A copy of the string is made and the memory is managed by the json_object<br>
 * * @param s the string<br>
 * @returns a json_object of type json_type_string<br>
 * Original signature : <code>json_object* json_object_new_string(char*)</code>
 */
extern json_object* json_object_new_string(char* s);
/** Original signature : <code>json_object* json_object_new_string_len(char*, int)</code> */
extern json_object* json_object_new_string_len(char* s, int len);
/**
 * Get the string value of a json_object<br>
 * * If the passed object is not of type json_type_string then the JSON<br>
 * representation of the object is returned.<br>
 * * The returned string memory is managed by the json_object and will<br>
 * be freed when the reference count of the json_object drops to zero.<br>
 * * @param obj the json_object instance<br>
 * @returns a string<br>
 * Original signature : <code>char* json_object_get_string(json_object*)</code>
 */
extern char* json_object_get_string(json_object* obj);
enum json_type {
};
enum json_type {
};
/**
 * utlitiy functions<br>
 * Original signature : <code>json_object* json_object_from_file(char*)</code>
 */
extern json_object* json_object_from_file(char* filename);
/** Original signature : <code>int json_object_to_file(char*, json_object*)</code> */
extern int json_object_to_file(char* filename, json_object* obj);




enum json_tokener_error {
	json_tokener_success,
	json_tokener_continue,
	json_tokener_error_depth,
	json_tokener_error_parse_eof,
	json_tokener_error_parse_unexpected,
	json_tokener_error_parse_null,
	json_tokener_error_parse_boolean,
	json_tokener_error_parse_number,
	json_tokener_error_parse_array,
	json_tokener_error_parse_object_key_name,
	json_tokener_error_parse_object_key_sep,
	json_tokener_error_parse_object_value_sep,
	json_tokener_error_parse_string,
	json_tokener_error_parse_comment
};
enum json_tokener_state {
	json_tokener_state_eatws,
	json_tokener_state_start,
	json_tokener_state_finish,
	json_tokener_state_null,
	json_tokener_state_comment_start,
	json_tokener_state_comment,
	json_tokener_state_comment_eol,
	json_tokener_state_comment_end,
	json_tokener_state_string,
	json_tokener_state_string_escape,
	json_tokener_state_escape_unicode,
	json_tokener_state_boolean,
	json_tokener_state_number,
	json_tokener_state_array,
	json_tokener_state_array_add,
	json_tokener_state_array_sep,
	json_tokener_state_object_field_start,
	json_tokener_state_object_field,
	json_tokener_state_object_field_end,
	json_tokener_state_object_value,
	json_tokener_state_object_value_add,
	json_tokener_state_object_sep
};
struct json_tokener_srec {
	json_tokener_state state;
	json_tokener_state saved_state;
	json_object* obj;
	json_object* current;
	char* obj_field_name;
	enum json_tokener_state {
	};
	enum json_tokener_state {
	};
};
struct json_tokener {
	char* str;
	printbuf* pb;
	int depth;
	int is_double;
	int st_pos;
	int char_offset;
	ptrdiff_t err;
	unsigned int ucs_char;
	char quote_char;
	json_tokener_srec[32] stack;
};
extern const char*[] json_tokener_errors;
/** Original signature : <code>json_tokener* json_tokener_new()</code> */
extern json_tokener* json_tokener_new();
/** Original signature : <code>void json_tokener_free(json_tokener*)</code> */
extern void json_tokener_free(json_tokener* tok);
/** Original signature : <code>void json_tokener_reset(json_tokener*)</code> */
extern void json_tokener_reset(json_tokener* tok);
/** Original signature : <code>json_object* json_tokener_parse(char*)</code> */
extern json_object* json_tokener_parse(char* str);
/** Original signature : <code>json_object* json_tokener_parse_ex(json_tokener*, char*, int)</code> */
extern json_object* json_tokener_parse_ex(json_tokener* tok, char* str, int len);



typedef struct pxpath_node {
	int type;
	char* value;
	__pxpath_node* next;
	__pxpath_node* child;
} __pxpath_node;
typedef pxpath_node* pxpathPtr;
enum {
	PXPATH_FUNCTION = 1,
	PXPATH_PATH = 2,
	PXPATH_LITERAL = 3,
	PXPATH_LIT_EXPR = 4,
	PXPATH_OPERATOR = 3
};
/** Original signature : <code>pxpathPtr pxpath_new(int, char*)</code> */
pxpathPtr pxpath_new(int type, char* value);
/** Original signature : <code>pxpathPtr pxpath_new_func(char*, pxpathPtr)</code> */
pxpathPtr pxpath_new_func(char* value, pxpathPtr child);
/** Original signature : <code>pxpathPtr pxpath_cat_paths(int, null)</code> */
pxpathPtr pxpath_cat_paths(int n, ...);
/** Original signature : <code>pxpathPtr pxpath_cat_literals(int, null)</code> */
pxpathPtr pxpath_cat_literals(int n, ...);
/** Original signature : <code>pxpathPtr pxpath_new_path(int, null)</code> */
pxpathPtr pxpath_new_path(int n, ...);
/** Original signature : <code>pxpathPtr pxpath_dup(pxpathPtr)</code> */
pxpathPtr pxpath_dup(pxpathPtr p);
/** Original signature : <code>pxpathPtr pxpath_new_literal(int, null)</code> */
pxpathPtr pxpath_new_literal(int n, ...);
/** Original signature : <code>pxpathPtr pxpath_new_operator(int, null)</code> */
pxpathPtr pxpath_new_operator(int n, ...);
/** Original signature : <code>void pxpath_free(pxpathPtr)</code> */
void pxpath_free(pxpathPtr ptr);
/** Original signature : <code>char* pxpath_to_string(pxpathPtr)</code> */
char* pxpath_to_string(pxpathPtr ptr);
static int parsley_debug_mode = 0;
static char* last_parsley_error;
typedef struct compiled_parsley {
	xsltStylesheetPtr stylesheet;
	char* error;
} __compiled_parsley;
typedef struct parsed_parsley {
	xmlDocPtr xml;
	char* error;
	compiled_parsley* parsley;
} __parsed_parsley;
typedef compiled_parsley* parsleyPtr;
typedef parsed_parsley* parsedParsleyPtr;
typedef struct key_node {
	char* name;
	char* use;
	__key_node* next;
} __key_node;
typedef key_node* keyPtr;
typedef struct parsley_context {
	xmlNsPtr ns;
	xmlNodePtr node;
	json_object* json;
	char* tag;
	pxpathPtr filter;
	pxpathPtr expr;
	bool magic;
	bool array;
	bool string;
	int flags; //bitmask over following enum

	__parsley_context* parent;
	__parsley_context* child;
	__parsley_context* next;
} __parsley_context;
enum {
	PARSLEY_OPTIONAL = 1,
	PARSLEY_BANG = 2
};
enum {
	PARSLEY_OPTIONS_HTML = 1,
	PARSLEY_OPTIONS_PRUNE = 2,
	PARSLEY_OPTIONS_ALLOW_NET = 4,
	PARSLEY_OPTIONS_ALLOW_LOCAL = 8,
	PARSLEY_OPTIONS_COLLATE = 16,
	PARSLEY_OPTIONS_SGWRAP = 32,
	PARSLEY_OPTIONS_FORCE_UTF8 = 64
};
typedef parsley_context* contextPtr;
/** Original signature : <code>void parsed_parsley_free(parsedParsleyPtr)</code> */
void parsed_parsley_free(parsedParsleyPtr parsedParsleyPtr1);
/** Original signature : <code>void killDefaultNS(xmlDocPtr)</code> */
void killDefaultNS(xmlDocPtr doc);
/** Original signature : <code>void parsley_free(parsleyPtr)</code> */
void parsley_free(parsleyPtr parsleyPtr1);
/** Original signature : <code>parsleyPtr parsley_compile(char*, char*)</code> */
parsleyPtr parsley_compile(char* parsley, char* incl);
/** Original signature : <code>parsedParsleyPtr parsley_parse_file(parsleyPtr, char*, int)</code> */
parsedParsleyPtr parsley_parse_file(parsleyPtr parsley, char* file, int flags);
/** Original signature : <code>parsedParsleyPtr parsley_parse_string(parsleyPtr, char*, size_t, char*, int)</code> */
parsedParsleyPtr parsley_parse_string(parsleyPtr parsley, char* string, size_t size, char* base_uri, int flags);
/** Original signature : <code>parsedParsleyPtr parsley_parse_doc(parsleyPtr, int)</code> */
parsedParsleyPtr parsley_parse_doc(parsleyPtr parsleyPtr1, int int1);
/** Original signature : <code>void parsleyXsltError(void*, const char*, null)</code> */
void parsleyXsltError(void* ctx, const char* msg, ...);
/** Original signature : <code>void parsley_set_user_agent(const char*)</code> */
void parsley_set_user_agent(const char* agent);
static contextPtr parsley_parsing_context;
/**
 * tycho's functions<br>
 * Original signature : <code>parsedParsleyPtr parsley_parse_html_string_simple(parsleyPtr, char*)</code>
 */
parsedParsleyPtr parsley_parse_html_string_simple(parsleyPtr parsley, char* string);
/** Original signature : <code>parsedParsleyPtr parsley_parse_both(char*, char*)</code> */
parsedParsleyPtr parsley_parse_both(char* parselet, char* html);
/** Original signature : <code>char* parsley_to_json(parsedParsleyPtr)</code> */
char* parsley_to_json(parsedParsleyPtr ptr);
/** Original signature : <code>char* strings_to_json(char*, char*)</code> */
char* strings_to_json(char* parselet, char* html);
/** Original signature : <code>char* compiled_to_json(parsleyPtr, char*)</code> */
char* compiled_to_json(parsleyPtr parsley, char* html);
