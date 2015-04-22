#if 0
static unsigned char sbl[] = {
	0x5a, 0x01, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x43, 0x5e, 0x4f, 0x23, 0xb6, 0xd4,
	0x2c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x4b, 0x23,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x23, 0x40, 0xfa,
	0xc1, 0x05, 0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0a,
	0x80, 0x17, 0x0b, 0x5e, 0x01, 0x00, 0x9b, 0xde,
	0x60, 0x00, 0x2f, 0x31, 0x4b, 0x59, 0x03, 0x59,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x04, 0x00,
	0x40, 0xfa, 0xc1, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfc, 0x80, 0x01, 0xff, 0xef,
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x5e, 0x00, 0x04, 0x1c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x14, 0x23, 0x43, 0xfa,
	0xc0, 0x05, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x02,
	0x20, 0x00, 0x40, 0xfa, 0xc1, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x08, 0xfc, 0x80, 0x01,
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01,
	0x00, 0x00, 0x64, 0x80, 0x10, 0xfe, 0xc3, 0x05,
	0xd9, 0x09, 0x10, 0xfe, 0xc0, 0x05, 0xcc, 0x09,
	0x08, 0x27, 0x03, 0x23, 0x40, 0xfa, 0xc1, 0x05,
	0x01, 0x23, 0x0c, 0x27, 0x40, 0xfa, 0xc1, 0x05,
	0x04, 0x23, 0x43, 0xfa, 0xc0, 0x05, 0x00, 0x00,
	0xd6, 0xd4, 0x90, 0x45, 0x63, 0x5e, 0xb6, 0xd4,
	0x8b, 0xd4, 0xd6, 0xd4, 0x80, 0x45, 0x00, 0x00,
	0x80, 0x45, 0x48, 0xfc, 0x80, 0x01, 0xda, 0xba,
	0x01, 0x19, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x03,
	0x28, 0x00, 0x40, 0xfa, 0xc1, 0x05, 0x00, 0x5e,
	0x00, 0x01, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x03,
	0x2c, 0x00, 0x40, 0xfa, 0xc1, 0x05, 0x90, 0x45,
	0x01, 0x21, 0xd8, 0xfc, 0x89, 0x09, 0xe0, 0x6f,
	0xc8, 0x96, 0x88, 0xfb, 0x89, 0x03, 0x00, 0x10,
	0x00, 0x00, 0xaa, 0x91, 0x8b, 0xff, 0x9b, 0x0f,
	0x8f, 0xff, 0x80, 0xef, 0x48, 0xfc, 0x82, 0x01,
	0x00, 0x03, 0x00, 0x00, 0x08, 0xfc, 0x80, 0x01,
	0x00, 0x00, 0x00, 0x10, 0x09, 0xf9, 0x99, 0x01,
	0x40, 0xfa, 0xc2, 0x05, 0x48, 0xfc, 0x80, 0x01,
	0x00, 0x03, 0x04, 0x00, 0x41, 0xfa, 0xc0, 0x05,
	0x48, 0xfc, 0x80, 0x01, 0x08, 0x00, 0xf4, 0x21,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x18, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x80, 0x45, 0x5a, 0x0a,
	0x00, 0x80, 0x00, 0x00,
};
#endif

