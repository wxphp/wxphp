<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Some predefined constants to assit on the code generation.
 * 
 * wxStyledTextCtrl constants not yet defined on the 
 * wxWidgets documentation
 * 
*/

//Event types
$defConsts["wxEVT_STC_CHANGE"] = true;
$defConsts["wxEVT_STC_STYLENEEDED"] = true;
$defConsts["wxEVT_STC_CHARADDED"] = true;
$defConsts["wxEVT_STC_SAVEPOINTREACHED"] = true;
$defConsts["wxEVT_STC_SAVEPOINTLEFT"] = true;
$defConsts["wxEVT_STC_ROMODIFYATTEMPT"] = true;
$defConsts["wxEVT_STC_KEY"] = true;
$defConsts["wxEVT_STC_DOUBLECLICK"] = true;
$defConsts["wxEVT_STC_UPDATEUI"] = true;
$defConsts["wxEVT_STC_MODIFIED"] = true;
$defConsts["wxEVT_STC_MACRORECORD"] = true;
$defConsts["wxEVT_STC_MARGINCLICK"] = true;
$defConsts["wxEVT_STC_NEEDSHOWN"] = true;
$defConsts["wxEVT_STC_PAINTED"] = true;
$defConsts["wxEVT_STC_USERLISTSELECTION"] = true;
$defConsts["wxEVT_STC_URIDROPPED"] = true;
$defConsts["wxEVT_STC_DWELLSTART"] = true;
$defConsts["wxEVT_STC_DWELLEND"] = true;
$defConsts["wxEVT_STC_START_DRAG"] = true;
$defConsts["wxEVT_STC_DRAG_OVER"] = true;
$defConsts["wxEVT_STC_DO_DROP"] = true;
$defConsts["wxEVT_STC_ZOOM"] = true;
$defConsts["wxEVT_STC_HOTSPOT_CLICK"] = true;
$defConsts["wxEVT_STC_HOTSPOT_DCLICK"] = true;
$defConsts["wxEVT_STC_CALLTIP_CLICK"] = true;
$defConsts["wxEVT_STC_AUTOCOMP_SELECTION"] = true;
$defConsts["wxEVT_STC_INDICATOR_CLICK"] = true;
$defConsts["wxEVT_STC_INDICATOR_RELEASE"] = true;
$defConsts["wxEVT_STC_AUTOCOMP_CANCELLED"] = true;
$defConsts["wxEVT_STC_AUTOCOMP_CHAR_DELETED"] = true;

$defConsts["wxSTC_INVALID_POSITION"] = true;

// Define start of Scintilla messages to be greater than all Windows edit (EM_*) messages
// as many EM_ messages can be used although that use is deprecated.
$defConsts["wxSTC_START"] = true;
$defConsts["wxSTC_OPTIONAL_START"] = true;
$defConsts["wxSTC_LEXER_START"] = true;
$defConsts["wxSTC_WS_INVISIBLE"] = true;
$defConsts["wxSTC_WS_VISIBLEALWAYS"] = true;
$defConsts["wxSTC_WS_VISIBLEAFTERINDENT"] = true;
$defConsts["wxSTC_EOL_CRLF"] = true;
$defConsts["wxSTC_EOL_CR"] = true;
$defConsts["wxSTC_EOL_LF"] = true;

// The SC_CP_UTF8 value can be used to enter Unicode mode.
// This is the same value as CP_UTF8 in Windows
$defConsts["wxSTC_CP_UTF8"] = true;

// The SC_CP_DBCS value can be used to indicate a DBCS mode for GTK+.
$defConsts["wxSTC_CP_DBCS"] = true;
$defConsts["wxSTC_MARKER_MAX"] = true;
$defConsts["wxSTC_MARK_CIRCLE"] = true;
$defConsts["wxSTC_MARK_ROUNDRECT"] = true;
$defConsts["wxSTC_MARK_ARROW"] = true;
$defConsts["wxSTC_MARK_SMALLRECT"] = true;
$defConsts["wxSTC_MARK_SHORTARROW"] = true;
$defConsts["wxSTC_MARK_EMPTY"] = true;
$defConsts["wxSTC_MARK_ARROWDOWN"] = true;
$defConsts["wxSTC_MARK_MINUS"] = true;
$defConsts["wxSTC_MARK_PLUS"] = true;

// Shapes used for outlining column.
$defConsts["wxSTC_MARK_VLINE"] = true;
$defConsts["wxSTC_MARK_LCORNER"] = true;
$defConsts["wxSTC_MARK_TCORNER"] = true;
$defConsts["wxSTC_MARK_BOXPLUS"] = true;
$defConsts["wxSTC_MARK_BOXPLUSCONNECTED"] = true;
$defConsts["wxSTC_MARK_BOXMINUS"] = true;
$defConsts["wxSTC_MARK_BOXMINUSCONNECTED"] = true;
$defConsts["wxSTC_MARK_LCORNERCURVE"] = true;
$defConsts["wxSTC_MARK_TCORNERCURVE"] = true;
$defConsts["wxSTC_MARK_CIRCLEPLUS"] = true;
$defConsts["wxSTC_MARK_CIRCLEPLUSCONNECTED"] = true;
$defConsts["wxSTC_MARK_CIRCLEMINUS"] = true;
$defConsts["wxSTC_MARK_CIRCLEMINUSCONNECTED"] = true;

// Invisible mark that only sets the line background color.
$defConsts["wxSTC_MARK_BACKGROUND"] = true;
$defConsts["wxSTC_MARK_DOTDOTDOT"] = true;
$defConsts["wxSTC_MARK_ARROWS"] = true;
$defConsts["wxSTC_MARK_PIXMAP"] = true;
$defConsts["wxSTC_MARK_FULLRECT"] = true;
$defConsts["wxSTC_MARK_LEFTRECT"] = true;
$defConsts["wxSTC_MARK_AVAILABLE"] = true;
$defConsts["wxSTC_MARK_UNDERLINE"] = true;
$defConsts["wxSTC_MARK_CHARACTER"] = true;

// Markers used for outlining column.
$defConsts["wxSTC_MARKNUM_FOLDEREND"] = true;
$defConsts["wxSTC_MARKNUM_FOLDEROPENMID"] = true;
$defConsts["wxSTC_MARKNUM_FOLDERMIDTAIL"] = true;
$defConsts["wxSTC_MARKNUM_FOLDERTAIL"] = true;
$defConsts["wxSTC_MARKNUM_FOLDERSUB"] = true;
$defConsts["wxSTC_MARKNUM_FOLDER"] = true;
$defConsts["wxSTC_MARKNUM_FOLDEROPEN"] = true;
$defConsts["wxSTC_MASK_FOLDERS"] = true;
$defConsts["wxSTC_MARGIN_SYMBOL"] = true;
$defConsts["wxSTC_MARGIN_NUMBER"] = true;
$defConsts["wxSTC_MARGIN_BACK"] = true;
$defConsts["wxSTC_MARGIN_FORE"] = true;
$defConsts["wxSTC_MARGIN_TEXT"] = true;
$defConsts["wxSTC_MARGIN_RTEXT"] = true;

// Styles in range"] = true;..38 are predefined for parts of the UI and are not used as normal styles.
// Style"] = true; is for future use.
$defConsts["wxSTC_STYLE_DEFAULT"] = true;
$defConsts["wxSTC_STYLE_LINENUMBER"] = true;
$defConsts["wxSTC_STYLE_BRACELIGHT"] = true;
$defConsts["wxSTC_STYLE_BRACEBAD"] = true;
$defConsts["wxSTC_STYLE_CONTROLCHAR"] = true;
$defConsts["wxSTC_STYLE_INDENTGUIDE"] = true;
$defConsts["wxSTC_STYLE_CALLTIP"] = true;
$defConsts["wxSTC_STYLE_LASTPREDEFINED"] = true;
$defConsts["wxSTC_STYLE_MAX"] = true;

// Character set identifiers are used in StyleSetCharacterSet.
// The values are the same as the Windows *_CHARSET values.
$defConsts["wxSTC_CHARSET_ANSI"] = true;
$defConsts["wxSTC_CHARSET_DEFAULT"] = true;
$defConsts["wxSTC_CHARSET_BALTIC"] = true;
$defConsts["wxSTC_CHARSET_CHINESEBIG5"] = true;
$defConsts["wxSTC_CHARSET_EASTEUROPE"] = true;
$defConsts["wxSTC_CHARSET_GB2312"] = true;
$defConsts["wxSTC_CHARSET_GREEK"] = true;
$defConsts["wxSTC_CHARSET_HANGUL"] = true;
$defConsts["wxSTC_CHARSET_MAC"] = true;
$defConsts["wxSTC_CHARSET_OEM"] = true;
$defConsts["wxSTC_CHARSET_RUSSIAN"] = true;
$defConsts["wxSTC_CHARSET_CYRILLIC"] = true;
$defConsts["wxSTC_CHARSET_SHIFTJIS"] = true;
$defConsts["wxSTC_CHARSET_SYMBOL"] = true;
$defConsts["wxSTC_CHARSET_TURKISH"] = true;
$defConsts["wxSTC_CHARSET_JOHAB"] = true;
$defConsts["wxSTC_CHARSET_HEBREW"] = true;
$defConsts["wxSTC_CHARSET_ARABIC"] = true;
$defConsts["wxSTC_CHARSET_VIETNAMESE"] = true;
$defConsts["wxSTC_CHARSET_THAI"] = true;
$defConsts["wxSTC_CHARSET_8859_15"] = true;
$defConsts["wxSTC_CASE_MIXED"] = true;
$defConsts["wxSTC_CASE_UPPER"] = true;
$defConsts["wxSTC_CASE_LOWER"] = true;

// Indicator style enumeration and some constants
$defConsts["wxSTC_INDIC_PLAIN"] = true;
$defConsts["wxSTC_INDIC_SQUIGGLE"] = true;
$defConsts["wxSTC_INDIC_TT"] = true;
$defConsts["wxSTC_INDIC_DIAGONAL"] = true;
$defConsts["wxSTC_INDIC_STRIKE"] = true;
$defConsts["wxSTC_INDIC_HIDDEN"] = true;
$defConsts["wxSTC_INDIC_BOX"] = true;
$defConsts["wxSTC_INDIC_ROUNDBOX"] = true;
$defConsts["wxSTC_INDIC_MAX"] = true;
$defConsts["wxSTC_INDIC_CONTAINER"] = true;
$defConsts["wxSTC_INDIC0_MASK"] = true;
$defConsts["wxSTC_INDIC1_MASK"] = true;
$defConsts["wxSTC_INDIC2_MASK"] = true;
$defConsts["wxSTC_INDICS_MASK"] = true;
$defConsts["wxSTC_IV_NONE"] = true;
$defConsts["wxSTC_IV_REAL"] = true;
$defConsts["wxSTC_IV_LOOKFORWARD"] = true;
$defConsts["wxSTC_IV_LOOKBOTH"] = true;

// PrintColourMode - use same colours as screen.
$defConsts["wxSTC_PRINT_NORMAL"] = true;

// PrintColourMode - invert the light value of each style for printing.
$defConsts["wxSTC_PRINT_INVERTLIGHT"] = true;

// PrintColourMode - force black text on white background for printing.
$defConsts["wxSTC_PRINT_BLACKONWHITE"] = true;

// PrintColourMode - text stays coloured, but all background is forced to be white for printing.
$defConsts["wxSTC_PRINT_COLOURONWHITE"] = true;

// PrintColourMode - only the default-background is forced to be white for printing.
$defConsts["wxSTC_PRINT_COLOURONWHITEDEFAULTBG"] = true;
$defConsts["wxSTC_FIND_WHOLEWORD"] = true;
$defConsts["wxSTC_FIND_MATCHCASE"] = true;
$defConsts["wxSTC_FIND_WORDSTART"] = true;
$defConsts["wxSTC_FIND_REGEXP"] = true;
$defConsts["wxSTC_FIND_POSIX"] = true;
$defConsts["wxSTC_FOLDLEVELBASE"] = true;
$defConsts["wxSTC_FOLDLEVELWHITEFLAG"] = true;
$defConsts["wxSTC_FOLDLEVELHEADERFLAG"] = true;
$defConsts["wxSTC_FOLDLEVELNUMBERMASK"] = true;
$defConsts["wxSTC_FOLDFLAG_LINEBEFORE_EXPANDED"] = true;
$defConsts["wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED"] = true;
$defConsts["wxSTC_FOLDFLAG_LINEAFTER_EXPANDED"] = true;
$defConsts["wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED"] = true;
$defConsts["wxSTC_FOLDFLAG_LEVELNUMBERS"] = true;
$defConsts["wxSTC_TIME_FOREVER"] = true;
$defConsts["wxSTC_WRAP_NONE"] = true;
$defConsts["wxSTC_WRAP_WORD"] = true;
$defConsts["wxSTC_WRAP_CHAR"] = true;
$defConsts["wxSTC_WRAPVISUALFLAG_NONE"] = true;
$defConsts["wxSTC_WRAPVISUALFLAG_END"] = true;
$defConsts["wxSTC_WRAPVISUALFLAG_START"] = true;
$defConsts["wxSTC_WRAPVISUALFLAGLOC_DEFAULT"] = true;
$defConsts["wxSTC_WRAPVISUALFLAGLOC_END_BY_TEXT"] = true;
$defConsts["wxSTC_WRAPVISUALFLAGLOC_START_BY_TEXT"] = true;
$defConsts["wxSTC_WRAPINDENT_FIXED"] = true;
$defConsts["wxSTC_WRAPINDENT_SAME"] = true;
$defConsts["wxSTC_WRAPINDENT_INDENT"] = true;
$defConsts["wxSTC_CACHE_NONE"] = true;
$defConsts["wxSTC_CACHE_CARET"] = true;
$defConsts["wxSTC_CACHE_PAGE"] = true;
$defConsts["wxSTC_CACHE_DOCUMENT"] = true;

// Control font anti-aliasing.
$defConsts["wxSTC_EFF_QUALITY_MASK"] = true;
$defConsts["wxSTC_EFF_QUALITY_DEFAULT"] = true;
$defConsts["wxSTC_EFF_QUALITY_NON_ANTIALIASED"] = true;
$defConsts["wxSTC_EFF_QUALITY_ANTIALIASED"] = true;
$defConsts["wxSTC_EFF_QUALITY_LCD_OPTIMIZED"] = true;
$defConsts["wxSTC_EDGE_NONE"] = true;
$defConsts["wxSTC_EDGE_LINE"] = true;
$defConsts["wxSTC_EDGE_BACKGROUND"] = true;
$defConsts["wxSTC_STATUS_OK"] = true;
$defConsts["wxSTC_STATUS_FAILURE"] = true;
$defConsts["wxSTC_STATUS_BADALLOC"] = true;
$defConsts["wxSTC_CURSORNORMAL"] = true;
$defConsts["wxSTC_CURSORWAIT"] = true;

// Constants for use with SetVisiblePolicy, similar to SetCaretPolicy.
$defConsts["wxSTC_VISIBLE_SLOP"] = true;
$defConsts["wxSTC_VISIBLE_STRICT"] = true;

// Caret policy, used by SetXCaretPolicy and SetYCaretPolicy.
// If CARET_SLOP is set, we can define a slop value: caretSlop.
// This value defines an unwanted zone (UZ) where the caret is... unwanted.
// This zone is defined as a number of pixels near the vertical margins,
// and as a number of lines near the horizontal margins.
// By keeping the caret away from the edges, it is seen within its context,
// so it is likely that the identifier that the caret is on can be completely seen,
// and that the current line is seen with some of the lines following it which are
// often dependent on that line.
$defConsts["wxSTC_CARET_SLOP"] = true;

// If CARET_STRICT is set, the policy is enforced... strictly.
// The caret is centred on the display if slop is not set,
// and cannot go in the UZ if slop is set.
$defConsts["wxSTC_CARET_STRICT"] = true;

// If CARET_JUMPS is set, the display is moved more energetically
// so the caret can move in the same direction longer before the policy is applied again.
$defConsts["wxSTC_CARET_JUMPS"] = true;

