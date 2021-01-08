//French hex mapping by Youdroid https://github.com/youdroid/qmk_firmware/tree/abfede6fac015305ab03b832ffc962b5da6c8396/keyboards/xd75/keymaps/french

#ifndef _KEYMAP_FRENCH_H_
#define _KEYMAP_FRENCH_H_

enum french_key {

	FR_EMPT			= 0x00,
	FR_TRANS,
	FR_Q			= 0x04,
	FR_B,
	FR_C,
	FR_D,
	FR_E,
	FR_F,
	FR_G,
	FR_H,
	FR_I,
	FR_J,
	FR_K,
	FR_L,
	FR_COMM,		/* 0x10 */
	FR_N,
	FR_O,
	FR_P,
	FR_A,
	FR_R,
	FR_S,
	FR_T,
	FR_U,
	FR_V,
	FR_Z,
	FR_X,
	FR_Y,
	FR_W,
	FR_AMP,
	FR_EACU,
	FR_QUOT,		/* 0x20 */
	FR_APOS,
	FR_LPAR,
	FR_MINS,
	FR_EGRV,
	FR_UNDS,
	FR_CCED,
	FR_AGRV,
	FR_ENTR,
	FR_ESC,
	FR_BSPC,
	FR_TAB,
	FR_SPAC,
	FR_RPAR,
	FR_EQUA,
	FR_HAT,
	FR_DLR,			/* 0x30 */
	FR_AST			=0x32,
	FR_M,
	FR_UGRV,
	FR_SCLN			=0x36,
	FR_COLN,
	FR_EXCL,
	FR_CAPL,
	FR_F1,
	FR_F2,
	FR_F3,
	FR_F4,
	FR_F5,
	FR_F6,
	FR_F7,			/* 0x40 */
	FR_F8,
	FR_F9,
	FR_F10,
	FR_F11,
	FR_F12,
	FR_PSCR,
	FR_INST			=0x49,
	FR_HOME,
	FR_PGUP,
    	FR_DEL,
    	FR_END,
    	FR_PGDN,
    	FR_RIGT,
    	FR_LEFT,		/* 0x50 */
    	FR_DOWN,
    	FR_UP,
	FR_NUML,
	FR_SLSH,		/* KEYPAD */
	FR_MULT,
	FR_MOIN,
	FR_PLUS,
	FR_ENTK,
	FR_1,
	FR_2,
	FR_3,
	FR_4,
	FR_5,
	FR_6,
	FR_7,
	FR_8,			/* 0x60 */
	FR_9,
	FR_0,
	FR_DOT,
	FR_LESS,
	FR_EQ			=0x67 /* END KEYPAD */,
	FR_F13,
    	FR_F14,
    	FR_F15,
    	FR_F16,
    	FR_F17,
    	FR_F18,
    	FR_F19,
    	FR_F20,
    	FR_F21,			/* 0x70 */
    	FR_F22,
    	FR_F23,
    	FR_F24,
	FR_MENU			=0x76
};


enum french_control_touch{

	/* Modifiers */
	FR_LCTR			= 0xE0,
    	FR_LSFT,
    	FR_LALT,
    	FR_LCMD,
    	FR_RCTR,
    	FR_RSFT,
    	FR_ALGR,
    	FR_RCMD
};

enum french_media_key{
	/* System Control */
    	FR_SYSTEM_POWER		= 0xA5,
    	FR_SYSTEM_SLEEP,
    	FR_SYSTEM_WAKE,

    	/* Media Control */
    	FR_MUTE,
    	FR_MVUP,
    	FR_MVDN,
    	FR_MNXT,
    	FR_MPRV,
    	FR_MSTP,
    	FR_MPLY,
    	FR_MEDIA_SELECT,
    	FR_MEDIA_EJECT,
    	FR_MAIL,
    	FR_CALCULATOR,
    	FR_MY_COMPUTER,
    	FR_WWW_SEARCH,
    	FR_WWW_HOME,
    	FR_WWW_BACK,
    	FR_WWW_FORWARD,
    	FR_WWW_STOP,
    	FR_WWW_REFRESH,
    	FR_WWW_FAVORITES,
    	FR_MEDIA_FAST_FORWARD,
    	FR_MEDIA_REWIND		/* 0xBC */
};

#endif