#if 0
/* change_uart_speed_3M_none1_stop_mode_from_24M.bin */
/* OLD ROM 24.0Mhz clock */
static unsigned char sbl[] = {
	0x5a, 0x01, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x43, 0x5e, 0x4f, 0x23, 0xb6, 0xd4,
	0x2c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x4b, 0x23,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x23, 0x40, 0xfa,
	0xc1, 0x05, 0x40, 0xfa, 0xc1, 0x05, 0x40, 0xfa,
	0xc1, 0x05, 0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0a,
	0x80, 0x17, 0x0b, 0x5e, 0x01, 0x00, 0x9b, 0xde,
	0x62, 0x00, 0x2f, 0x31, 0x4b, 0x59, 0x03, 0x59,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x04, 0x00,
	0x40, 0xfa, 0xc1, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfc, 0x80, 0x01, 0xff, 0xef,
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x5e, 0x00, 0x04, 0x1c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x14, 0x23, 0x43, 0xfa,
	0xc0, 0x05, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x02,
	0x20, 0x00, 0x40, 0xfa, 0xc1, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x08, 0xfc, 0x80, 0x01,
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01,
	0x00, 0x00, 0x6a, 0x80, 0x10, 0xfe, 0xc3, 0x05,
	0xd9, 0x09, 0x10, 0xfe, 0xc0, 0x05, 0xcc, 0x09,
	0x08, 0x27, 0x03, 0x23, 0x40, 0xfa, 0xc1, 0x05,
	0x01, 0x23, 0x0c, 0x27, 0x40, 0xfa, 0xc1, 0x05,
	0x00, 0x5e, 0x80, 0x00, 0x04, 0x27, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x00, 0xd6, 0xd4, 0x90, 0x45,
	0x63, 0x5e, 0xb6, 0xd4, 0x8b, 0xd4, 0xd6, 0xd4,
	0x80, 0x45, 0x00, 0x00, 0x80, 0x45, 0x48, 0xfc,
	0x80, 0x01, 0xda, 0xba, 0x01, 0x19, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x28, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x5e, 0x00, 0x01, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x2c, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x90, 0x45, 0x01, 0x21, 0xd8, 0xfc,
	0x89, 0x09, 0xe0, 0x6f, 0xc8, 0x96, 0x88, 0xfb,
	0x89, 0x03, 0x00, 0x10, 0x00, 0x00, 0xaa, 0x91,
	0x8b, 0xff, 0x9b, 0x0f, 0x8f, 0xff, 0x80, 0xef,
	0x48, 0xfc, 0x82, 0x01, 0x00, 0x03, 0x00, 0x00,
	0x08, 0xfc, 0x80, 0x01, 0x00, 0x00, 0x00, 0x10,
	0x09, 0xf9, 0x99, 0x01, 0x40, 0xfa, 0xc2, 0x05,
	0x48, 0xfc, 0x80, 0x01, 0x00, 0x03, 0x04, 0x00,
	0x41, 0xfa, 0xc0, 0x05, 0x48, 0xfc, 0x80, 0x01,
	0x08, 0x00, 0xf4, 0x21, 0x48, 0xfc, 0x81, 0x01,
	0x00, 0x03, 0x18, 0x00, 0x40, 0xfa, 0xc1, 0x05,
	0x80, 0x45, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x03,
	0x04, 0x00, 0x40, 0xfa, 0xc1, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x80, 0x01,
	0xff, 0xef, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x48, 0xfc, 0x81, 0x01,
	0x00, 0x03, 0x18, 0x00, 0x40, 0xfa, 0xc1, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xfe,
	0xb0, 0x03, 0x40, 0x17, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x45, 0x5a, 0x0a, 0x00, 0x80, 0x00, 0x00,
};
#endif

#if 0
/* ROM2_change_UART_to_3M_use_24.5M.bin */
/* NEW ROM DBD1 this is for main clock 24576000Hz */
static unsigned char sbl[] = {
	0x5a, 0x01, 0x76, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x43, 0x5e, 0x4f, 0x23, 0xb6, 0xd4,
	0x2c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x4b, 0x23,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x23, 0x40, 0xfa,
	0xc1, 0x05, 0x40, 0xfa, 0xc1, 0x05, 0x40, 0xfa,
	0xc1, 0x05, 0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01,
	0x73, 0x0a, 0xb0, 0x17, 0x48, 0xfc, 0x80, 0x01,
	0x02, 0x00, 0x10, 0x13, 0x0b, 0x5e, 0x01, 0x00,
	0x40, 0x5e, 0x9b, 0xde, 0x3c, 0x00, 0x4b, 0x59,
	0x03, 0x59, 0x30, 0x31, 0x48, 0xfc, 0x80, 0x01,
	0x02, 0x00, 0xd4, 0x12, 0x63, 0x59, 0x43, 0x59,
	0x9b, 0xde, 0x31, 0x00, 0x23, 0x59, 0x03, 0x59,
	0x40, 0x5e, 0x00, 0x5e, 0x00, 0x04, 0x1c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x14, 0x23, 0x43, 0xfa,
	0xc0, 0x05, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x02,
	0x20, 0x00, 0x40, 0xfa, 0xc1, 0x01, 0x08, 0xfc,
	0x80, 0x01, 0x00, 0x00, 0x00, 0x80, 0x40, 0xfa,
	0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01, 0x00, 0x00,
	0x62, 0x80, 0x10, 0xfe, 0xc3, 0x05, 0x52, 0x0a,
	0x10, 0xfe, 0xc0, 0x05, 0x1e, 0x0a, 0x04, 0x23,
	0x43, 0xfa, 0xc0, 0x05, 0x03, 0x23, 0x08, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x01, 0x23, 0x0c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0xd6, 0xd4, 0x90, 0x45,
	0x63, 0x5e, 0x00, 0x00, 0x80, 0x45, 0x47, 0x5e,
	0xf5, 0x58, 0x02, 0x44, 0xb6, 0xd4, 0x82, 0xd4,
	0xd6, 0xd4, 0x67, 0x5e, 0x01, 0x09, 0x48, 0xfc,
	0x80, 0x01, 0xda, 0xba, 0x01, 0x19, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x28, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x5e, 0x00, 0x01, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x2c, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x90, 0x45, 0x01, 0x21, 0x5a, 0x0a,
	0x00, 0x80, 0x00, 0x00,
};
#endif