// If CARET_EVEN is not set, instead of having symmetrical UZs,
// the left and bottom UZs are extended up to right and top UZs respectively.
// This way, we favour the displaying of useful information: the begining of lines,
// where most code reside, and the lines after the caret, eg. the body of a function.
$defConsts["wxSTC_CARET_EVEN"] = true;
$defConsts["wxSTC_SEL_STREAM"] = true;
$defConsts["wxSTC_SEL_RECTANGLE"] = true;
$defConsts["wxSTC_SEL_LINES"] = true;
$defConsts["wxSTC_SEL_THIN"] = true;
$defConsts["wxSTC_ALPHA_TRANSPARENT"] = true;
$defConsts["wxSTC_ALPHA_OPAQUE"] = true;
$defConsts["wxSTC_ALPHA_NOALPHA"] = true;
$defConsts["wxSTC_CARETSTYLE_INVISIBLE"] = true;
$defConsts["wxSTC_CARETSTYLE_LINE"] = true;
$defConsts["wxSTC_CARETSTYLE_BLOCK"] = true;
$defConsts["wxSTC_ANNOTATION_HIDDEN"] = true;
$defConsts["wxSTC_ANNOTATION_STANDARD"] = true;
$defConsts["wxSTC_ANNOTATION_BOXED"] = true;
$defConsts["wxSTC_UNDO_MAY_COALESCE"] = true;
$defConsts["wxSTC_SCVS_NONE"] = true;
$defConsts["wxSTC_SCVS_RECTANGULARSELECTION"] = true;
$defConsts["wxSTC_SCVS_USERACCESSIBLE"] = true;

// Maximum value of keywordSet parameter of SetKeyWords.
$defConsts["wxSTC_KEYWORDSET_MAX"] = true;

// Notifications
// Type of modification and the action which caused the modification.
// These are defined as a bit mask to make it easy to specify which notifications are wanted.
// One bit is set from each of SC_MOD_* and SC_PERFORMED_*.
$defConsts["wxSTC_MOD_INSERTTEXT"] = true;
$defConsts["wxSTC_MOD_DELETETEXT"] = true;
$defConsts["wxSTC_MOD_CHANGESTYLE"] = true;
$defConsts["wxSTC_MOD_CHANGEFOLD"] = true;
$defConsts["wxSTC_PERFORMED_USER"] = true;
$defConsts["wxSTC_PERFORMED_UNDO"] = true;
$defConsts["wxSTC_PERFORMED_REDO"] = true;
$defConsts["wxSTC_MULTISTEPUNDOREDO"] = true;
$defConsts["wxSTC_LASTSTEPINUNDOREDO"] = true;
$defConsts["wxSTC_MOD_CHANGEMARKER"] = true;
$defConsts["wxSTC_MOD_BEFOREINSERT"] = true;
$defConsts["wxSTC_MOD_BEFOREDELETE"] = true;
$defConsts["wxSTC_MULTILINEUNDOREDO"] = true;
$defConsts["wxSTC_STARTACTION"] = true;
$defConsts["wxSTC_MOD_CHANGEINDICATOR"] = true;
$defConsts["wxSTC_MOD_CHANGELINESTATE"] = true;
$defConsts["wxSTC_MOD_CHANGEMARGIN"] = true;
$defConsts["wxSTC_MOD_CHANGEANNOTATION"] = true;
$defConsts["wxSTC_MOD_CONTAINER"] = true;
$defConsts["wxSTC_MODEVENTMASKALL"] = true;

// Symbolic key codes and modifier flags.
// ASCII and other printable characters below"] = true;.
// Extended keys above"] = true;.
$defConsts["wxSTC_KEY_DOWN"] = true;
$defConsts["wxSTC_KEY_UP"] = true;
$defConsts["wxSTC_KEY_LEFT"] = true;
$defConsts["wxSTC_KEY_RIGHT"] = true;
$defConsts["wxSTC_KEY_HOME"] = true;
$defConsts["wxSTC_KEY_END"] = true;
$defConsts["wxSTC_KEY_PRIOR"] = true;
$defConsts["wxSTC_KEY_NEXT"] = true;
$defConsts["wxSTC_KEY_DELETE"] = true;
$defConsts["wxSTC_KEY_INSERT"] = true;
$defConsts["wxSTC_KEY_ESCAPE"] = true;
$defConsts["wxSTC_KEY_BACK"] = true;
$defConsts["wxSTC_KEY_TAB"] = true;
$defConsts["wxSTC_KEY_RETURN"] = true;
$defConsts["wxSTC_KEY_ADD"] = true;
$defConsts["wxSTC_KEY_SUBTRACT"] = true;
$defConsts["wxSTC_KEY_DIVIDE"] = true;
$defConsts["wxSTC_KEY_WIN"] = true;
$defConsts["wxSTC_KEY_RWIN"] = true;
$defConsts["wxSTC_KEY_MENU"] = true;
$defConsts["wxSTC_SCMOD_NORM"] = true;
$defConsts["wxSTC_SCMOD_SHIFT"] = true;
$defConsts["wxSTC_SCMOD_CTRL"] = true;
$defConsts["wxSTC_SCMOD_ALT"] = true;
$defConsts["wxSTC_SCMOD_SUPER"] = true;

// For SciLexer.h
$defConsts["wxSTC_LEX_CONTAINER"] = true;
$defConsts["wxSTC_LEX_NULL"] = true;
$defConsts["wxSTC_LEX_PYTHON"] = true;
$defConsts["wxSTC_LEX_CPP"] = true;
$defConsts["wxSTC_LEX_HTML"] = true;
$defConsts["wxSTC_LEX_XML"] = true;
$defConsts["wxSTC_LEX_PERL"] = true;
$defConsts["wxSTC_LEX_SQL"] = true;
$defConsts["wxSTC_LEX_VB"] = true;
$defConsts["wxSTC_LEX_PROPERTIES"] = true;
$defConsts["wxSTC_LEX_ERRORLIST"] = true;
$defConsts["wxSTC_LEX_MAKEFILE"] = true;
$defConsts["wxSTC_LEX_BATCH"] = true;
$defConsts["wxSTC_LEX_XCODE"] = true;
$defConsts["wxSTC_LEX_LATEX"] = true;
$defConsts["wxSTC_LEX_LUA"] = true;
$defConsts["wxSTC_LEX_DIFF"] = true;
$defConsts["wxSTC_LEX_CONF"] = true;
$defConsts["wxSTC_LEX_PASCAL"] = true;
$defConsts["wxSTC_LEX_AVE"] = true;
$defConsts["wxSTC_LEX_ADA"] = true;
$defConsts["wxSTC_LEX_LISP"] = true;
$defConsts["wxSTC_LEX_RUBY"] = true;
$defConsts["wxSTC_LEX_EIFFEL"] = true;
$defConsts["wxSTC_LEX_EIFFELKW"] = true;
$defConsts["wxSTC_LEX_TCL"] = true;
$defConsts["wxSTC_LEX_NNCRONTAB"] = true;
$defConsts["wxSTC_LEX_BULLANT"] = true;
$defConsts["wxSTC_LEX_VBSCRIPT"] = true;
$defConsts["wxSTC_LEX_BAAN"] = true;
$defConsts["wxSTC_LEX_MATLAB"] = true;
$defConsts["wxSTC_LEX_SCRIPTOL"] = true;
$defConsts["wxSTC_LEX_ASM"] = true;
$defConsts["wxSTC_LEX_CPPNOCASE"] = true;
$defConsts["wxSTC_LEX_FORTRAN"] = true;
$defConsts["wxSTC_LEX_F77"] = true;
$defConsts["wxSTC_LEX_CSS"] = true;
$defConsts["wxSTC_LEX_POV"] = true;
$defConsts["wxSTC_LEX_LOUT"] = true;
$defConsts["wxSTC_LEX_ESCRIPT"] = true;
$defConsts["wxSTC_LEX_PS"] = true;
$defConsts["wxSTC_LEX_NSIS"] = true;
$defConsts["wxSTC_LEX_MMIXAL"] = true;
$defConsts["wxSTC_LEX_CLW"] = true;
$defConsts["wxSTC_LEX_CLWNOCASE"] = true;
$defConsts["wxSTC_LEX_LOT"] = true;
$defConsts["wxSTC_LEX_YAML"] = true;
$defConsts["wxSTC_LEX_TEX"] = true;
$defConsts["wxSTC_LEX_METAPOST"] = true;
$defConsts["wxSTC_LEX_POWERBASIC"] = true;
$defConsts["wxSTC_LEX_FORTH"] = true;
$defConsts["wxSTC_LEX_ERLANG"] = true;
$defConsts["wxSTC_LEX_OCTAVE"] = true;
$defConsts["wxSTC_LEX_MSSQL"] = true;
$defConsts["wxSTC_LEX_VERILOG"] = true;
$defConsts["wxSTC_LEX_KIX"] = true;
$defConsts["wxSTC_LEX_GUI4CLI"] = true;
$defConsts["wxSTC_LEX_SPECMAN"] = true;
$defConsts["wxSTC_LEX_AU3"] = true;
$defConsts["wxSTC_LEX_APDL"] = true;
$defConsts["wxSTC_LEX_BASH"] = true;
$defConsts["wxSTC_LEX_ASN1"] = true;
$defConsts["wxSTC_LEX_VHDL"] = true;
$defConsts["wxSTC_LEX_CAML"] = true;
$defConsts["wxSTC_LEX_BLITZBASIC"] = true;
$defConsts["wxSTC_LEX_PUREBASIC"] = true;
$defConsts["wxSTC_LEX_HASKELL"] = true;
$defConsts["wxSTC_LEX_PHPSCRIPT"] = true;
$defConsts["wxSTC_LEX_TADS3"] = true;
$defConsts["wxSTC_LEX_REBOL"] = true;
$defConsts["wxSTC_LEX_SMALLTALK"] = true;
$defConsts["wxSTC_LEX_FLAGSHIP"] = true;
$defConsts["wxSTC_LEX_CSOUND"] = true;
$defConsts["wxSTC_LEX_FREEBASIC"] = true;
$defConsts["wxSTC_LEX_INNOSETUP"] = true;
$defConsts["wxSTC_LEX_OPAL"] = true;
$defConsts["wxSTC_LEX_SPICE"] = true;
$defConsts["wxSTC_LEX_D"] = true;
$defConsts["wxSTC_LEX_CMAKE"] = true;
$defConsts["wxSTC_LEX_GAP"] = true;
$defConsts["wxSTC_LEX_PLM"] = true;
$defConsts["wxSTC_LEX_PROGRESS"] = true;
$defConsts["wxSTC_LEX_ABAQUS"] = true;
$defConsts["wxSTC_LEX_ASYMPTOTE"] = true;
$defConsts["wxSTC_LEX_R"] = true;
$defConsts["wxSTC_LEX_MAGIK"] = true;
$defConsts["wxSTC_LEX_POWERSHELL"] = true;
$defConsts["wxSTC_LEX_MYSQL"] = true;
$defConsts["wxSTC_LEX_PO"] = true;
$defConsts["wxSTC_LEX_TAL"] = true;
$defConsts["wxSTC_LEX_COBOL"] = true;
$defConsts["wxSTC_LEX_TACL"] = true;
$defConsts["wxSTC_LEX_SORCUS"] = true;
$defConsts["wxSTC_LEX_POWERPRO"] = true;
$defConsts["wxSTC_LEX_NIMROD"] = true;
$defConsts["wxSTC_LEX_SML"] = true;
$defConsts["wxSTC_LEX_MARKDOWN"] = true;

// When a lexer specifies its language as SCLEX_AUTOMATIC it receives a
// value assigned in sequence from SCLEX_AUTOMATIC+1.
$defConsts["wxSTC_LEX_AUTOMATIC"] = true;

// Lexical states for SCLEX_PYTHON
$defConsts["wxSTC_P_DEFAULT"] = true;
$defConsts["wxSTC_P_COMMENTLINE"] = true;
$defConsts["wxSTC_P_NUMBER"] = true;
$defConsts["wxSTC_P_STRING"] = true;
$defConsts["wxSTC_P_CHARACTER"] = true;
$defConsts["wxSTC_P_WORD"] = true;
$defConsts["wxSTC_P_TRIPLE"] = true;
$defConsts["wxSTC_P_TRIPLEDOUBLE"] = true;
$defConsts["wxSTC_P_CLASSNAME"] = true;
$defConsts["wxSTC_P_DEFNAME"] = true;
$defConsts["wxSTC_P_OPERATOR"] = true;
$defConsts["wxSTC_P_IDENTIFIER"] = true;
$defConsts["wxSTC_P_COMMENTBLOCK"] = true;
$defConsts["wxSTC_P_STRINGEOL"] = true;
$defConsts["wxSTC_P_WORD2"] = true;
$defConsts["wxSTC_P_DECORATOR"] = true;

// Lexical states for SCLEX_CPP
$defConsts["wxSTC_C_DEFAULT"] = true;
$defConsts["wxSTC_C_COMMENT"] = true;
$defConsts["wxSTC_C_COMMENTLINE"] = true;
$defConsts["wxSTC_C_COMMENTDOC"] = true;
$defConsts["wxSTC_C_NUMBER"] = true;
$defConsts["wxSTC_C_WORD"] = true;
$defConsts["wxSTC_C_STRING"] = true;
$defConsts["wxSTC_C_CHARACTER"] = true;
$defConsts["wxSTC_C_UUID"] = true;
$defConsts["wxSTC_C_PREPROCESSOR"] = true;
$defConsts["wxSTC_C_OPERATOR"] = true;
$defConsts["wxSTC_C_IDENTIFIER"] = true;
$defConsts["wxSTC_C_STRINGEOL"] = true;
$defConsts["wxSTC_C_VERBATIM"] = true;
$defConsts["wxSTC_C_REGEX"] = true;
$defConsts["wxSTC_C_COMMENTLINEDOC"] = true;
$defConsts["wxSTC_C_WORD2"] = true;
$defConsts["wxSTC_C_COMMENTDOCKEYWORD"] = true;
$defConsts["wxSTC_C_COMMENTDOCKEYWORDERROR"] = true;
$defConsts["wxSTC_C_GLOBALCLASS"] = true;

// Lexical states for SCLEX_D
$defConsts["wxSTC_D_DEFAULT"] = true;
$defConsts["wxSTC_D_COMMENT"] = true;
$defConsts["wxSTC_D_COMMENTLINE"] = true;
$defConsts["wxSTC_D_COMMENTDOC"] = true;
$defConsts["wxSTC_D_COMMENTNESTED"] = true;
$defConsts["wxSTC_D_NUMBER"] = true;
$defConsts["wxSTC_D_WORD"] = true;
$defConsts["wxSTC_D_WORD2"] = true;
$defConsts["wxSTC_D_WORD3"] = true;
$defConsts["wxSTC_D_TYPEDEF"] = true;
$defConsts["wxSTC_D_STRING"] = true;
$defConsts["wxSTC_D_STRINGEOL"] = true;
$defConsts["wxSTC_D_CHARACTER"] = true;
$defConsts["wxSTC_D_OPERATOR"] = true;
$defConsts["wxSTC_D_IDENTIFIER"] = true;
$defConsts["wxSTC_D_COMMENTLINEDOC"] = true;
$defConsts["wxSTC_D_COMMENTDOCKEYWORD"] = true;
$defConsts["wxSTC_D_COMMENTDOCKEYWORDERROR"] = true;
$defConsts["wxSTC_D_STRINGB"] = true;
$defConsts["wxSTC_D_STRINGR"] = true;
$defConsts["wxSTC_D_WORD5"] = true;
$defConsts["wxSTC_D_WORD6"] = true;
$defConsts["wxSTC_D_WORD7"] = true;

// Lexical states for SCLEX_TCL
$defConsts["wxSTC_TCL_DEFAULT"] = true;
$defConsts["wxSTC_TCL_COMMENT"] = true;
$defConsts["wxSTC_TCL_COMMENTLINE"] = true;
$defConsts["wxSTC_TCL_NUMBER"] = true;
$defConsts["wxSTC_TCL_WORD_IN_QUOTE"] = true;
$defConsts["wxSTC_TCL_IN_QUOTE"] = true;
$defConsts["wxSTC_TCL_OPERATOR"] = true;
$defConsts["wxSTC_TCL_IDENTIFIER"] = true;
$defConsts["wxSTC_TCL_SUBSTITUTION"] = true;
$defConsts["wxSTC_TCL_SUB_BRACE"] = true;
$defConsts["wxSTC_TCL_MODIFIER"] = true;
$defConsts["wxSTC_TCL_EXPAND"] = true;
$defConsts["wxSTC_TCL_WORD"] = true;
$defConsts["wxSTC_TCL_WORD2"] = true;
$defConsts["wxSTC_TCL_WORD3"] = true;
$defConsts["wxSTC_TCL_WORD4"] = true;
$defConsts["wxSTC_TCL_WORD5"] = true;
$defConsts["wxSTC_TCL_WORD6"] = true;
$defConsts["wxSTC_TCL_WORD7"] = true;
$defConsts["wxSTC_TCL_WORD8"] = true;
$defConsts["wxSTC_TCL_COMMENT_BOX"] = true;
$defConsts["wxSTC_TCL_BLOCK_COMMENT"] = true;