#if 0
/* ROM2_change_UART_to_3M_use_9.6M.bin */
/* new ROM for main clock 9.6 Mhz */
static unsigned char sbl[] = {
	0x5a, 0x01, 0x82, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x43, 0x5e, 0x4f, 0x23, 0xb6, 0xd4,
	0x2c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x4b, 0x23,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x23, 0x40, 0xfa,
	0xc1, 0x05, 0x40, 0xfa, 0xc1, 0x05, 0x40, 0xfa,
	0xc1, 0x05, 0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01,
	0x73, 0x0a, 0xb0, 0x17, 0x48, 0xfc, 0x81, 0x01,
	0x00, 0x03, 0x04, 0x00, 0x40, 0xfa, 0xc1, 0x01,
	0x08, 0xfc, 0x80, 0x01, 0x00, 0x10, 0x00, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01,
	0x02, 0x00, 0x10, 0x13, 0x0b, 0x5e, 0x01, 0x00,
	0x40, 0x5e, 0x9b, 0xde, 0x3c, 0x00, 0x4b, 0x59,
	0x03, 0x59, 0x7c, 0x31, 0x48, 0xfc, 0x80, 0x01,
	0x02, 0x00, 0xd4, 0x12, 0x63, 0x59, 0x43, 0x59,
	0x9b, 0xde, 0x31, 0x00, 0x23, 0x59, 0x03, 0x59,
	0x40, 0x5e, 0x00, 0x5e, 0x00, 0x04, 0x1c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x14, 0x23, 0x43, 0xfa,
	0xc0, 0x05, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x02,
	0x20, 0x00, 0x40, 0xfa, 0xc1, 0x01, 0x08, 0xfc,
	0x80, 0x01, 0x00, 0x00, 0x00, 0x80, 0x40, 0xfa,
	0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01, 0x00, 0x00,
	0x6e, 0x80, 0x10, 0xfe, 0xc3, 0x05, 0x52, 0x0a,
	0x10, 0xfe, 0xc0, 0x05, 0x1e, 0x0a, 0x04, 0x23,
	0x43, 0xfa, 0xc0, 0x05, 0x03, 0x23, 0x08, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x01, 0x23, 0x0c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0xd6, 0xd4, 0x90, 0x45,
	0x63, 0x5e, 0x00, 0x00, 0x80, 0x45, 0x47, 0x5e,
	0xf5, 0x58, 0x02, 0x44, 0xb6, 0xd4, 0x82, 0xd4,
	0xd6, 0xd4, 0x67, 0x5e, 0x01, 0x09, 0x48, 0xfc,
	0x80, 0x01, 0xda, 0xba, 0x01, 0x19, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x28, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x5e, 0x00, 0x01, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x2c, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x90, 0x45, 0x01, 0x21, 0x5a, 0x0a,
	0x00, 0x80, 0x00, 0x00,
};
#endif

#if 0
/* ROM2_change_UART_to_3M_use_24.0M.bin */
/* new ROM dbd1 main clcok 24.0 Mhz */
static unsigned char sbl[] = {
	0x5a, 0x01, 0x76, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x43, 0x5e, 0x4f, 0x23, 0xb6, 0xd4,
	0x2c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x4b, 0x23,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x23, 0x40, 0xfa,
	0xc1, 0x05, 0x40, 0xfa, 0xc1, 0x05, 0x40, 0xfa,
	0xc1, 0x05, 0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01,
	0x73, 0x0a, 0xb0, 0x17, 0x48, 0xfc, 0x80, 0x01,
	0x02, 0x00, 0x10, 0x13, 0x0b, 0x5e, 0x01, 0x00,
	0x40, 0x5e, 0x9b, 0xde, 0x3c, 0x00, 0x4b, 0x59,
	0x03, 0x59, 0x31, 0x31, 0x48, 0xfc, 0x80, 0x01,
	0x02, 0x00, 0xd4, 0x12, 0x63, 0x59, 0x43, 0x59,
	0x9b, 0xde, 0x31, 0x00, 0x23, 0x59, 0x03, 0x59,
	0x40, 0x5e, 0x00, 0x5e, 0x00, 0x04, 0x1c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x14, 0x23, 0x43, 0xfa,
	0xc0, 0x05, 0x48, 0xfc, 0x81, 0x01, 0x00, 0x02,
	0x20, 0x00, 0x40, 0xfa, 0xc1, 0x01, 0x08, 0xfc,
	0x80, 0x01, 0x00, 0x00, 0x00, 0x80, 0x40, 0xfa,
	0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01, 0x00, 0x00,
	0x62, 0x80, 0x10, 0xfe, 0xc3, 0x05, 0x52, 0x0a,
	0x10, 0xfe, 0xc0, 0x05, 0x1e, 0x0a, 0x04, 0x23,
	0x43, 0xfa, 0xc0, 0x05, 0x03, 0x23, 0x08, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x01, 0x23, 0x0c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0xd6, 0xd4, 0x90, 0x45,
	0x63, 0x5e, 0x00, 0x00, 0x80, 0x45, 0x47, 0x5e,
	0xf5, 0x58, 0x02, 0x44, 0xb6, 0xd4, 0x82, 0xd4,
	0xd6, 0xd4, 0x67, 0x5e, 0x01, 0x09, 0x48, 0xfc,
	0x80, 0x01, 0xda, 0xba, 0x01, 0x19, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x28, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x00, 0x5e, 0x00, 0x01, 0x48, 0xfc,
	0x81, 0x01, 0x00, 0x03, 0x2c, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x90, 0x45, 0x01, 0x21, 0x5a, 0x0a,
	0x00, 0x80, 0x00, 0x00,
};
#endif

#if 0
/* ROM2_change_UART_to_3M_use_19.2M.bin */
/* NEW ROM DBD1 main clock 19.2 MHz */
static unsigned char sbl[] = {
	0x5a, 0x01, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x43, 0x5e, 0x4f, 0x23, 0xb6, 0xd4,
	0x2c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x4b, 0x23,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x23, 0x40, 0xfa,
	0xc1, 0x05, 0x40, 0xfa, 0xc1, 0x05, 0x40, 0xfa,
	0xc1, 0x05, 0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0a,
	0x80, 0x17, 0x48, 0xfc, 0x80, 0x01, 0x02, 0x00,
	0x10, 0x13, 0x0b, 0x5e, 0x01, 0x00, 0x40, 0x5e,
	0x9b, 0xde, 0x42, 0x00, 0x4b, 0x59, 0x03, 0x59,
	0x3d, 0x31, 0x48, 0xfc, 0x80, 0x01, 0x02, 0x00,
	0xd4, 0x12, 0x63, 0x59, 0x43, 0x59, 0x9b, 0xde,
	0x37, 0x00, 0x23, 0x59, 0x03, 0x59, 0x40, 0x5e,
	0x00, 0x5e, 0x00, 0x04, 0x1c, 0x27, 0x40, 0xfa,
	0xc1, 0x05, 0x14, 0x23, 0x43, 0xfa, 0xc0, 0x05,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x02, 0x20, 0x00,
	0x40, 0xfa, 0xc1, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0xfc, 0x80, 0x01, 0x00, 0x00,
	0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x40, 0xfa,
	0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01, 0x00, 0x00,
	0x6b, 0x80, 0x10, 0xfe, 0xc3, 0x05, 0x52, 0x0a,
	0x10, 0xfe, 0xc0, 0x05, 0x1e, 0x0a, 0x04, 0x23,
	0x43, 0xfa, 0xc0, 0x05, 0x03, 0x23, 0x08, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x01, 0x23, 0x0c, 0x27,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x00, 0xd6, 0xd4,
	0x90, 0x45, 0x63, 0x5e, 0x00, 0x00, 0x80, 0x45,
	0x47, 0x5e, 0xf5, 0x58, 0x02, 0x44, 0xb6, 0xd4,
	0x82, 0xd4, 0xd6, 0xd4, 0x67, 0x5e, 0x01, 0x09,
	0x48, 0xfc, 0x80, 0x01, 0xda, 0xba, 0x01, 0x19,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x28, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x5e, 0x00, 0x01,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x2c, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x90, 0x45, 0x01, 0x21,
	0x5a, 0x0a, 0x00, 0x80, 0x00, 0x00,
};
#endif