// Lexical states for SCLEX_HTML, SCLEX_XML
$defConsts["wxSTC_H_DEFAULT"] = true;
$defConsts["wxSTC_H_TAG"] = true;
$defConsts["wxSTC_H_TAGUNKNOWN"] = true;
$defConsts["wxSTC_H_ATTRIBUTE"] = true;
$defConsts["wxSTC_H_ATTRIBUTEUNKNOWN"] = true;
$defConsts["wxSTC_H_NUMBER"] = true;
$defConsts["wxSTC_H_DOUBLESTRING"] = true;
$defConsts["wxSTC_H_SINGLESTRING"] = true;
$defConsts["wxSTC_H_OTHER"] = true;
$defConsts["wxSTC_H_COMMENT"] = true;
$defConsts["wxSTC_H_ENTITY"] = true;

// XML and ASP
$defConsts["wxSTC_H_TAGEND"] = true;
$defConsts["wxSTC_H_XMLSTART"] = true;
$defConsts["wxSTC_H_XMLEND"] = true;
$defConsts["wxSTC_H_SCRIPT"] = true;
$defConsts["wxSTC_H_ASP"] = true;
$defConsts["wxSTC_H_ASPAT"] = true;
$defConsts["wxSTC_H_CDATA"] = true;
$defConsts["wxSTC_H_QUESTION"] = true;

// More HTML
$defConsts["wxSTC_H_VALUE"] = true;

// X-Code
$defConsts["wxSTC_H_XCCOMMENT"] = true;

// SGML
$defConsts["wxSTC_H_SGML_DEFAULT"] = true;
$defConsts["wxSTC_H_SGML_COMMAND"] = true;
$defConsts["wxSTC_H_SGML_1ST_PARAM"] = true;
$defConsts["wxSTC_H_SGML_DOUBLESTRING"] = true;
$defConsts["wxSTC_H_SGML_SIMPLESTRING"] = true;
$defConsts["wxSTC_H_SGML_ERROR"] = true;
$defConsts["wxSTC_H_SGML_SPECIAL"] = true;
$defConsts["wxSTC_H_SGML_ENTITY"] = true;
$defConsts["wxSTC_H_SGML_COMMENT"] = true;
$defConsts["wxSTC_H_SGML_1ST_PARAM_COMMENT"] = true;
$defConsts["wxSTC_H_SGML_BLOCK_DEFAULT"] = true;

// Embedded Javascript
$defConsts["wxSTC_HJ_START"] = true;
$defConsts["wxSTC_HJ_DEFAULT"] = true;
$defConsts["wxSTC_HJ_COMMENT"] = true;
$defConsts["wxSTC_HJ_COMMENTLINE"] = true;
$defConsts["wxSTC_HJ_COMMENTDOC"] = true;
$defConsts["wxSTC_HJ_NUMBER"] = true;
$defConsts["wxSTC_HJ_WORD"] = true;
$defConsts["wxSTC_HJ_KEYWORD"] = true;
$defConsts["wxSTC_HJ_DOUBLESTRING"] = true;
$defConsts["wxSTC_HJ_SINGLESTRING"] = true;
$defConsts["wxSTC_HJ_SYMBOLS"] = true;
$defConsts["wxSTC_HJ_STRINGEOL"] = true;
$defConsts["wxSTC_HJ_REGEX"] = true;

// ASP Javascript
$defConsts["wxSTC_HJA_START"] = true;
$defConsts["wxSTC_HJA_DEFAULT"] = true;
$defConsts["wxSTC_HJA_COMMENT"] = true;
$defConsts["wxSTC_HJA_COMMENTLINE"] = true;
$defConsts["wxSTC_HJA_COMMENTDOC"] = true;
$defConsts["wxSTC_HJA_NUMBER"] = true;
$defConsts["wxSTC_HJA_WORD"] = true;
$defConsts["wxSTC_HJA_KEYWORD"] = true;
$defConsts["wxSTC_HJA_DOUBLESTRING"] = true;
$defConsts["wxSTC_HJA_SINGLESTRING"] = true;
$defConsts["wxSTC_HJA_SYMBOLS"] = true;
$defConsts["wxSTC_HJA_STRINGEOL"] = true;
$defConsts["wxSTC_HJA_REGEX"] = true;

// Embedded VBScript
$defConsts["wxSTC_HB_START"] = true;
$defConsts["wxSTC_HB_DEFAULT"] = true;
$defConsts["wxSTC_HB_COMMENTLINE"] = true;
$defConsts["wxSTC_HB_NUMBER"] = true;
$defConsts["wxSTC_HB_WORD"] = true;
$defConsts["wxSTC_HB_STRING"] = true;
$defConsts["wxSTC_HB_IDENTIFIER"] = true;
$defConsts["wxSTC_HB_STRINGEOL"] = true;

// ASP VBScript
$defConsts["wxSTC_HBA_START"] = true;
$defConsts["wxSTC_HBA_DEFAULT"] = true;
$defConsts["wxSTC_HBA_COMMENTLINE"] = true;
$defConsts["wxSTC_HBA_NUMBER"] = true;
$defConsts["wxSTC_HBA_WORD"] = true;
$defConsts["wxSTC_HBA_STRING"] = true;
$defConsts["wxSTC_HBA_IDENTIFIER"] = true;
$defConsts["wxSTC_HBA_STRINGEOL"] = true;

// Embedded Python
$defConsts["wxSTC_HP_START"] = true;
$defConsts["wxSTC_HP_DEFAULT"] = true;
$defConsts["wxSTC_HP_COMMENTLINE"] = true;
$defConsts["wxSTC_HP_NUMBER"] = true;
$defConsts["wxSTC_HP_STRING"] = true;
$defConsts["wxSTC_HP_CHARACTER"] = true;
$defConsts["wxSTC_HP_WORD"] = true;
$defConsts["wxSTC_HP_TRIPLE"] = true;
$defConsts["wxSTC_HP_TRIPLEDOUBLE"] = true;
$defConsts["wxSTC_HP_CLASSNAME"] = true;
$defConsts["wxSTC_HP_DEFNAME"] = true;
$defConsts["wxSTC_HP_OPERATOR"] = true;
$defConsts["wxSTC_HP_IDENTIFIER"] = true;

// PHP
$defConsts["wxSTC_HPHP_COMPLEX_VARIABLE"] = true;

// ASP Python
$defConsts["wxSTC_HPA_START"] = true;
$defConsts["wxSTC_HPA_DEFAULT"] = true;
$defConsts["wxSTC_HPA_COMMENTLINE"] = true;
$defConsts["wxSTC_HPA_NUMBER"] = true;
$defConsts["wxSTC_HPA_STRING"] = true;
$defConsts["wxSTC_HPA_CHARACTER"] = true;
$defConsts["wxSTC_HPA_WORD"] = true;
$defConsts["wxSTC_HPA_TRIPLE"] = true;
$defConsts["wxSTC_HPA_TRIPLEDOUBLE"] = true;
$defConsts["wxSTC_HPA_CLASSNAME"] = true;
$defConsts["wxSTC_HPA_DEFNAME"] = true;
$defConsts["wxSTC_HPA_OPERATOR"] = true;
$defConsts["wxSTC_HPA_IDENTIFIER"] = true;

// PHP
$defConsts["wxSTC_HPHP_DEFAULT"] = true;
$defConsts["wxSTC_HPHP_HSTRING"] = true;
$defConsts["wxSTC_HPHP_SIMPLESTRING"] = true;
$defConsts["wxSTC_HPHP_WORD"] = true;
$defConsts["wxSTC_HPHP_NUMBER"] = true;
$defConsts["wxSTC_HPHP_VARIABLE"] = true;
$defConsts["wxSTC_HPHP_COMMENT"] = true;
$defConsts["wxSTC_HPHP_COMMENTLINE"] = true;
$defConsts["wxSTC_HPHP_HSTRING_VARIABLE"] = true;
$defConsts["wxSTC_HPHP_OPERATOR"] = true;

// Lexical states for SCLEX_PERL
$defConsts["wxSTC_PL_DEFAULT"] = true;
$defConsts["wxSTC_PL_ERROR"] = true;
$defConsts["wxSTC_PL_COMMENTLINE"] = true;
$defConsts["wxSTC_PL_POD"] = true;
$defConsts["wxSTC_PL_NUMBER"] = true;
$defConsts["wxSTC_PL_WORD"] = true;
$defConsts["wxSTC_PL_STRING"] = true;
$defConsts["wxSTC_PL_CHARACTER"] = true;
$defConsts["wxSTC_PL_PUNCTUATION"] = true;
$defConsts["wxSTC_PL_PREPROCESSOR"] = true;
$defConsts["wxSTC_PL_OPERATOR"] = true;
$defConsts["wxSTC_PL_IDENTIFIER"] = true;
$defConsts["wxSTC_PL_SCALAR"] = true;
$defConsts["wxSTC_PL_ARRAY"] = true;
$defConsts["wxSTC_PL_HASH"] = true;
$defConsts["wxSTC_PL_SYMBOLTABLE"] = true;
$defConsts["wxSTC_PL_VARIABLE_INDEXER"] = true;
$defConsts["wxSTC_PL_REGEX"] = true;
$defConsts["wxSTC_PL_REGSUBST"] = true;
$defConsts["wxSTC_PL_LONGQUOTE"] = true;
$defConsts["wxSTC_PL_BACKTICKS"] = true;
$defConsts["wxSTC_PL_DATASECTION"] = true;
$defConsts["wxSTC_PL_HERE_DELIM"] = true;
$defConsts["wxSTC_PL_HERE_Q"] = true;
$defConsts["wxSTC_PL_HERE_QQ"] = true;
$defConsts["wxSTC_PL_HERE_QX"] = true;
$defConsts["wxSTC_PL_STRING_Q"] = true;
$defConsts["wxSTC_PL_STRING_QQ"] = true;
$defConsts["wxSTC_PL_STRING_QX"] = true;
$defConsts["wxSTC_PL_STRING_QR"] = true;
$defConsts["wxSTC_PL_STRING_QW"] = true;
$defConsts["wxSTC_PL_POD_VERB"] = true;
$defConsts["wxSTC_PL_SUB_PROTOTYPE"] = true;
$defConsts["wxSTC_PL_FORMAT_IDENT"] = true;
$defConsts["wxSTC_PL_FORMAT"] = true;

// Lexical states for SCLEX_RUBY
$defConsts["wxSTC_RB_DEFAULT"] = true;
$defConsts["wxSTC_RB_ERROR"] = true;
$defConsts["wxSTC_RB_COMMENTLINE"] = true;
$defConsts["wxSTC_RB_POD"] = true;
$defConsts["wxSTC_RB_NUMBER"] = true;
$defConsts["wxSTC_RB_WORD"] = true;
$defConsts["wxSTC_RB_STRING"] = true;
$defConsts["wxSTC_RB_CHARACTER"] = true;
$defConsts["wxSTC_RB_CLASSNAME"] = true;
$defConsts["wxSTC_RB_DEFNAME"] = true;
$defConsts["wxSTC_RB_OPERATOR"] = true;
$defConsts["wxSTC_RB_IDENTIFIER"] = true;
$defConsts["wxSTC_RB_REGEX"] = true;
$defConsts["wxSTC_RB_GLOBAL"] = true;
$defConsts["wxSTC_RB_SYMBOL"] = true;
$defConsts["wxSTC_RB_MODULE_NAME"] = true;
$defConsts["wxSTC_RB_INSTANCE_VAR"] = true;
$defConsts["wxSTC_RB_CLASS_VAR"] = true;
$defConsts["wxSTC_RB_BACKTICKS"] = true;
$defConsts["wxSTC_RB_DATASECTION"] = true;
$defConsts["wxSTC_RB_HERE_DELIM"] = true;
$defConsts["wxSTC_RB_HERE_Q"] = true;
$defConsts["wxSTC_RB_HERE_QQ"] = true;
$defConsts["wxSTC_RB_HERE_QX"] = true;
$defConsts["wxSTC_RB_STRING_Q"] = true;
$defConsts["wxSTC_RB_STRING_QQ"] = true;
$defConsts["wxSTC_RB_STRING_QX"] = true;
$defConsts["wxSTC_RB_STRING_QR"] = true;
$defConsts["wxSTC_RB_STRING_QW"] = true;
$defConsts["wxSTC_RB_WORD_DEMOTED"] = true;
$defConsts["wxSTC_RB_STDIN"] = true;
$defConsts["wxSTC_RB_STDOUT"] = true;
$defConsts["wxSTC_RB_STDERR"] = true;
$defConsts["wxSTC_RB_UPPER_BOUND"] = true;

// Lexical states for SCLEX_VB, SCLEX_VBSCRIPT, SCLEX_POWERBASIC
$defConsts["wxSTC_B_DEFAULT"] = true;
$defConsts["wxSTC_B_COMMENT"] = true;
$defConsts["wxSTC_B_NUMBER"] = true;
$defConsts["wxSTC_B_KEYWORD"] = true;
$defConsts["wxSTC_B_STRING"] = true;
$defConsts["wxSTC_B_PREPROCESSOR"] = true;
$defConsts["wxSTC_B_OPERATOR"] = true;
$defConsts["wxSTC_B_IDENTIFIER"] = true;
$defConsts["wxSTC_B_DATE"] = true;
$defConsts["wxSTC_B_STRINGEOL"] = true;
$defConsts["wxSTC_B_KEYWORD2"] = true;
$defConsts["wxSTC_B_KEYWORD3"] = true;
$defConsts["wxSTC_B_KEYWORD4"] = true;
$defConsts["wxSTC_B_CONSTANT"] = true;
$defConsts["wxSTC_B_ASM"] = true;
$defConsts["wxSTC_B_LABEL"] = true;
$defConsts["wxSTC_B_ERROR"] = true;
$defConsts["wxSTC_B_HEXNUMBER"] = true;
$defConsts["wxSTC_B_BINNUMBER"] = true;

// Lexical states for SCLEX_PROPERTIES
$defConsts["wxSTC_PROPS_DEFAULT"] = true;
$defConsts["wxSTC_PROPS_COMMENT"] = true;
$defConsts["wxSTC_PROPS_SECTION"] = true;
$defConsts["wxSTC_PROPS_ASSIGNMENT"] = true;
$defConsts["wxSTC_PROPS_DEFVAL"] = true;
$defConsts["wxSTC_PROPS_KEY"] = true;

// Lexical states for SCLEX_LATEX
$defConsts["wxSTC_L_DEFAULT"] = true;
$defConsts["wxSTC_L_COMMAND"] = true;
$defConsts["wxSTC_L_TAG"] = true;
$defConsts["wxSTC_L_MATH"] = true;
$defConsts["wxSTC_L_COMMENT"] = true;

// Lexical states for SCLEX_LUA
$defConsts["wxSTC_LUA_DEFAULT"] = true;
$defConsts["wxSTC_LUA_COMMENT"] = true;
$defConsts["wxSTC_LUA_COMMENTLINE"] = true;
$defConsts["wxSTC_LUA_COMMENTDOC"] = true;
$defConsts["wxSTC_LUA_NUMBER"] = true;
$defConsts["wxSTC_LUA_WORD"] = true;
$defConsts["wxSTC_LUA_STRING"] = true;
$defConsts["wxSTC_LUA_CHARACTER"] = true;
$defConsts["wxSTC_LUA_LITERALSTRING"] = true;
$defConsts["wxSTC_LUA_PREPROCESSOR"] = true;
$defConsts["wxSTC_LUA_OPERATOR"] = true;
$defConsts["wxSTC_LUA_IDENTIFIER"] = true;
$defConsts["wxSTC_LUA_STRINGEOL"] = true;
$defConsts["wxSTC_LUA_WORD2"] = true;
$defConsts["wxSTC_LUA_WORD3"] = true;
$defConsts["wxSTC_LUA_WORD4"] = true;
$defConsts["wxSTC_LUA_WORD5"] = true;
$defConsts["wxSTC_LUA_WORD6"] = true;
$defConsts["wxSTC_LUA_WORD7"] = true;
$defConsts["wxSTC_LUA_WORD8"] = true;

// Lexical states for SCLEX_ERRORLIST
$defConsts["wxSTC_ERR_DEFAULT"] = true;
$defConsts["wxSTC_ERR_PYTHON"] = true;
$defConsts["wxSTC_ERR_GCC"] = true;
$defConsts["wxSTC_ERR_MS"] = true;
$defConsts["wxSTC_ERR_CMD"] = true;
$defConsts["wxSTC_ERR_BORLAND"] = true;
$defConsts["wxSTC_ERR_PERL"] = true;
$defConsts["wxSTC_ERR_NET"] = true;
$defConsts["wxSTC_ERR_LUA"] = true;
$defConsts["wxSTC_ERR_CTAG"] = true;
$defConsts["wxSTC_ERR_DIFF_CHANGED"] = true;
$defConsts["wxSTC_ERR_DIFF_ADDITION"] = true;
$defConsts["wxSTC_ERR_DIFF_DELETION"] = true;
$defConsts["wxSTC_ERR_DIFF_MESSAGE"] = true;
$defConsts["wxSTC_ERR_PHP"] = true;
$defConsts["wxSTC_ERR_ELF"] = true;
$defConsts["wxSTC_ERR_IFC"] = true;
$defConsts["wxSTC_ERR_IFORT"] = true;
$defConsts["wxSTC_ERR_ABSF"] = true;
$defConsts["wxSTC_ERR_TIDY"] = true;
$defConsts["wxSTC_ERR_JAVA_STACK"] = true;
$defConsts["wxSTC_ERR_VALUE"] = true;

// Lexical states for SCLEX_BATCH
$defConsts["wxSTC_BAT_DEFAULT"] = true;
$defConsts["wxSTC_BAT_COMMENT"] = true;
$defConsts["wxSTC_BAT_WORD"] = true;
$defConsts["wxSTC_BAT_LABEL"] = true;
$defConsts["wxSTC_BAT_HIDE"] = true;
$defConsts["wxSTC_BAT_COMMAND"] = true;
$defConsts["wxSTC_BAT_IDENTIFIER"] = true;
$defConsts["wxSTC_BAT_OPERATOR"] = true;

// Lexical states for SCLEX_MAKEFILE
$defConsts["wxSTC_MAKE_DEFAULT"] = true;
$defConsts["wxSTC_MAKE_COMMENT"] = true;
$defConsts["wxSTC_MAKE_PREPROCESSOR"] = true;
$defConsts["wxSTC_MAKE_IDENTIFIER"] = true;
$defConsts["wxSTC_MAKE_OPERATOR"] = true;
$defConsts["wxSTC_MAKE_TARGET"] = true;
$defConsts["wxSTC_MAKE_IDEOL"] = true;

// Lexical states for SCLEX_DIFF
$defConsts["wxSTC_DIFF_DEFAULT"] = true;
$defConsts["wxSTC_DIFF_COMMENT"] = true;
$defConsts["wxSTC_DIFF_COMMAND"] = true;
$defConsts["wxSTC_DIFF_HEADER"] = true;
$defConsts["wxSTC_DIFF_POSITION"] = true;
$defConsts["wxSTC_DIFF_DELETED"] = true;
$defConsts["wxSTC_DIFF_ADDED"] = true;
$defConsts["wxSTC_DIFF_CHANGED"] = true;

// Lexical states for SCLEX_CONF (Apache Configuration Files Lexer)
$defConsts["wxSTC_CONF_DEFAULT"] = true;
$defConsts["wxSTC_CONF_COMMENT"] = true;
$defConsts["wxSTC_CONF_NUMBER"] = true;
$defConsts["wxSTC_CONF_IDENTIFIER"] = true;
$defConsts["wxSTC_CONF_EXTENSION"] = true;
$defConsts["wxSTC_CONF_PARAMETER"] = true;
$defConsts["wxSTC_CONF_STRING"] = true;
$defConsts["wxSTC_CONF_OPERATOR"] = true;
$defConsts["wxSTC_CONF_IP"] = true;
$defConsts["wxSTC_CONF_DIRECTIVE"] = true;

// Lexical states for SCLEX_AVE, Avenue
$defConsts["wxSTC_AVE_DEFAULT"] = true;
$defConsts["wxSTC_AVE_COMMENT"] = true;
$defConsts["wxSTC_AVE_NUMBER"] = true;
$defConsts["wxSTC_AVE_WORD"] = true;
$defConsts["wxSTC_AVE_STRING"] = true;
$defConsts["wxSTC_AVE_ENUM"] = true;
$defConsts["wxSTC_AVE_STRINGEOL"] = true;
$defConsts["wxSTC_AVE_IDENTIFIER"] = true;
$defConsts["wxSTC_AVE_OPERATOR"] = true;
$defConsts["wxSTC_AVE_WORD1"] = true;
$defConsts["wxSTC_AVE_WORD2"] = true;
$defConsts["wxSTC_AVE_WORD3"] = true;
$defConsts["wxSTC_AVE_WORD4"] = true;
$defConsts["wxSTC_AVE_WORD5"] = true;
$defConsts["wxSTC_AVE_WORD6"] = true;

// Lexical states for SCLEX_ADA
$defConsts["wxSTC_ADA_DEFAULT"] = true;
$defConsts["wxSTC_ADA_WORD"] = true;
$defConsts["wxSTC_ADA_IDENTIFIER"] = true;
$defConsts["wxSTC_ADA_NUMBER"] = true;
$defConsts["wxSTC_ADA_DELIMITER"] = true;
$defConsts["wxSTC_ADA_CHARACTER"] = true;
$defConsts["wxSTC_ADA_CHARACTEREOL"] = true;
$defConsts["wxSTC_ADA_STRING"] = true;
$defConsts["wxSTC_ADA_STRINGEOL"] = true;
$defConsts["wxSTC_ADA_LABEL"] = true;
$defConsts["wxSTC_ADA_COMMENTLINE"] = true;
$defConsts["wxSTC_ADA_ILLEGAL"] = true;

// Lexical states for SCLEX_BAAN
$defConsts["wxSTC_BAAN_DEFAULT"] = true;
$defConsts["wxSTC_BAAN_COMMENT"] = true;
$defConsts["wxSTC_BAAN_COMMENTDOC"] = true;
$defConsts["wxSTC_BAAN_NUMBER"] = true;
$defConsts["wxSTC_BAAN_WORD"] = true;
$defConsts["wxSTC_BAAN_STRING"] = true;
$defConsts["wxSTC_BAAN_PREPROCESSOR"] = true;
$defConsts["wxSTC_BAAN_OPERATOR"] = true;
$defConsts["wxSTC_BAAN_IDENTIFIER"] = true;
$defConsts["wxSTC_BAAN_STRINGEOL"] = true;
$defConsts["wxSTC_BAAN_WORD2"] = true;

// Lexical states for SCLEX_LISP
$defConsts["wxSTC_LISP_DEFAULT"] = true;
$defConsts["wxSTC_LISP_COMMENT"] = true;
$defConsts["wxSTC_LISP_NUMBER"] = true;
$defConsts["wxSTC_LISP_KEYWORD"] = true;
$defConsts["wxSTC_LISP_KEYWORD_KW"] = true;
$defConsts["wxSTC_LISP_SYMBOL"] = true;
$defConsts["wxSTC_LISP_STRING"] = true;
$defConsts["wxSTC_LISP_STRINGEOL"] = true;
$defConsts["wxSTC_LISP_IDENTIFIER"] = true;
$defConsts["wxSTC_LISP_OPERATOR"] = true;
$defConsts["wxSTC_LISP_SPECIAL"] = true;
$defConsts["wxSTC_LISP_MULTI_COMMENT"] = true;

// Lexical states for SCLEX_EIFFEL and SCLEX_EIFFELKW
$defConsts["wxSTC_EIFFEL_DEFAULT"] = true;
$defConsts["wxSTC_EIFFEL_COMMENTLINE"] = true;
$defConsts["wxSTC_EIFFEL_NUMBER"] = true;
$defConsts["wxSTC_EIFFEL_WORD"] = true;
$defConsts["wxSTC_EIFFEL_STRING"] = true;
$defConsts["wxSTC_EIFFEL_CHARACTER"] = true;
$defConsts["wxSTC_EIFFEL_OPERATOR"] = true;
$defConsts["wxSTC_EIFFEL_IDENTIFIER"] = true;
$defConsts["wxSTC_EIFFEL_STRINGEOL"] = true;

// Lexical states for SCLEX_NNCRONTAB (nnCron crontab Lexer)
$defConsts["wxSTC_NNCRONTAB_DEFAULT"] = true;
$defConsts["wxSTC_NNCRONTAB_COMMENT"] = true;
$defConsts["wxSTC_NNCRONTAB_TASK"] = true;
$defConsts["wxSTC_NNCRONTAB_SECTION"] = true;
$defConsts["wxSTC_NNCRONTAB_KEYWORD"] = true;
$defConsts["wxSTC_NNCRONTAB_MODIFIER"] = true;
$defConsts["wxSTC_NNCRONTAB_ASTERISK"] = true;
$defConsts["wxSTC_NNCRONTAB_NUMBER"] = true;
$defConsts["wxSTC_NNCRONTAB_STRING"] = true;
$defConsts["wxSTC_NNCRONTAB_ENVIRONMENT"] = true;
$defConsts["wxSTC_NNCRONTAB_IDENTIFIER"] = true;

// Lexical states for SCLEX_FORTH (Forth Lexer)
$defConsts["wxSTC_FORTH_DEFAULT"] = true;
$defConsts["wxSTC_FORTH_COMMENT"] = true;
$defConsts["wxSTC_FORTH_COMMENT_ML"] = true;
$defConsts["wxSTC_FORTH_IDENTIFIER"] = true;
$defConsts["wxSTC_FORTH_CONTROL"] = true;
$defConsts["wxSTC_FORTH_KEYWORD"] = true;
$defConsts["wxSTC_FORTH_DEFWORD"] = true;
$defConsts["wxSTC_FORTH_PREWORD1"] = true;
$defConsts["wxSTC_FORTH_PREWORD2"] = true;
$defConsts["wxSTC_FORTH_NUMBER"] = true;
$defConsts["wxSTC_FORTH_STRING"] = true;
$defConsts["wxSTC_FORTH_LOCALE"] = true;

// Lexical states for SCLEX_MATLAB
$defConsts["wxSTC_MATLAB_DEFAULT"] = true;
$defConsts["wxSTC_MATLAB_COMMENT"] = true;
$defConsts["wxSTC_MATLAB_COMMAND"] = true;
$defConsts["wxSTC_MATLAB_NUMBER"] = true;
$defConsts["wxSTC_MATLAB_KEYWORD"] = true;

// single quoted string
$defConsts["wxSTC_MATLAB_STRING"] = true;
$defConsts["wxSTC_MATLAB_OPERATOR"] = true;
$defConsts["wxSTC_MATLAB_IDENTIFIER"] = true;
$defConsts["wxSTC_MATLAB_DOUBLEQUOTESTRING"] = true;

// Lexical states for SCLEX_SCRIPTOL
$defConsts["wxSTC_SCRIPTOL_DEFAULT"] = true;
$defConsts["wxSTC_SCRIPTOL_WHITE"] = true;
$defConsts["wxSTC_SCRIPTOL_COMMENTLINE"] = true;
$defConsts["wxSTC_SCRIPTOL_PERSISTENT"] = true;
$defConsts["wxSTC_SCRIPTOL_CSTYLE"] = true;
$defConsts["wxSTC_SCRIPTOL_COMMENTBLOCK"] = true;
$defConsts["wxSTC_SCRIPTOL_NUMBER"] = true;
$defConsts["wxSTC_SCRIPTOL_STRING"] = true;
$defConsts["wxSTC_SCRIPTOL_CHARACTER"] = true;
$defConsts["wxSTC_SCRIPTOL_STRINGEOL"] = true;
$defConsts["wxSTC_SCRIPTOL_KEYWORD"] = true;
$defConsts["wxSTC_SCRIPTOL_OPERATOR"] = true;
$defConsts["wxSTC_SCRIPTOL_IDENTIFIER"] = true;
$defConsts["wxSTC_SCRIPTOL_TRIPLE"] = true;
$defConsts["wxSTC_SCRIPTOL_CLASSNAME"] = true;
$defConsts["wxSTC_SCRIPTOL_PREPROCESSOR"] = true;

// Lexical states for SCLEX_ASM
$defConsts["wxSTC_ASM_DEFAULT"] = true;
$defConsts["wxSTC_ASM_COMMENT"] = true;
$defConsts["wxSTC_ASM_NUMBER"] = true;
$defConsts["wxSTC_ASM_STRING"] = true;
$defConsts["wxSTC_ASM_OPERATOR"] = true;
$defConsts["wxSTC_ASM_IDENTIFIER"] = true;
$defConsts["wxSTC_ASM_CPUINSTRUCTION"] = true;
$defConsts["wxSTC_ASM_MATHINSTRUCTION"] = true;
$defConsts["wxSTC_ASM_REGISTER"] = true;
$defConsts["wxSTC_ASM_DIRECTIVE"] = true;
$defConsts["wxSTC_ASM_DIRECTIVEOPERAND"] = true;
$defConsts["wxSTC_ASM_COMMENTBLOCK"] = true;
$defConsts["wxSTC_ASM_CHARACTER"] = true;
$defConsts["wxSTC_ASM_STRINGEOL"] = true;
$defConsts["wxSTC_ASM_EXTINSTRUCTION"] = true;

// Lexical states for SCLEX_FORTRAN
$defConsts["wxSTC_F_DEFAULT"] = true;
$defConsts["wxSTC_F_COMMENT"] = true;
$defConsts["wxSTC_F_NUMBER"] = true;
$defConsts["wxSTC_F_STRING1"] = true;
$defConsts["wxSTC_F_STRING2"] = true;
$defConsts["wxSTC_F_STRINGEOL"] = true;
$defConsts["wxSTC_F_OPERATOR"] = true;
$defConsts["wxSTC_F_IDENTIFIER"] = true;
$defConsts["wxSTC_F_WORD"] = true;
$defConsts["wxSTC_F_WORD2"] = true;
$defConsts["wxSTC_F_WORD3"] = true;
$defConsts["wxSTC_F_PREPROCESSOR"] = true;
$defConsts["wxSTC_F_OPERATOR2"] = true;
$defConsts["wxSTC_F_LABEL"] = true;
$defConsts["wxSTC_F_CONTINUATION"] = true;

// Lexical states for SCLEX_CSS
$defConsts["wxSTC_CSS_DEFAULT"] = true;
$defConsts["wxSTC_CSS_TAG"] = true;
$defConsts["wxSTC_CSS_CLASS"] = true;
$defConsts["wxSTC_CSS_PSEUDOCLASS"] = true;
$defConsts["wxSTC_CSS_UNKNOWN_PSEUDOCLASS"] = true;
$defConsts["wxSTC_CSS_OPERATOR"] = true;
$defConsts["wxSTC_CSS_IDENTIFIER"] = true;
$defConsts["wxSTC_CSS_UNKNOWN_IDENTIFIER"] = true;
$defConsts["wxSTC_CSS_VALUE"] = true;
$defConsts["wxSTC_CSS_COMMENT"] = true;
$defConsts["wxSTC_CSS_ID"] = true;
$defConsts["wxSTC_CSS_IMPORTANT"] = true;
$defConsts["wxSTC_CSS_DIRECTIVE"] = true;
$defConsts["wxSTC_CSS_DOUBLESTRING"] = true;
$defConsts["wxSTC_CSS_SINGLESTRING"] = true;
$defConsts["wxSTC_CSS_IDENTIFIER2"] = true;
$defConsts["wxSTC_CSS_ATTRIBUTE"] = true;
$defConsts["wxSTC_CSS_IDENTIFIER3"] = true;
$defConsts["wxSTC_CSS_PSEUDOELEMENT"] = true;
$defConsts["wxSTC_CSS_EXTENDED_IDENTIFIER"] = true;
$defConsts["wxSTC_CSS_EXTENDED_PSEUDOCLASS"] = true;
$defConsts["wxSTC_CSS_EXTENDED_PSEUDOELEMENT"] = true;