#if 1
/* ROM2_change_UART_to_1M_use_32768_clk.h */
static unsigned char sbl[] = {
	0x5a, 0x01, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x48, 0xfc, 0x88, 0x01, 0x00, 0x00,
	0xaf, 0x0b, 0x23, 0x10, 0x00, 0x00, 0x80, 0x45,
	0x43, 0x5e, 0xb6, 0xd4, 0x4f, 0x23, 0x2c, 0x2b,
	0x40, 0xfa, 0xc2, 0x05, 0x4b, 0x23, 0x40, 0xfa,
	0xc2, 0x05, 0x00, 0x23, 0x40, 0xfa, 0xc2, 0x05,
	0x40, 0xfa, 0xc2, 0x05, 0x40, 0xfa, 0xc2, 0x05,
	0x24, 0x23, 0x43, 0xfa, 0xc0, 0x01, 0x73, 0x0a,
	0xb0, 0x17, 0x48, 0xfc, 0x82, 0x01, 0x00, 0x03,
	0x04, 0x00, 0x40, 0xfa, 0xc2, 0x01, 0x08, 0xfc,
	0x80, 0x01, 0x00, 0x10, 0x00, 0x00, 0x40, 0xfa,
	0xc2, 0x05, 0x48, 0xfc, 0x80, 0x01, 0x02, 0x00,
	0x10, 0x13, 0x63, 0x59, 0x40, 0x5e, 0x9b, 0xde,
	0x43, 0x00, 0x0a, 0x5e, 0x01, 0x00, 0x28, 0x59,
	0x03, 0x59, 0x48, 0xfc, 0x80, 0x01, 0x00, 0x03,
	0x08, 0x00, 0x43, 0xfa, 0xc0, 0x05, 0x48, 0xfc,
	0x80, 0x01, 0x02, 0x00, 0xd4, 0x12, 0x63, 0x59,
	0x40, 0x5e, 0x9b, 0xde, 0x31, 0x00, 0x43, 0x59,
	0x23, 0x59, 0x03, 0x59, 0x00, 0x5e, 0x00, 0x04,
	0x1c, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x14, 0x2b,
	0x43, 0xfa, 0xc2, 0x05, 0x48, 0xfc, 0x81, 0x01,
	0x00, 0x02, 0x20, 0x00, 0x40, 0xfa, 0xc1, 0x01,
	0x08, 0xfc, 0x80, 0x01, 0x00, 0x00, 0x00, 0x80,
	0x40, 0xfa, 0xc1, 0x05, 0x48, 0xfc, 0x80, 0x01,
	0x00, 0x00, 0x7b, 0x80, 0x10, 0xfe, 0xc3, 0x05,
	0x52, 0x0a, 0x10, 0xfe, 0xc0, 0x05, 0x1e, 0x0a,
	0x04, 0x23, 0x43, 0xfa, 0xc0, 0x05, 0x03, 0x23,
	0x08, 0x27, 0x40, 0xfa, 0xc1, 0x05, 0x01, 0x23,
	0x0c, 0x2b, 0x40, 0xfa, 0xc2, 0x05, 0xd6, 0xd4,
	0x90, 0x45, 0x63, 0x5e, 0x00, 0x00, 0x80, 0x45,
	0x47, 0x5e, 0xf5, 0x58, 0x02, 0x44, 0xb6, 0xd4,
	0x82, 0xd4, 0xd6, 0xd4, 0x67, 0x5e, 0x01, 0x09,
	0x48, 0xfc, 0x80, 0x01, 0xda, 0xba, 0x01, 0x19,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x28, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x00, 0x5e, 0x00, 0x01,
	0x48, 0xfc, 0x81, 0x01, 0x00, 0x03, 0x2c, 0x00,
	0x40, 0xfa, 0xc1, 0x05, 0x90, 0x45, 0x01, 0x21,
	0x5a, 0x0a, 0x00, 0x80, 0x00, 0x00,
};
#endif