// Lexical states for SCLEX_POV
$defConsts["wxSTC_POV_DEFAULT"] = true;
$defConsts["wxSTC_POV_COMMENT"] = true;
$defConsts["wxSTC_POV_COMMENTLINE"] = true;
$defConsts["wxSTC_POV_NUMBER"] = true;
$defConsts["wxSTC_POV_OPERATOR"] = true;
$defConsts["wxSTC_POV_IDENTIFIER"] = true;
$defConsts["wxSTC_POV_STRING"] = true;
$defConsts["wxSTC_POV_STRINGEOL"] = true;
$defConsts["wxSTC_POV_DIRECTIVE"] = true;
$defConsts["wxSTC_POV_BADDIRECTIVE"] = true;
$defConsts["wxSTC_POV_WORD2"] = true;
$defConsts["wxSTC_POV_WORD3"] = true;
$defConsts["wxSTC_POV_WORD4"] = true;
$defConsts["wxSTC_POV_WORD5"] = true;
$defConsts["wxSTC_POV_WORD6"] = true;
$defConsts["wxSTC_POV_WORD7"] = true;
$defConsts["wxSTC_POV_WORD8"] = true;

// Lexical states for SCLEX_LOUT
$defConsts["wxSTC_LOUT_DEFAULT"] = true;
$defConsts["wxSTC_LOUT_COMMENT"] = true;
$defConsts["wxSTC_LOUT_NUMBER"] = true;
$defConsts["wxSTC_LOUT_WORD"] = true;
$defConsts["wxSTC_LOUT_WORD2"] = true;
$defConsts["wxSTC_LOUT_WORD3"] = true;
$defConsts["wxSTC_LOUT_WORD4"] = true;
$defConsts["wxSTC_LOUT_STRING"] = true;
$defConsts["wxSTC_LOUT_OPERATOR"] = true;
$defConsts["wxSTC_LOUT_IDENTIFIER"] = true;
$defConsts["wxSTC_LOUT_STRINGEOL"] = true;

// Lexical states for SCLEX_ESCRIPT
$defConsts["wxSTC_ESCRIPT_DEFAULT"] = true;
$defConsts["wxSTC_ESCRIPT_COMMENT"] = true;
$defConsts["wxSTC_ESCRIPT_COMMENTLINE"] = true;
$defConsts["wxSTC_ESCRIPT_COMMENTDOC"] = true;
$defConsts["wxSTC_ESCRIPT_NUMBER"] = true;
$defConsts["wxSTC_ESCRIPT_WORD"] = true;
$defConsts["wxSTC_ESCRIPT_STRING"] = true;
$defConsts["wxSTC_ESCRIPT_OPERATOR"] = true;
$defConsts["wxSTC_ESCRIPT_IDENTIFIER"] = true;
$defConsts["wxSTC_ESCRIPT_BRACE"] = true;
$defConsts["wxSTC_ESCRIPT_WORD2"] = true;
$defConsts["wxSTC_ESCRIPT_WORD3"] = true;

// Lexical states for SCLEX_PS
$defConsts["wxSTC_PS_DEFAULT"] = true;
$defConsts["wxSTC_PS_COMMENT"] = true;
$defConsts["wxSTC_PS_DSC_COMMENT"] = true;
$defConsts["wxSTC_PS_DSC_VALUE"] = true;
$defConsts["wxSTC_PS_NUMBER"] = true;
$defConsts["wxSTC_PS_NAME"] = true;
$defConsts["wxSTC_PS_KEYWORD"] = true;
$defConsts["wxSTC_PS_LITERAL"] = true;
$defConsts["wxSTC_PS_IMMEVAL"] = true;
$defConsts["wxSTC_PS_PAREN_ARRAY"] = true;
$defConsts["wxSTC_PS_PAREN_DICT"] = true;
$defConsts["wxSTC_PS_PAREN_PROC"] = true;
$defConsts["wxSTC_PS_TEXT"] = true;
$defConsts["wxSTC_PS_HEXSTRING"] = true;
$defConsts["wxSTC_PS_BASE85STRING"] = true;
$defConsts["wxSTC_PS_BADSTRINGCHAR"] = true;

// Lexical states for SCLEX_NSIS
$defConsts["wxSTC_NSIS_DEFAULT"] = true;
$defConsts["wxSTC_NSIS_COMMENT"] = true;
$defConsts["wxSTC_NSIS_STRINGDQ"] = true;
$defConsts["wxSTC_NSIS_STRINGLQ"] = true;
$defConsts["wxSTC_NSIS_STRINGRQ"] = true;
$defConsts["wxSTC_NSIS_FUNCTION"] = true;
$defConsts["wxSTC_NSIS_VARIABLE"] = true;
$defConsts["wxSTC_NSIS_LABEL"] = true;
$defConsts["wxSTC_NSIS_USERDEFINED"] = true;
$defConsts["wxSTC_NSIS_SECTIONDEF"] = true;
$defConsts["wxSTC_NSIS_SUBSECTIONDEF"] = true;
$defConsts["wxSTC_NSIS_IFDEFINEDEF"] = true;
$defConsts["wxSTC_NSIS_MACRODEF"] = true;
$defConsts["wxSTC_NSIS_STRINGVAR"] = true;
$defConsts["wxSTC_NSIS_NUMBER"] = true;
$defConsts["wxSTC_NSIS_SECTIONGROUP"] = true;
$defConsts["wxSTC_NSIS_PAGEEX"] = true;
$defConsts["wxSTC_NSIS_FUNCTIONDEF"] = true;
$defConsts["wxSTC_NSIS_COMMENTBOX"] = true;

// Lexical states for SCLEX_MMIXAL
$defConsts["wxSTC_MMIXAL_LEADWS"] = true;
$defConsts["wxSTC_MMIXAL_COMMENT"] = true;
$defConsts["wxSTC_MMIXAL_LABEL"] = true;
$defConsts["wxSTC_MMIXAL_OPCODE"] = true;
$defConsts["wxSTC_MMIXAL_OPCODE_PRE"] = true;
$defConsts["wxSTC_MMIXAL_OPCODE_VALID"] = true;
$defConsts["wxSTC_MMIXAL_OPCODE_UNKNOWN"] = true;
$defConsts["wxSTC_MMIXAL_OPCODE_POST"] = true;
$defConsts["wxSTC_MMIXAL_OPERANDS"] = true;
$defConsts["wxSTC_MMIXAL_NUMBER"] = true;
$defConsts["wxSTC_MMIXAL_REF"] = true;
$defConsts["wxSTC_MMIXAL_CHAR"] = true;
$defConsts["wxSTC_MMIXAL_STRING"] = true;
$defConsts["wxSTC_MMIXAL_REGISTER"] = true;
$defConsts["wxSTC_MMIXAL_HEX"] = true;
$defConsts["wxSTC_MMIXAL_OPERATOR"] = true;
$defConsts["wxSTC_MMIXAL_SYMBOL"] = true;
$defConsts["wxSTC_MMIXAL_INCLUDE"] = true;

// Lexical states for SCLEX_CLW
$defConsts["wxSTC_CLW_DEFAULT"] = true;
$defConsts["wxSTC_CLW_LABEL"] = true;
$defConsts["wxSTC_CLW_COMMENT"] = true;
$defConsts["wxSTC_CLW_STRING"] = true;
$defConsts["wxSTC_CLW_USER_IDENTIFIER"] = true;
$defConsts["wxSTC_CLW_INTEGER_CONSTANT"] = true;
$defConsts["wxSTC_CLW_REAL_CONSTANT"] = true;
$defConsts["wxSTC_CLW_PICTURE_STRING"] = true;
$defConsts["wxSTC_CLW_KEYWORD"] = true;
$defConsts["wxSTC_CLW_COMPILER_DIRECTIVE"] = true;
$defConsts["wxSTC_CLW_RUNTIME_EXPRESSIONS"] = true;
$defConsts["wxSTC_CLW_BUILTIN_PROCEDURES_FUNCTION"] = true;
$defConsts["wxSTC_CLW_STRUCTURE_DATA_TYPE"] = true;
$defConsts["wxSTC_CLW_ATTRIBUTE"] = true;
$defConsts["wxSTC_CLW_STANDARD_EQUATE"] = true;
$defConsts["wxSTC_CLW_ERROR"] = true;
$defConsts["wxSTC_CLW_DEPRECATED"] = true;

// Lexical states for SCLEX_LOT
$defConsts["wxSTC_LOT_DEFAULT"] = true;
$defConsts["wxSTC_LOT_HEADER"] = true;
$defConsts["wxSTC_LOT_BREAK"] = true;
$defConsts["wxSTC_LOT_SET"] = true;
$defConsts["wxSTC_LOT_PASS"] = true;
$defConsts["wxSTC_LOT_FAIL"] = true;
$defConsts["wxSTC_LOT_ABORT"] = true;

// Lexical states for SCLEX_YAML
$defConsts["wxSTC_YAML_DEFAULT"] = true;
$defConsts["wxSTC_YAML_COMMENT"] = true;
$defConsts["wxSTC_YAML_IDENTIFIER"] = true;
$defConsts["wxSTC_YAML_KEYWORD"] = true;
$defConsts["wxSTC_YAML_NUMBER"] = true;
$defConsts["wxSTC_YAML_REFERENCE"] = true;
$defConsts["wxSTC_YAML_DOCUMENT"] = true;
$defConsts["wxSTC_YAML_TEXT"] = true;
$defConsts["wxSTC_YAML_ERROR"] = true;
$defConsts["wxSTC_YAML_OPERATOR"] = true;

// Lexical states for SCLEX_TEX
$defConsts["wxSTC_TEX_DEFAULT"] = true;
$defConsts["wxSTC_TEX_SPECIAL"] = true;
$defConsts["wxSTC_TEX_GROUP"] = true;
$defConsts["wxSTC_TEX_SYMBOL"] = true;
$defConsts["wxSTC_TEX_COMMAND"] = true;
$defConsts["wxSTC_TEX_TEXT"] = true;
$defConsts["wxSTC_METAPOST_DEFAULT"] = true;
$defConsts["wxSTC_METAPOST_SPECIAL"] = true;
$defConsts["wxSTC_METAPOST_GROUP"] = true;
$defConsts["wxSTC_METAPOST_SYMBOL"] = true;
$defConsts["wxSTC_METAPOST_COMMAND"] = true;
$defConsts["wxSTC_METAPOST_TEXT"] = true;
$defConsts["wxSTC_METAPOST_EXTRA"] = true;

// Lexical states for SCLEX_ERLANG
$defConsts["wxSTC_ERLANG_DEFAULT"] = true;
$defConsts["wxSTC_ERLANG_COMMENT"] = true;
$defConsts["wxSTC_ERLANG_VARIABLE"] = true;
$defConsts["wxSTC_ERLANG_NUMBER"] = true;
$defConsts["wxSTC_ERLANG_KEYWORD"] = true;
$defConsts["wxSTC_ERLANG_STRING"] = true;
$defConsts["wxSTC_ERLANG_OPERATOR"] = true;
$defConsts["wxSTC_ERLANG_ATOM"] = true;
$defConsts["wxSTC_ERLANG_FUNCTION_NAME"] = true;
$defConsts["wxSTC_ERLANG_CHARACTER"] = true;
$defConsts["wxSTC_ERLANG_MACRO"] = true;
$defConsts["wxSTC_ERLANG_RECORD"] = true;
$defConsts["wxSTC_ERLANG_PREPROC"] = true;
$defConsts["wxSTC_ERLANG_NODE_NAME"] = true;
$defConsts["wxSTC_ERLANG_COMMENT_FUNCTION"] = true;
$defConsts["wxSTC_ERLANG_COMMENT_MODULE"] = true;
$defConsts["wxSTC_ERLANG_COMMENT_DOC"] = true;
$defConsts["wxSTC_ERLANG_COMMENT_DOC_MACRO"] = true;
$defConsts["wxSTC_ERLANG_ATOM_QUOTED"] = true;
$defConsts["wxSTC_ERLANG_MACRO_QUOTED"] = true;
$defConsts["wxSTC_ERLANG_RECORD_QUOTED"] = true;
$defConsts["wxSTC_ERLANG_NODE_NAME_QUOTED"] = true;
$defConsts["wxSTC_ERLANG_BIFS"] = true;
$defConsts["wxSTC_ERLANG_MODULES"] = true;
$defConsts["wxSTC_ERLANG_MODULES_ATT"] = true;
$defConsts["wxSTC_ERLANG_UNKNOWN"] = true;

// Lexical states for SCLEX_OCTAVE are identical to MatLab
// Lexical states for SCLEX_MSSQL
$defConsts["wxSTC_MSSQL_DEFAULT"] = true;
$defConsts["wxSTC_MSSQL_COMMENT"] = true;
$defConsts["wxSTC_MSSQL_LINE_COMMENT"] = true;
$defConsts["wxSTC_MSSQL_NUMBER"] = true;
$defConsts["wxSTC_MSSQL_STRING"] = true;
$defConsts["wxSTC_MSSQL_OPERATOR"] = true;
$defConsts["wxSTC_MSSQL_IDENTIFIER"] = true;
$defConsts["wxSTC_MSSQL_VARIABLE"] = true;
$defConsts["wxSTC_MSSQL_COLUMN_NAME"] = true;
$defConsts["wxSTC_MSSQL_STATEMENT"] = true;
$defConsts["wxSTC_MSSQL_DATATYPE"] = true;
$defConsts["wxSTC_MSSQL_SYSTABLE"] = true;
$defConsts["wxSTC_MSSQL_GLOBAL_VARIABLE"] = true;
$defConsts["wxSTC_MSSQL_FUNCTION"] = true;
$defConsts["wxSTC_MSSQL_STORED_PROCEDURE"] = true;
$defConsts["wxSTC_MSSQL_DEFAULT_PREF_DATATYPE"] = true;
$defConsts["wxSTC_MSSQL_COLUMN_NAME_2"] = true;

// Lexical states for SCLEX_VERILOG
$defConsts["wxSTC_V_DEFAULT"] = true;
$defConsts["wxSTC_V_COMMENT"] = true;
$defConsts["wxSTC_V_COMMENTLINE"] = true;
$defConsts["wxSTC_V_COMMENTLINEBANG"] = true;
$defConsts["wxSTC_V_NUMBER"] = true;
$defConsts["wxSTC_V_WORD"] = true;
$defConsts["wxSTC_V_STRING"] = true;
$defConsts["wxSTC_V_WORD2"] = true;
$defConsts["wxSTC_V_WORD3"] = true;
$defConsts["wxSTC_V_PREPROCESSOR"] = true;
$defConsts["wxSTC_V_OPERATOR"] = true;
$defConsts["wxSTC_V_IDENTIFIER"] = true;
$defConsts["wxSTC_V_STRINGEOL"] = true;
$defConsts["wxSTC_V_USER"] = true;

// Lexical states for SCLEX_KIX
$defConsts["wxSTC_KIX_DEFAULT"] = true;
$defConsts["wxSTC_KIX_COMMENT"] = true;
$defConsts["wxSTC_KIX_STRING1"] = true;
$defConsts["wxSTC_KIX_STRING2"] = true;
$defConsts["wxSTC_KIX_NUMBER"] = true;
$defConsts["wxSTC_KIX_VAR"] = true;
$defConsts["wxSTC_KIX_MACRO"] = true;
$defConsts["wxSTC_KIX_KEYWORD"] = true;
$defConsts["wxSTC_KIX_FUNCTIONS"] = true;
$defConsts["wxSTC_KIX_OPERATOR"] = true;
$defConsts["wxSTC_KIX_IDENTIFIER"] = true;

// Lexical states for SCLEX_GUI4CLI
$defConsts["wxSTC_GC_DEFAULT"] = true;
$defConsts["wxSTC_GC_COMMENTLINE"] = true;
$defConsts["wxSTC_GC_COMMENTBLOCK"] = true;
$defConsts["wxSTC_GC_GLOBAL"] = true;
$defConsts["wxSTC_GC_EVENT"] = true;
$defConsts["wxSTC_GC_ATTRIBUTE"] = true;
$defConsts["wxSTC_GC_CONTROL"] = true;
$defConsts["wxSTC_GC_COMMAND"] = true;
$defConsts["wxSTC_GC_STRING"] = true;
$defConsts["wxSTC_GC_OPERATOR"] = true;

// Lexical states for SCLEX_SPECMAN
$defConsts["wxSTC_SN_DEFAULT"] = true;
$defConsts["wxSTC_SN_CODE"] = true;
$defConsts["wxSTC_SN_COMMENTLINE"] = true;
$defConsts["wxSTC_SN_COMMENTLINEBANG"] = true;
$defConsts["wxSTC_SN_NUMBER"] = true;
$defConsts["wxSTC_SN_WORD"] = true;
$defConsts["wxSTC_SN_STRING"] = true;
$defConsts["wxSTC_SN_WORD2"] = true;
$defConsts["wxSTC_SN_WORD3"] = true;
$defConsts["wxSTC_SN_PREPROCESSOR"] = true;
$defConsts["wxSTC_SN_OPERATOR"] = true;
$defConsts["wxSTC_SN_IDENTIFIER"] = true;
$defConsts["wxSTC_SN_STRINGEOL"] = true;
$defConsts["wxSTC_SN_REGEXTAG"] = true;
$defConsts["wxSTC_SN_SIGNAL"] = true;
$defConsts["wxSTC_SN_USER"] = true;

// Lexical states for SCLEX_AU3
$defConsts["wxSTC_AU3_DEFAULT"] = true;
$defConsts["wxSTC_AU3_COMMENT"] = true;
$defConsts["wxSTC_AU3_COMMENTBLOCK"] = true;
$defConsts["wxSTC_AU3_NUMBER"] = true;
$defConsts["wxSTC_AU3_FUNCTION"] = true;
$defConsts["wxSTC_AU3_KEYWORD"] = true;
$defConsts["wxSTC_AU3_MACRO"] = true;
$defConsts["wxSTC_AU3_STRING"] = true;
$defConsts["wxSTC_AU3_OPERATOR"] = true;
$defConsts["wxSTC_AU3_VARIABLE"] = true;
$defConsts["wxSTC_AU3_SENT"] = true;
$defConsts["wxSTC_AU3_PREPROCESSOR"] = true;
$defConsts["wxSTC_AU3_SPECIAL"] = true;
$defConsts["wxSTC_AU3_EXPAND"] = true;
$defConsts["wxSTC_AU3_COMOBJ"] = true;
$defConsts["wxSTC_AU3_UDF"] = true;

// Lexical states for SCLEX_APDL
$defConsts["wxSTC_APDL_DEFAULT"] = true;
$defConsts["wxSTC_APDL_COMMENT"] = true;
$defConsts["wxSTC_APDL_COMMENTBLOCK"] = true;
$defConsts["wxSTC_APDL_NUMBER"] = true;
$defConsts["wxSTC_APDL_STRING"] = true;
$defConsts["wxSTC_APDL_OPERATOR"] = true;
$defConsts["wxSTC_APDL_WORD"] = true;
$defConsts["wxSTC_APDL_PROCESSOR"] = true;
$defConsts["wxSTC_APDL_COMMAND"] = true;
$defConsts["wxSTC_APDL_SLASHCOMMAND"] = true;
$defConsts["wxSTC_APDL_STARCOMMAND"] = true;
$defConsts["wxSTC_APDL_ARGUMENT"] = true;
$defConsts["wxSTC_APDL_FUNCTION"] = true;

// Lexical states for SCLEX_BASH
$defConsts["wxSTC_SH_DEFAULT"] = true;
$defConsts["wxSTC_SH_ERROR"] = true;
$defConsts["wxSTC_SH_COMMENTLINE"] = true;
$defConsts["wxSTC_SH_NUMBER"] = true;
$defConsts["wxSTC_SH_WORD"] = true;
$defConsts["wxSTC_SH_STRING"] = true;
$defConsts["wxSTC_SH_CHARACTER"] = true;
$defConsts["wxSTC_SH_OPERATOR"] = true;
$defConsts["wxSTC_SH_IDENTIFIER"] = true;
$defConsts["wxSTC_SH_SCALAR"] = true;
$defConsts["wxSTC_SH_PARAM"] = true;
$defConsts["wxSTC_SH_BACKTICKS"] = true;
$defConsts["wxSTC_SH_HERE_DELIM"] = true;
$defConsts["wxSTC_SH_HERE_Q"] = true;

// Lexical states for SCLEX_ASN1
$defConsts["wxSTC_ASN1_DEFAULT"] = true;
$defConsts["wxSTC_ASN1_COMMENT"] = true;
$defConsts["wxSTC_ASN1_IDENTIFIER"] = true;
$defConsts["wxSTC_ASN1_STRING"] = true;
$defConsts["wxSTC_ASN1_OID"] = true;
$defConsts["wxSTC_ASN1_SCALAR"] = true;
$defConsts["wxSTC_ASN1_KEYWORD"] = true;
$defConsts["wxSTC_ASN1_ATTRIBUTE"] = true;
$defConsts["wxSTC_ASN1_DESCRIPTOR"] = true;
$defConsts["wxSTC_ASN1_TYPE"] = true;
$defConsts["wxSTC_ASN1_OPERATOR"] = true;

// Lexical states for SCLEX_VHDL
$defConsts["wxSTC_VHDL_DEFAULT"] = true;
$defConsts["wxSTC_VHDL_COMMENT"] = true;
$defConsts["wxSTC_VHDL_COMMENTLINEBANG"] = true;
$defConsts["wxSTC_VHDL_NUMBER"] = true;
$defConsts["wxSTC_VHDL_STRING"] = true;
$defConsts["wxSTC_VHDL_OPERATOR"] = true;
$defConsts["wxSTC_VHDL_IDENTIFIER"] = true;
$defConsts["wxSTC_VHDL_STRINGEOL"] = true;
$defConsts["wxSTC_VHDL_KEYWORD"] = true;
$defConsts["wxSTC_VHDL_STDOPERATOR"] = true;
$defConsts["wxSTC_VHDL_ATTRIBUTE"] = true;
$defConsts["wxSTC_VHDL_STDFUNCTION"] = true;
$defConsts["wxSTC_VHDL_STDPACKAGE"] = true;
$defConsts["wxSTC_VHDL_STDTYPE"] = true;
$defConsts["wxSTC_VHDL_USERWORD"] = true;

// Lexical states for SCLEX_CAML
$defConsts["wxSTC_CAML_DEFAULT"] = true;
$defConsts["wxSTC_CAML_IDENTIFIER"] = true;
$defConsts["wxSTC_CAML_TAGNAME"] = true;
$defConsts["wxSTC_CAML_KEYWORD"] = true;
$defConsts["wxSTC_CAML_KEYWORD2"] = true;
$defConsts["wxSTC_CAML_KEYWORD3"] = true;
$defConsts["wxSTC_CAML_LINENUM"] = true;
$defConsts["wxSTC_CAML_OPERATOR"] = true;
$defConsts["wxSTC_CAML_NUMBER"] = true;
$defConsts["wxSTC_CAML_CHAR"] = true;
$defConsts["wxSTC_CAML_WHITE"] = true;
$defConsts["wxSTC_CAML_STRING"] = true;
$defConsts["wxSTC_CAML_COMMENT"] = true;
$defConsts["wxSTC_CAML_COMMENT1"] = true;
$defConsts["wxSTC_CAML_COMMENT2"] = true;
$defConsts["wxSTC_CAML_COMMENT3"] = true;

// Lexical states for SCLEX_HASKELL
$defConsts["wxSTC_HA_DEFAULT"] = true;
$defConsts["wxSTC_HA_IDENTIFIER"] = true;
$defConsts["wxSTC_HA_KEYWORD"] = true;
$defConsts["wxSTC_HA_NUMBER"] = true;
$defConsts["wxSTC_HA_STRING"] = true;
$defConsts["wxSTC_HA_CHARACTER"] = true;
$defConsts["wxSTC_HA_CLASS"] = true;
$defConsts["wxSTC_HA_MODULE"] = true;
$defConsts["wxSTC_HA_CAPITAL"] = true;
$defConsts["wxSTC_HA_DATA"] = true;
$defConsts["wxSTC_HA_IMPORT"] = true;
$defConsts["wxSTC_HA_OPERATOR"] = true;
$defConsts["wxSTC_HA_INSTANCE"] = true;
$defConsts["wxSTC_HA_COMMENTLINE"] = true;
$defConsts["wxSTC_HA_COMMENTBLOCK"] = true;
$defConsts["wxSTC_HA_COMMENTBLOCK2"] = true;
$defConsts["wxSTC_HA_COMMENTBLOCK3"] = true;

// Lexical states of SCLEX_TADS3
$defConsts["wxSTC_T3_DEFAULT"] = true;
$defConsts["wxSTC_T3_X_DEFAULT"] = true;
$defConsts["wxSTC_T3_PREPROCESSOR"] = true;
$defConsts["wxSTC_T3_BLOCK_COMMENT"] = true;
$defConsts["wxSTC_T3_LINE_COMMENT"] = true;
$defConsts["wxSTC_T3_OPERATOR"] = true;
$defConsts["wxSTC_T3_KEYWORD"] = true;
$defConsts["wxSTC_T3_NUMBER"] = true;
$defConsts["wxSTC_T3_IDENTIFIER"] = true;
$defConsts["wxSTC_T3_S_STRING"] = true;
$defConsts["wxSTC_T3_D_STRING"] = true;
$defConsts["wxSTC_T3_X_STRING"] = true;
$defConsts["wxSTC_T3_LIB_DIRECTIVE"] = true;
$defConsts["wxSTC_T3_MSG_PARAM"] = true;
$defConsts["wxSTC_T3_HTML_TAG"] = true;
$defConsts["wxSTC_T3_HTML_DEFAULT"] = true;
$defConsts["wxSTC_T3_HTML_STRING"] = true;
$defConsts["wxSTC_T3_USER1"] = true;
$defConsts["wxSTC_T3_USER2"] = true;
$defConsts["wxSTC_T3_USER3"] = true;
$defConsts["wxSTC_T3_BRACE"] = true;

// Lexical states for SCLEX_REBOL
$defConsts["wxSTC_REBOL_DEFAULT"] = true;
$defConsts["wxSTC_REBOL_COMMENTLINE"] = true;
$defConsts["wxSTC_REBOL_COMMENTBLOCK"] = true;
$defConsts["wxSTC_REBOL_PREFACE"] = true;
$defConsts["wxSTC_REBOL_OPERATOR"] = true;
$defConsts["wxSTC_REBOL_CHARACTER"] = true;
$defConsts["wxSTC_REBOL_QUOTEDSTRING"] = true;
$defConsts["wxSTC_REBOL_BRACEDSTRING"] = true;
$defConsts["wxSTC_REBOL_NUMBER"] = true;
$defConsts["wxSTC_REBOL_PAIR"] = true;
$defConsts["wxSTC_REBOL_TUPLE"] = true;
$defConsts["wxSTC_REBOL_BINARY"] = true;
$defConsts["wxSTC_REBOL_MONEY"] = true;
$defConsts["wxSTC_REBOL_ISSUE"] = true;
$defConsts["wxSTC_REBOL_TAG"] = true;
$defConsts["wxSTC_REBOL_FILE"] = true;
$defConsts["wxSTC_REBOL_EMAIL"] = true;
$defConsts["wxSTC_REBOL_URL"] = true;
$defConsts["wxSTC_REBOL_DATE"] = true;
$defConsts["wxSTC_REBOL_TIME"] = true;
$defConsts["wxSTC_REBOL_IDENTIFIER"] = true;
$defConsts["wxSTC_REBOL_WORD"] = true;
$defConsts["wxSTC_REBOL_WORD2"] = true;
$defConsts["wxSTC_REBOL_WORD3"] = true;
$defConsts["wxSTC_REBOL_WORD4"] = true;
$defConsts["wxSTC_REBOL_WORD5"] = true;
$defConsts["wxSTC_REBOL_WORD6"] = true;
$defConsts["wxSTC_REBOL_WORD7"] = true;
$defConsts["wxSTC_REBOL_WORD8"] = true;

// Lexical states for SCLEX_SQL
$defConsts["wxSTC_SQL_DEFAULT"] = true;
$defConsts["wxSTC_SQL_COMMENT"] = true;
$defConsts["wxSTC_SQL_COMMENTLINE"] = true;
$defConsts["wxSTC_SQL_COMMENTDOC"] = true;
$defConsts["wxSTC_SQL_NUMBER"] = true;
$defConsts["wxSTC_SQL_WORD"] = true;
$defConsts["wxSTC_SQL_STRING"] = true;
$defConsts["wxSTC_SQL_CHARACTER"] = true;
$defConsts["wxSTC_SQL_SQLPLUS"] = true;
$defConsts["wxSTC_SQL_SQLPLUS_PROMPT"] = true;
$defConsts["wxSTC_SQL_OPERATOR"] = true;
$defConsts["wxSTC_SQL_IDENTIFIER"] = true;
$defConsts["wxSTC_SQL_SQLPLUS_COMMENT"] = true;
$defConsts["wxSTC_SQL_COMMENTLINEDOC"] = true;
$defConsts["wxSTC_SQL_WORD2"] = true;
$defConsts["wxSTC_SQL_COMMENTDOCKEYWORD"] = true;
$defConsts["wxSTC_SQL_COMMENTDOCKEYWORDERROR"] = true;
$defConsts["wxSTC_SQL_USER1"] = true;
$defConsts["wxSTC_SQL_USER2"] = true;
$defConsts["wxSTC_SQL_USER3"] = true;
$defConsts["wxSTC_SQL_USER4"] = true;
$defConsts["wxSTC_SQL_QUOTEDIDENTIFIER"] = true;

// Lexical states for SCLEX_SMALLTALK
$defConsts["wxSTC_ST_DEFAULT"] = true;
$defConsts["wxSTC_ST_STRING"] = true;
$defConsts["wxSTC_ST_NUMBER"] = true;
$defConsts["wxSTC_ST_COMMENT"] = true;
$defConsts["wxSTC_ST_SYMBOL"] = true;
$defConsts["wxSTC_ST_BINARY"] = true;
$defConsts["wxSTC_ST_BOOL"] = true;
$defConsts["wxSTC_ST_SELF"] = true;
$defConsts["wxSTC_ST_SUPER"] = true;
$defConsts["wxSTC_ST_NIL"] = true;
$defConsts["wxSTC_ST_GLOBAL"] = true;
$defConsts["wxSTC_ST_RETURN"] = true;
$defConsts["wxSTC_ST_SPECIAL"] = true;
$defConsts["wxSTC_ST_KWSEND"] = true;
$defConsts["wxSTC_ST_ASSIGN"] = true;
$defConsts["wxSTC_ST_CHARACTER"] = true;
$defConsts["wxSTC_ST_SPEC_SEL"] = true;

// Lexical states for SCLEX_FLAGSHIP (clipper)
$defConsts["wxSTC_FS_DEFAULT"] = true;
$defConsts["wxSTC_FS_COMMENT"] = true;
$defConsts["wxSTC_FS_COMMENTLINE"] = true;
$defConsts["wxSTC_FS_COMMENTDOC"] = true;
$defConsts["wxSTC_FS_COMMENTLINEDOC"] = true;
$defConsts["wxSTC_FS_COMMENTDOCKEYWORD"] = true;
$defConsts["wxSTC_FS_COMMENTDOCKEYWORDERROR"] = true;
$defConsts["wxSTC_FS_KEYWORD"] = true;
$defConsts["wxSTC_FS_KEYWORD2"] = true;
$defConsts["wxSTC_FS_KEYWORD3"] = true;
$defConsts["wxSTC_FS_KEYWORD4"] = true;
$defConsts["wxSTC_FS_NUMBER"] = true;
$defConsts["wxSTC_FS_STRING"] = true;
$defConsts["wxSTC_FS_PREPROCESSOR"] = true;
$defConsts["wxSTC_FS_OPERATOR"] = true;
$defConsts["wxSTC_FS_IDENTIFIER"] = true;
$defConsts["wxSTC_FS_DATE"] = true;
$defConsts["wxSTC_FS_STRINGEOL"] = true;
$defConsts["wxSTC_FS_CONSTANT"] = true;
$defConsts["wxSTC_FS_ASM"] = true;
$defConsts["wxSTC_FS_LABEL"] = true;
$defConsts["wxSTC_FS_ERROR"] = true;
$defConsts["wxSTC_FS_HEXNUMBER"] = true;
$defConsts["wxSTC_FS_BINNUMBER"] = true;

// Lexical states for SCLEX_CSOUND
$defConsts["wxSTC_CSOUND_DEFAULT"] = true;
$defConsts["wxSTC_CSOUND_COMMENT"] = true;
$defConsts["wxSTC_CSOUND_NUMBER"] = true;
$defConsts["wxSTC_CSOUND_OPERATOR"] = true;
$defConsts["wxSTC_CSOUND_INSTR"] = true;
$defConsts["wxSTC_CSOUND_IDENTIFIER"] = true;
$defConsts["wxSTC_CSOUND_OPCODE"] = true;
$defConsts["wxSTC_CSOUND_HEADERSTMT"] = true;
$defConsts["wxSTC_CSOUND_USERKEYWORD"] = true;
$defConsts["wxSTC_CSOUND_COMMENTBLOCK"] = true;
$defConsts["wxSTC_CSOUND_PARAM"] = true;
$defConsts["wxSTC_CSOUND_ARATE_VAR"] = true;
$defConsts["wxSTC_CSOUND_KRATE_VAR"] = true;
$defConsts["wxSTC_CSOUND_IRATE_VAR"] = true;
$defConsts["wxSTC_CSOUND_GLOBAL_VAR"] = true;
$defConsts["wxSTC_CSOUND_STRINGEOL"] = true;

// Lexical states for SCLEX_INNOSETUP
$defConsts["wxSTC_INNO_DEFAULT"] = true;
$defConsts["wxSTC_INNO_COMMENT"] = true;
$defConsts["wxSTC_INNO_KEYWORD"] = true;
$defConsts["wxSTC_INNO_PARAMETER"] = true;
$defConsts["wxSTC_INNO_SECTION"] = true;
$defConsts["wxSTC_INNO_PREPROC"] = true;
$defConsts["wxSTC_INNO_INLINE_EXPANSION"] = true;
$defConsts["wxSTC_INNO_COMMENT_PASCAL"] = true;
$defConsts["wxSTC_INNO_KEYWORD_PASCAL"] = true;
$defConsts["wxSTC_INNO_KEYWORD_USER"] = true;
$defConsts["wxSTC_INNO_STRING_DOUBLE"] = true;
$defConsts["wxSTC_INNO_STRING_SINGLE"] = true;
$defConsts["wxSTC_INNO_IDENTIFIER"] = true;

// Lexical states for SCLEX_OPAL
$defConsts["wxSTC_OPAL_SPACE"] = true;
$defConsts["wxSTC_OPAL_COMMENT_BLOCK"] = true;
$defConsts["wxSTC_OPAL_COMMENT_LINE"] = true;
$defConsts["wxSTC_OPAL_INTEGER"] = true;
$defConsts["wxSTC_OPAL_KEYWORD"] = true;
$defConsts["wxSTC_OPAL_SORT"] = true;
$defConsts["wxSTC_OPAL_STRING"] = true;
$defConsts["wxSTC_OPAL_PAR"] = true;
$defConsts["wxSTC_OPAL_BOOL_CONST"] = true;
$defConsts["wxSTC_OPAL_DEFAULT"] = true;

// Lexical states for SCLEX_SPICE
$defConsts["wxSTC_SPICE_DEFAULT"] = true;
$defConsts["wxSTC_SPICE_IDENTIFIER"] = true;
$defConsts["wxSTC_SPICE_KEYWORD"] = true;
$defConsts["wxSTC_SPICE_KEYWORD2"] = true;
$defConsts["wxSTC_SPICE_KEYWORD3"] = true;
$defConsts["wxSTC_SPICE_NUMBER"] = true;
$defConsts["wxSTC_SPICE_DELIMITER"] = true;
$defConsts["wxSTC_SPICE_VALUE"] = true;
$defConsts["wxSTC_SPICE_COMMENTLINE"] = true;

// Lexical states for SCLEX_CMAKE
$defConsts["wxSTC_CMAKE_DEFAULT"] = true;
$defConsts["wxSTC_CMAKE_COMMENT"] = true;
$defConsts["wxSTC_CMAKE_STRINGDQ"] = true;
$defConsts["wxSTC_CMAKE_STRINGLQ"] = true;
$defConsts["wxSTC_CMAKE_STRINGRQ"] = true;
$defConsts["wxSTC_CMAKE_COMMANDS"] = true;
$defConsts["wxSTC_CMAKE_PARAMETERS"] = true;
$defConsts["wxSTC_CMAKE_VARIABLE"] = true;
$defConsts["wxSTC_CMAKE_USERDEFINED"] = true;
$defConsts["wxSTC_CMAKE_WHILEDEF"] = true;
$defConsts["wxSTC_CMAKE_FOREACHDEF"] = true;
$defConsts["wxSTC_CMAKE_IFDEFINEDEF"] = true;
$defConsts["wxSTC_CMAKE_MACRODEF"] = true;
$defConsts["wxSTC_CMAKE_STRINGVAR"] = true;
$defConsts["wxSTC_CMAKE_NUMBER"] = true;

// Lexical states for SCLEX_GAP
$defConsts["wxSTC_GAP_DEFAULT"] = true;
$defConsts["wxSTC_GAP_IDENTIFIER"] = true;
$defConsts["wxSTC_GAP_KEYWORD"] = true;
$defConsts["wxSTC_GAP_KEYWORD2"] = true;
$defConsts["wxSTC_GAP_KEYWORD3"] = true;
$defConsts["wxSTC_GAP_KEYWORD4"] = true;
$defConsts["wxSTC_GAP_STRING"] = true;
$defConsts["wxSTC_GAP_CHAR"] = true;
$defConsts["wxSTC_GAP_OPERATOR"] = true;
$defConsts["wxSTC_GAP_COMMENT"] = true;
$defConsts["wxSTC_GAP_NUMBER"] = true;
$defConsts["wxSTC_GAP_STRINGEOL"] = true;

// Lexical state for SCLEX_PLM
$defConsts["wxSTC_PLM_DEFAULT"] = true;
$defConsts["wxSTC_PLM_COMMENT"] = true;
$defConsts["wxSTC_PLM_STRING"] = true;
$defConsts["wxSTC_PLM_NUMBER"] = true;
$defConsts["wxSTC_PLM_IDENTIFIER"] = true;
$defConsts["wxSTC_PLM_OPERATOR"] = true;
$defConsts["wxSTC_PLM_CONTROL"] = true;
$defConsts["wxSTC_PLM_KEYWORD"] = true;

// Lexical state for SCLEX_PROGRESS
$defConsts["wxSTC_4GL_DEFAULT"] = true;
$defConsts["wxSTC_4GL_NUMBER"] = true;
$defConsts["wxSTC_4GL_WORD"] = true;
$defConsts["wxSTC_4GL_STRING"] = true;
$defConsts["wxSTC_4GL_CHARACTER"] = true;
$defConsts["wxSTC_4GL_PREPROCESSOR"] = true;
$defConsts["wxSTC_4GL_OPERATOR"] = true;
$defConsts["wxSTC_4GL_IDENTIFIER"] = true;
$defConsts["wxSTC_4GL_BLOCK"] = true;
$defConsts["wxSTC_4GL_END"] = true;
$defConsts["wxSTC_4GL_COMMENT1"] = true;
$defConsts["wxSTC_4GL_COMMENT2"] = true;
$defConsts["wxSTC_4GL_COMMENT3"] = true;
$defConsts["wxSTC_4GL_COMMENT4"] = true;
$defConsts["wxSTC_4GL_COMMENT5"] = true;
$defConsts["wxSTC_4GL_COMMENT6"] = true;
$defConsts["wxSTC_4GL_DEFAULT_"] = true;
$defConsts["wxSTC_4GL_NUMBER_"] = true;
$defConsts["wxSTC_4GL_WORD_"] = true;
$defConsts["wxSTC_4GL_STRING_"] = true;
$defConsts["wxSTC_4GL_CHARACTER_"] = true;
$defConsts["wxSTC_4GL_PREPROCESSOR_"] = true;
$defConsts["wxSTC_4GL_OPERATOR_"] = true;
$defConsts["wxSTC_4GL_IDENTIFIER_"] = true;
$defConsts["wxSTC_4GL_BLOCK_"] = true;
$defConsts["wxSTC_4GL_END_"] = true;
$defConsts["wxSTC_4GL_COMMENT1_"] = true;
$defConsts["wxSTC_4GL_COMMENT2_"] = true;
$defConsts["wxSTC_4GL_COMMENT3_"] = true;
$defConsts["wxSTC_4GL_COMMENT4_"] = true;
$defConsts["wxSTC_4GL_COMMENT5_"] = true;
$defConsts["wxSTC_4GL_COMMENT6_"] = true;

// Lexical states for SCLEX_ABAQUS
$defConsts["wxSTC_ABAQUS_DEFAULT"] = true;
$defConsts["wxSTC_ABAQUS_COMMENT"] = true;
$defConsts["wxSTC_ABAQUS_COMMENTBLOCK"] = true;
$defConsts["wxSTC_ABAQUS_NUMBER"] = true;
$defConsts["wxSTC_ABAQUS_STRING"] = true;
$defConsts["wxSTC_ABAQUS_OPERATOR"] = true;
$defConsts["wxSTC_ABAQUS_WORD"] = true;
$defConsts["wxSTC_ABAQUS_PROCESSOR"] = true;
$defConsts["wxSTC_ABAQUS_COMMAND"] = true;
$defConsts["wxSTC_ABAQUS_SLASHCOMMAND"] = true;
$defConsts["wxSTC_ABAQUS_STARCOMMAND"] = true;
$defConsts["wxSTC_ABAQUS_ARGUMENT"] = true;
$defConsts["wxSTC_ABAQUS_FUNCTION"] = true;

// Lexical states for SCLEX_ASYMPTOTE
$defConsts["wxSTC_ASY_DEFAULT"] = true;
$defConsts["wxSTC_ASY_COMMENT"] = true;
$defConsts["wxSTC_ASY_COMMENTLINE"] = true;
$defConsts["wxSTC_ASY_NUMBER"] = true;
$defConsts["wxSTC_ASY_WORD"] = true;
$defConsts["wxSTC_ASY_STRING"] = true;
$defConsts["wxSTC_ASY_CHARACTER"] = true;
$defConsts["wxSTC_ASY_OPERATOR"] = true;
$defConsts["wxSTC_ASY_IDENTIFIER"] = true;
$defConsts["wxSTC_ASY_STRINGEOL"] = true;
$defConsts["wxSTC_ASY_COMMENTLINEDOC"] = true;
$defConsts["wxSTC_ASY_WORD2"] = true;

// Lexical states for SCLEX_R
$defConsts["wxSTC_R_DEFAULT"] = true;
$defConsts["wxSTC_R_COMMENT"] = true;
$defConsts["wxSTC_R_KWORD"] = true;
$defConsts["wxSTC_R_BASEKWORD"] = true;
$defConsts["wxSTC_R_OTHERKWORD"] = true;
$defConsts["wxSTC_R_NUMBER"] = true;
$defConsts["wxSTC_R_STRING"] = true;
$defConsts["wxSTC_R_STRING2"] = true;
$defConsts["wxSTC_R_OPERATOR"] = true;
$defConsts["wxSTC_R_IDENTIFIER"] = true;
$defConsts["wxSTC_R_INFIX"] = true;
$defConsts["wxSTC_R_INFIXEOL"] = true;

// Lexical state for SCLEX_MAGIKSF
$defConsts["wxSTC_MAGIK_DEFAULT"] = true;
$defConsts["wxSTC_MAGIK_COMMENT"] = true;
$defConsts["wxSTC_MAGIK_HYPER_COMMENT"] = true;
$defConsts["wxSTC_MAGIK_STRING"] = true;
$defConsts["wxSTC_MAGIK_CHARACTER"] = true;
$defConsts["wxSTC_MAGIK_NUMBER"] = true;
$defConsts["wxSTC_MAGIK_IDENTIFIER"] = true;
$defConsts["wxSTC_MAGIK_OPERATOR"] = true;
$defConsts["wxSTC_MAGIK_FLOW"] = true;
$defConsts["wxSTC_MAGIK_CONTAINER"] = true;
$defConsts["wxSTC_MAGIK_BRACKET_BLOCK"] = true;
$defConsts["wxSTC_MAGIK_BRACE_BLOCK"] = true;
$defConsts["wxSTC_MAGIK_SQBRACKET_BLOCK"] = true;
$defConsts["wxSTC_MAGIK_UNKNOWN_KEYWORD"] = true;
$defConsts["wxSTC_MAGIK_KEYWORD"] = true;
$defConsts["wxSTC_MAGIK_PRAGMA"] = true;
$defConsts["wxSTC_MAGIK_SYMBOL"] = true;

// Lexical state for SCLEX_POWERSHELL
$defConsts["wxSTC_POWERSHELL_DEFAULT"] = true;
$defConsts["wxSTC_POWERSHELL_COMMENT"] = true;
$defConsts["wxSTC_POWERSHELL_STRING"] = true;
$defConsts["wxSTC_POWERSHELL_CHARACTER"] = true;
$defConsts["wxSTC_POWERSHELL_NUMBER"] = true;
$defConsts["wxSTC_POWERSHELL_VARIABLE"] = true;
$defConsts["wxSTC_POWERSHELL_OPERATOR"] = true;
$defConsts["wxSTC_POWERSHELL_IDENTIFIER"] = true;
$defConsts["wxSTC_POWERSHELL_KEYWORD"] = true;
$defConsts["wxSTC_POWERSHELL_CMDLET"] = true;
$defConsts["wxSTC_POWERSHELL_ALIAS"] = true;

// Lexical state for SCLEX_MYSQL
$defConsts["wxSTC_MYSQL_DEFAULT"] = true;
$defConsts["wxSTC_MYSQL_COMMENT"] = true;
$defConsts["wxSTC_MYSQL_COMMENTLINE"] = true;
$defConsts["wxSTC_MYSQL_VARIABLE"] = true;
$defConsts["wxSTC_MYSQL_SYSTEMVARIABLE"] = true;
$defConsts["wxSTC_MYSQL_KNOWNSYSTEMVARIABLE"] = true;
$defConsts["wxSTC_MYSQL_NUMBER"] = true;
$defConsts["wxSTC_MYSQL_MAJORKEYWORD"] = true;
$defConsts["wxSTC_MYSQL_KEYWORD"] = true;
$defConsts["wxSTC_MYSQL_DATABASEOBJECT"] = true;
$defConsts["wxSTC_MYSQL_PROCEDUREKEYWORD"] = true;
$defConsts["wxSTC_MYSQL_STRING"] = true;
$defConsts["wxSTC_MYSQL_SQSTRING"] = true;
$defConsts["wxSTC_MYSQL_DQSTRING"] = true;
$defConsts["wxSTC_MYSQL_OPERATOR"] = true;
$defConsts["wxSTC_MYSQL_FUNCTION"] = true;
$defConsts["wxSTC_MYSQL_IDENTIFIER"] = true;
$defConsts["wxSTC_MYSQL_QUOTEDIDENTIFIER"] = true;
$defConsts["wxSTC_MYSQL_USER1"] = true;
$defConsts["wxSTC_MYSQL_USER2"] = true;
$defConsts["wxSTC_MYSQL_USER3"] = true;
$defConsts["wxSTC_MYSQL_HIDDENCOMMAND"] = true;

// Lexical state for SCLEX_PO
$defConsts["wxSTC_PO_DEFAULT"] = true;
$defConsts["wxSTC_PO_COMMENT"] = true;
$defConsts["wxSTC_PO_MSGID"] = true;
$defConsts["wxSTC_PO_MSGID_TEXT"] = true;
$defConsts["wxSTC_PO_MSGSTR"] = true;
$defConsts["wxSTC_PO_MSGSTR_TEXT"] = true;
$defConsts["wxSTC_PO_MSGCTXT"] = true;
$defConsts["wxSTC_PO_MSGCTXT_TEXT"] = true;
$defConsts["wxSTC_PO_FUZZY"] = true;

// Lexical states for SCLEX_PASCAL
$defConsts["wxSTC_PAS_DEFAULT"] = true;
$defConsts["wxSTC_PAS_IDENTIFIER"] = true;
$defConsts["wxSTC_PAS_COMMENT"] = true;
$defConsts["wxSTC_PAS_COMMENT2"] = true;
$defConsts["wxSTC_PAS_COMMENTLINE"] = true;
$defConsts["wxSTC_PAS_PREPROCESSOR"] = true;
$defConsts["wxSTC_PAS_PREPROCESSOR2"] = true;
$defConsts["wxSTC_PAS_NUMBER"] = true;
$defConsts["wxSTC_PAS_HEXNUMBER"] = true;
$defConsts["wxSTC_PAS_WORD"] = true;
$defConsts["wxSTC_PAS_STRING"] = true;
$defConsts["wxSTC_PAS_STRINGEOL"] = true;
$defConsts["wxSTC_PAS_CHARACTER"] = true;
$defConsts["wxSTC_PAS_OPERATOR"] = true;
$defConsts["wxSTC_PAS_ASM"] = true;

// Lexical state for SCLEX_SORCUS
$defConsts["wxSTC_SORCUS_DEFAULT"] = true;
$defConsts["wxSTC_SORCUS_COMMAND"] = true;
$defConsts["wxSTC_SORCUS_PARAMETER"] = true;
$defConsts["wxSTC_SORCUS_COMMENTLINE"] = true;
$defConsts["wxSTC_SORCUS_STRING"] = true;
$defConsts["wxSTC_SORCUS_STRINGEOL"] = true;
$defConsts["wxSTC_SORCUS_IDENTIFIER"] = true;
$defConsts["wxSTC_SORCUS_OPERATOR"] = true;
$defConsts["wxSTC_SORCUS_NUMBER"] = true;
$defConsts["wxSTC_SORCUS_CONSTANT"] = true;

// Lexical state for SCLEX_POWERPRO
$defConsts["wxSTC_POWERPRO_DEFAULT"] = true;
$defConsts["wxSTC_POWERPRO_COMMENTBLOCK"] = true;
$defConsts["wxSTC_POWERPRO_COMMENTLINE"] = true;
$defConsts["wxSTC_POWERPRO_NUMBER"] = true;
$defConsts["wxSTC_POWERPRO_WORD"] = true;
$defConsts["wxSTC_POWERPRO_WORD2"] = true;
$defConsts["wxSTC_POWERPRO_WORD3"] = true;
$defConsts["wxSTC_POWERPRO_WORD4"] = true;
$defConsts["wxSTC_POWERPRO_DOUBLEQUOTEDSTRING"] = true;
$defConsts["wxSTC_POWERPRO_SINGLEQUOTEDSTRING"] = true;
$defConsts["wxSTC_POWERPRO_LINECONTINUE"] = true;
$defConsts["wxSTC_POWERPRO_OPERATOR"] = true;
$defConsts["wxSTC_POWERPRO_IDENTIFIER"] = true;
$defConsts["wxSTC_POWERPRO_STRINGEOL"] = true;
$defConsts["wxSTC_POWERPRO_VERBATIM"] = true;
$defConsts["wxSTC_POWERPRO_ALTQUOTE"] = true;
$defConsts["wxSTC_POWERPRO_FUNCTION"] = true;

// Lexical states for SCLEX_SML
$defConsts["wxSTC_SML_DEFAULT"] = true;
$defConsts["wxSTC_SML_IDENTIFIER"] = true;
$defConsts["wxSTC_SML_TAGNAME"] = true;
$defConsts["wxSTC_SML_KEYWORD"] = true;
$defConsts["wxSTC_SML_KEYWORD2"] = true;
$defConsts["wxSTC_SML_KEYWORD3"] = true;
$defConsts["wxSTC_SML_LINENUM"] = true;
$defConsts["wxSTC_SML_OPERATOR"] = true;
$defConsts["wxSTC_SML_NUMBER"] = true;
$defConsts["wxSTC_SML_CHAR"] = true;
$defConsts["wxSTC_SML_STRING"] = true;
$defConsts["wxSTC_SML_COMMENT"] = true;
$defConsts["wxSTC_SML_COMMENT1"] = true;
$defConsts["wxSTC_SML_COMMENT2"] = true;
$defConsts["wxSTC_SML_COMMENT3"] = true;

// Lexical state for SCLEX_MARKDOWN
$defConsts["wxSTC_MARKDOWN_DEFAULT"] = true;
$defConsts["wxSTC_MARKDOWN_LINE_BEGIN"] = true;
$defConsts["wxSTC_MARKDOWN_STRONG1"] = true;
$defConsts["wxSTC_MARKDOWN_STRONG2"] = true;
$defConsts["wxSTC_MARKDOWN_EM1"] = true;
$defConsts["wxSTC_MARKDOWN_EM2"] = true;
$defConsts["wxSTC_MARKDOWN_HEADER1"] = true;
$defConsts["wxSTC_MARKDOWN_HEADER2"] = true;
$defConsts["wxSTC_MARKDOWN_HEADER3"] = true;
$defConsts["wxSTC_MARKDOWN_HEADER4"] = true;
$defConsts["wxSTC_MARKDOWN_HEADER5"] = true;
$defConsts["wxSTC_MARKDOWN_HEADER6"] = true;
$defConsts["wxSTC_MARKDOWN_PRECHAR"] = true;
$defConsts["wxSTC_MARKDOWN_ULIST_ITEM"] = true;
$defConsts["wxSTC_MARKDOWN_OLIST_ITEM"] = true;
$defConsts["wxSTC_MARKDOWN_BLOCKQUOTE"] = true;
$defConsts["wxSTC_MARKDOWN_STRIKEOUT"] = true;
$defConsts["wxSTC_MARKDOWN_HRULE"] = true;
$defConsts["wxSTC_MARKDOWN_LINK"] = true;
$defConsts["wxSTC_MARKDOWN_CODE"] = true;
$defConsts["wxSTC_MARKDOWN_CODE2"] = true;
$defConsts["wxSTC_MARKDOWN_CODEBK"] = true;

//}}}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Commands that can be bound to keystrokes section {{{


// Redoes the next action on the undo history.
$defConsts["wxSTC_CMD_REDO"] = true;

// Select all the text in the document.
$defConsts["wxSTC_CMD_SELECTALL"] = true;

// Undo one action in the undo history.
$defConsts["wxSTC_CMD_UNDO"] = true;

// Cut the selection to the clipboard.
$defConsts["wxSTC_CMD_CUT"] = true;

// Copy the selection to the clipboard.
$defConsts["wxSTC_CMD_COPY"] = true;

// Paste the contents of the clipboard into the document replacing the selection.
$defConsts["wxSTC_CMD_PASTE"] = true;

// Clear the selection.
$defConsts["wxSTC_CMD_CLEAR"] = true;

// Move caret down one line.
$defConsts["wxSTC_CMD_LINEDOWN"] = true;

// Move caret down one line extending selection to new caret position.
$defConsts["wxSTC_CMD_LINEDOWNEXTEND"] = true;

// Move caret up one line.
$defConsts["wxSTC_CMD_LINEUP"] = true;

// Move caret up one line extending selection to new caret position.
$defConsts["wxSTC_CMD_LINEUPEXTEND"] = true;

// Move caret left one character.
$defConsts["wxSTC_CMD_CHARLEFT"] = true;

// Move caret left one character extending selection to new caret position.
$defConsts["wxSTC_CMD_CHARLEFTEXTEND"] = true;

// Move caret right one character.
$defConsts["wxSTC_CMD_CHARRIGHT"] = true;

// Move caret right one character extending selection to new caret position.
$defConsts["wxSTC_CMD_CHARRIGHTEXTEND"] = true;

// Move caret left one word.
$defConsts["wxSTC_CMD_WORDLEFT"] = true;

// Move caret left one word extending selection to new caret position.
$defConsts["wxSTC_CMD_WORDLEFTEXTEND"] = true;

// Move caret right one word.
$defConsts["wxSTC_CMD_WORDRIGHT"] = true;

// Move caret right one word extending selection to new caret position.
$defConsts["wxSTC_CMD_WORDRIGHTEXTEND"] = true;

// Move caret to first position on line.
$defConsts["wxSTC_CMD_HOME"] = true;

// Move caret to first position on line extending selection to new caret position.
$defConsts["wxSTC_CMD_HOMEEXTEND"] = true;

// Move caret to last position on line.
$defConsts["wxSTC_CMD_LINEEND"] = true;

// Move caret to last position on line extending selection to new caret position.
$defConsts["wxSTC_CMD_LINEENDEXTEND"] = true;

// Move caret to first position in document.
$defConsts["wxSTC_CMD_DOCUMENTSTART"] = true;

// Move caret to first position in document extending selection to new caret position.
$defConsts["wxSTC_CMD_DOCUMENTSTARTEXTEND"] = true;

// Move caret to last position in document.
$defConsts["wxSTC_CMD_DOCUMENTEND"] = true;

// Move caret to last position in document extending selection to new caret position.
$defConsts["wxSTC_CMD_DOCUMENTENDEXTEND"] = true;

// Move caret one page up.
$defConsts["wxSTC_CMD_PAGEUP"] = true;

// Move caret one page up extending selection to new caret position.
$defConsts["wxSTC_CMD_PAGEUPEXTEND"] = true;

// Move caret one page down.
$defConsts["wxSTC_CMD_PAGEDOWN"] = true;

// Move caret one page down extending selection to new caret position.
$defConsts["wxSTC_CMD_PAGEDOWNEXTEND"] = true;

// Switch from insert to overtype mode or the reverse.
$defConsts["wxSTC_CMD_EDITTOGGLEOVERTYPE"] = true;

// Cancel any modes such as call tip or auto-completion list display.
$defConsts["wxSTC_CMD_CANCEL"] = true;

// Delete the selection or if no selection, the character before the caret.
$defConsts["wxSTC_CMD_DELETEBACK"] = true;

// If selection is empty or all on one line replace the selection with a tab character.
// If more than one line selected, indent the lines.
$defConsts["wxSTC_CMD_TAB"] = true;

// Dedent the selected lines.
$defConsts["wxSTC_CMD_BACKTAB"] = true;

// Insert a new line, may use a CRLF, CR or LF depending on EOL mode.
$defConsts["wxSTC_CMD_NEWLINE"] = true;

// Insert a Form Feed character.
$defConsts["wxSTC_CMD_FORMFEED"] = true;

// Move caret to before first visible character on line.
// If already there move to first character on line.
$defConsts["wxSTC_CMD_VCHOME"] = true;

// Like VCHome but extending selection to new caret position.
$defConsts["wxSTC_CMD_VCHOMEEXTEND"] = true;

// Magnify the displayed text by increasing the sizes by"] = true; point.
$defConsts["wxSTC_CMD_ZOOMIN"] = true;

// Make the displayed text smaller by decreasing the sizes by"] = true; point.
$defConsts["wxSTC_CMD_ZOOMOUT"] = true;

// Delete the word to the left of the caret.
$defConsts["wxSTC_CMD_DELWORDLEFT"] = true;

// Delete the word to the right of the caret.
$defConsts["wxSTC_CMD_DELWORDRIGHT"] = true;

// Delete the word to the right of the caret, but not the trailing non-word characters.
$defConsts["wxSTC_CMD_DELWORDRIGHTEND"] = true;

// Cut the line containing the caret.
$defConsts["wxSTC_CMD_LINECUT"] = true;

// Delete the line containing the caret.
$defConsts["wxSTC_CMD_LINEDELETE"] = true;

// Switch the current line with the previous.
$defConsts["wxSTC_CMD_LINETRANSPOSE"] = true;

// Duplicate the current line.
$defConsts["wxSTC_CMD_LINEDUPLICATE"] = true;

// Transform the selection to lower case.
$defConsts["wxSTC_CMD_LOWERCASE"] = true;

// Transform the selection to upper case.
$defConsts["wxSTC_CMD_UPPERCASE"] = true;

// Scroll the document down, keeping the caret visible.
$defConsts["wxSTC_CMD_LINESCROLLDOWN"] = true;

// Scroll the document up, keeping the caret visible.
$defConsts["wxSTC_CMD_LINESCROLLUP"] = true;

// Delete the selection or if no selection, the character before the caret.
// Will not delete the character before at the start of a line.
$defConsts["wxSTC_CMD_DELETEBACKNOTLINE"] = true;

// Move caret to first position on display line.
$defConsts["wxSTC_CMD_HOMEDISPLAY"] = true;

// Move caret to first position on display line extending selection to
// new caret position.
$defConsts["wxSTC_CMD_HOMEDISPLAYEXTEND"] = true;

// Move caret to last position on display line.
$defConsts["wxSTC_CMD_LINEENDDISPLAY"] = true;

// Move caret to last position on display line extending selection to new
// caret position.
$defConsts["wxSTC_CMD_LINEENDDISPLAYEXTEND"] = true;

// These are like their namesakes Home(Extend)?, LineEnd(Extend)?, VCHome(Extend)?
// except they behave differently when word-wrap is enabled:
// They go first to the start / end of the display line, like (Home|LineEnd)Display
// The difference is that, the cursor is already at the point, it goes on to the start
// or end of the document line, as appropriate for (Home|LineEnd|VCHome)(Extend)?.
$defConsts["wxSTC_CMD_HOMEWRAP"] = true;
$defConsts["wxSTC_CMD_HOMEWRAPEXTEND"] = true;
$defConsts["wxSTC_CMD_LINEENDWRAP"] = true;
$defConsts["wxSTC_CMD_LINEENDWRAPEXTEND"] = true;
$defConsts["wxSTC_CMD_VCHOMEWRAP"] = true;
$defConsts["wxSTC_CMD_VCHOMEWRAPEXTEND"] = true;

// Copy the line containing the caret.
$defConsts["wxSTC_CMD_LINECOPY"] = true;

// Move to the previous change in capitalisation.
$defConsts["wxSTC_CMD_WORDPARTLEFT"] = true;

// Move to the previous change in capitalisation extending selection
// to new caret position.
$defConsts["wxSTC_CMD_WORDPARTLEFTEXTEND"] = true;

// Move to the change next in capitalisation.
$defConsts["wxSTC_CMD_WORDPARTRIGHT"] = true;

// Move to the next change in capitalisation extending selection
// to new caret position.
$defConsts["wxSTC_CMD_WORDPARTRIGHTEXTEND"] = true;

// Delete back from the current position to the start of the line.
$defConsts["wxSTC_CMD_DELLINELEFT"] = true;

// Delete forwards from the current position to the end of the line.
$defConsts["wxSTC_CMD_DELLINERIGHT"] = true;

// Move caret between paragraphs (delimited by empty lines).
$defConsts["wxSTC_CMD_PARADOWN"] = true;
$defConsts["wxSTC_CMD_PARADOWNEXTEND"] = true;
$defConsts["wxSTC_CMD_PARAUP"] = true;
$defConsts["wxSTC_CMD_PARAUPEXTEND"] = true;

// Move caret down one line, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_LINEDOWNRECTEXTEND"] = true;

// Move caret up one line, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_LINEUPRECTEXTEND"] = true;

// Move caret left one character, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_CHARLEFTRECTEXTEND"] = true;

// Move caret right one character, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_CHARRIGHTRECTEXTEND"] = true;

// Move caret to first position on line, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_HOMERECTEXTEND"] = true;

// Move caret to before first visible character on line.
// If already there move to first character on line.
// In either case, extend rectangular selection to new caret position.
$defConsts["wxSTC_CMD_VCHOMERECTEXTEND"] = true;

// Move caret to last position on line, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_LINEENDRECTEXTEND"] = true;

// Move caret one page up, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_PAGEUPRECTEXTEND"] = true;

// Move caret one page down, extending rectangular selection to new caret position.
$defConsts["wxSTC_CMD_PAGEDOWNRECTEXTEND"] = true;

// Move caret to top of page, or one page up if already at top of page.
$defConsts["wxSTC_CMD_STUTTEREDPAGEUP"] = true;

// Move caret to top of page, or one page up if already at top of page, extending selection to new caret position.
$defConsts["wxSTC_CMD_STUTTEREDPAGEUPEXTEND"] = true;

// Move caret to bottom of page, or one page down if already at bottom of page.
$defConsts["wxSTC_CMD_STUTTEREDPAGEDOWN"] = true;

// Move caret to bottom of page, or one page down if already at bottom of page, extending selection to new caret position.
$defConsts["wxSTC_CMD_STUTTEREDPAGEDOWNEXTEND"] = true;

// Move caret left one word, position cursor at end of word.
$defConsts["wxSTC_CMD_WORDLEFTEND"] = true;

// Move caret left one word, position cursor at end of word, extending selection to new caret position.
$defConsts["wxSTC_CMD_WORDLEFTENDEXTEND"] = true;

// Move caret right one word, position cursor at end of word.
$defConsts["wxSTC_CMD_WORDRIGHTEND"] = true;

// Move caret right one word, position cursor at end of word, extending selection to new caret position.
$defConsts["wxSTC_CMD_WORDRIGHTENDEXTEND"] = true;

?>
