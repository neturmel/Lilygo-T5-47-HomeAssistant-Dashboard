const uint32_t exhaustfanoff_width = 100;
const uint32_t exhaustfanoff_height = 100;
const uint8_t exhaustfanoff_data[(100*100)/2] = {
0xFF, 0x7E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xE7, 0xFF, 
	0xCF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFC, 
	0x2E, 0x00, 0x10, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x01, 0x00, 0xE2, 
	0x07, 0x20, 0xEC, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xCE, 0x02, 0x70, 
	0x03, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x30, 
	0x00, 0xE1, 0xFF, 0xFF, 0x9F, 0x46, 0x96, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x69, 0x64, 0xF9, 0xFF, 0xFF, 0x1E, 0x00, 
	0x00, 0xE2, 0xFF, 0xDF, 0x03, 0x00, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0x00, 0x00, 0x30, 0xFD, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x2E, 0x00, 0x10, 0x00, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0x9C, 0x88, 0x67, 0x76, 0x88, 0xC9, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x00, 0x01, 0x00, 0xE2, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x06, 0x20, 0xC9, 0x19, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAD, 0x47, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x74, 0xDA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x91, 0x9C, 0x02, 0x60, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x02, 0xB0, 0xFF, 0xBF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x48, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x84, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xFB, 0xFF, 0x0B, 0x20, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xDF, 0x02, 0xE3, 0xFF, 0xFF, 0x01, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x14, 0x00, 0x00, 0x00, 0x21, 0x74, 0x98, 0xAA, 0xAA, 0x89, 0x47, 0x12, 0x00, 0x00, 0x00, 0x41, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x10, 0xFF, 0xFF, 0x3E, 0x20, 0xFD, 0x2E, 0x00, 
	0x00, 0xE2, 0xEF, 0x02, 0xD2, 0xFF, 0xEF, 0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAE, 0x03, 0x00, 0x00, 0x42, 0xB7, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x7B, 0x24, 0x00, 0x00, 0x30, 0xEA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 0xFE, 0xFF, 0x2D, 0x20, 0xFE, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x04, 0x60, 0xFF, 0x5F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x03, 0x00, 0x10, 0x95, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x59, 0x01, 0x00, 0x30, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF5, 0xFF, 0x06, 0x40, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x0B, 0x00, 0x53, 0x03, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x04, 0x00, 0x10, 0xD8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 0x66, 0x76, 0x87, 0xDA, 0xFF, 0xFF, 0xFF, 0xFF, 0x8D, 0x01, 0x00, 0x40, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0x30, 0x35, 0x00, 0xB0, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x10, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xB6, 0xFF, 0xFF, 0xFF, 0x7E, 0x01, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xF7, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x39, 0x01, 0x31, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x00, 0x00, 0xD6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE4, 0xFF, 0xFF, 0xFF, 0x6D, 0x00, 0x00, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x13, 0x10, 0x93, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xBC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x01, 0x00, 0xC5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x00, 0x60, 0xAA, 0xAA, 0x89, 0x47, 0x02, 0x00, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x5C, 0x00, 0x10, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xCB, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x90, 0xFF, 0xFF, 0xDF, 0xFE, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0x19, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0x20, 0xFC, 0xFF, 0x7E, 0x02, 0x30, 0xFC, 0xFF, 0xFF, 0x8F, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x02, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xD3, 0xFF, 0xBF, 0x02, 0x00, 0x00, 0xB0, 0xFF, 0xFF, 0x7F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x50, 0xFF, 0xFF, 0x06, 0x00, 0x30, 0x01, 0x20, 0xFE, 0xFF, 0x6F, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF7, 0xFF, 0x3C, 0x00, 0x20, 0xFC, 0x2E, 0x00, 0xFB, 0xFF, 0x5F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x20, 0xFF, 0xFF, 0xFF, 0xDF, 0x89, 0xEB, 0xFF, 0x7F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x70, 0xFF, 0xCF, 0x01, 0x00, 0xF6, 0xFF, 0x8F, 0x00, 0xF7, 0xFF, 0x4F, 0x00, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0x90, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x20, 0xFB, 0xFF, 0x07, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF5, 0xFF, 0x1B, 0x00, 0xA1, 0xFF, 0xFF, 0xDF, 0x00, 0xF2, 0xFF, 0x3F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF3, 0xFF, 0xFF, 0x5E, 0x00, 0x00, 0x00, 0xB0, 0xFF, 0x5F, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x30, 0xFF, 0xBF, 0x00, 0x20, 0xFD, 0xFF, 0xFF, 0xFF, 0x02, 0xD0, 0xFF, 0x2F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x0D, 0x00, 0xFB, 0xFF, 0xDF, 0x03, 0x00, 0x85, 0x02, 0x00, 0xFB, 0xFF, 0x03, 0x10, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xD2, 0xFF, 0x0B, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x90, 0xFF, 0x1F, 0x10, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x50, 0xFF, 0xFF, 0x2C, 0x00, 0x90, 0xFF, 0x3E, 0x00, 0xC1, 0xFF, 0x2D, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFC, 0xEF, 0x02, 0x30, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x40, 0xFF, 0x0F, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xD1, 0xFF, 0xBF, 0x01, 0x00, 0xFA, 0xFF, 0xDF, 0x02, 0x10, 0xFC, 0xCF, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x90, 0xFF, 0xBF, 0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1D, 0x10, 0xFF, 0x0F, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF7, 0xFF, 0x09, 0x00, 0xC1, 0xFF, 0xFF, 0xFF, 0x2D, 0x00, 0xF3, 0xFF, 0x09, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF5, 0xFF, 0x8F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xFB, 0x0F, 0x20, 0xFE, 0xFF, 0xFF, 0xFF, 0x0C, 0x10, 0xFD, 0x8F, 0x00, 0x30, 0xFD, 0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x60, 0xFF, 0x5F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xFC, 0xFF, 0xAF, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0x1F, 0x10, 0xFE, 0xFF, 0xFF, 0xFF, 0x08, 0x40, 0xFF, 0x09, 0x00, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A, 0x00, 0xFB, 0xCF, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x60, 0xFF, 0xFF, 0xDF, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0xC0, 0x1F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x02, 0x90, 0x9F, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xE2, 0xFF, 0x06, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xD1, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x60, 0x2F, 0x00, 0xFE, 0xFF, 0xFF, 0xCF, 0x00, 0xF0, 0x0B, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x70, 0xFF, 0x1D, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x3C, 0x00, 0xFE, 0xFF, 0xFF, 0x8F, 0x00, 0xB6, 0x00, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x20, 0xFF, 0x7F, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0x0A, 0x10, 0xFE, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x10, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x35, 0x00, 0xFF, 0xDE, 0xED, 0x4F, 0x00, 0x16, 0x00, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xFE, 0xEF, 0x01, 0xA0, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0x04, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2D, 0x00, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0x10, 0x00, 0x45, 0x23, 0x32, 0x04, 0x00, 0x00, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 0xFE, 0xFF, 0x08, 0x40, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xDF, 0x01, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8D, 0x02, 0x40, 0xFF, 0xFF, 0x1D, 0x10, 0xFD, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x00, 0x00, 0x10, 0x22, 0x22, 0x01, 0x00, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBD, 0x27, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x4F, 0x00, 0xF9, 0xFF, 0xAF, 0x67, 0xE9, 0xFF, 0xFF, 0x9F, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xEF, 0x04, 0x00, 0x50, 0xB9, 0xED, 0xDE, 0x9B, 0x04, 0x00, 0x40, 0xFE, 0xFF, 0xFF, 0xFF, 0xCF, 0x58, 0x01, 0x00, 0x00, 0x30, 0xFB, 0xFF, 0xFF, 0x9F, 0x00, 0xF4, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x2D, 0x20, 0xFD, 0xDF, 0x03, 0x00, 0x20, 0xF9, 0xFF, 0xFF, 0x08, 0x00, 0xE4, 0xFF, 0xFF, 0x2D, 0x00, 0x50, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x03, 0x00, 0xD2, 0xFF, 0xFF, 0xBF, 0x14, 0x00, 0x00, 0x00, 0x72, 0xFB, 0xFF, 0xFF, 0xFF, 0xDF, 0x02, 0xD2, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x0A, 0x40, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x30, 0xFB, 0xFF, 0x9F, 0x00, 0x30, 0xFE, 0xEF, 0x02, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x20, 0xFE, 0xBF, 0x03, 0x00, 0x00, 0x41, 0xD9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0xA0, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x07, 0x70, 0xFF, 0x0A, 0x00, 0x87, 0x03, 0x00, 0x50, 0xFD, 0xFF, 0x09, 0x00, 0xD3, 0x4F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x00, 0xC4, 0x06, 0x00, 0x00, 0xB5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x70, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x04, 0xB0, 0xFF, 0x06, 0x80, 0xFF, 0x9F, 0x01, 0x00, 0x71, 0xFD, 0xBF, 0x00, 0x20, 0x06, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x40, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xEF, 0x02, 0xE1, 0xFF, 0x03, 0xD0, 0xFF, 0xFF, 0x7E, 0x00, 0x00, 0x41, 0xF9, 0x1B, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0xC5, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x20, 0xFE, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xDF, 0x00, 0xF2, 0xFF, 0x01, 0xE1, 0xFF, 0xFF, 0xFF, 0x5D, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x10, 0x33, 0x12, 0x01, 0x00, 0x21, 0x43, 0x65, 0x87, 0xDA, 0xFF, 0xFF, 0x2F, 0x00, 0xFD, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xCF, 0x00, 0xF4, 0xDF, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0xFF, 0x4F, 0x00, 0xFC, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x9F, 0x00, 0xF7, 0xAF, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x02, 0x00, 0x00, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x10, 0x21, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x50, 0xFF, 0x7F, 0x00, 0xF9, 0xFF, 0x2E, 0x00, 
	0x03, 0xF5, 0xFF, 0x8F, 0x00, 0xF8, 0x8F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x48, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x50, 0xEF, 0xEE, 0xEE, 0xFF, 0xEE, 0xDE, 0xBC, 0x9A, 0x05, 0x00, 0xFB, 0x8F, 0x00, 0xF8, 0xFF, 0x5F, 0x30, 
	0x8D, 0xFD, 0xFF, 0x8F, 0x00, 0xF9, 0x7F, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0xB1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1B, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xF7, 0x9F, 0x00, 0xF8, 0xFF, 0xDF, 0xD8, 
	0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFA, 0x7F, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2D, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF6, 0xAF, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xFA, 0x6F, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x02, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x20, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF6, 0xAF, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xFA, 0x6F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x02, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x20, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF6, 0xAF, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFA, 0x6F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2D, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF7, 0xAF, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 
	0x8D, 0xFD, 0xFF, 0x8F, 0x00, 0xF9, 0x7F, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0xB1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1B, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF7, 0x9F, 0x00, 0xF8, 0xFF, 0xDF, 0xD8, 
	0x03, 0xF5, 0xFF, 0x8F, 0x00, 0xF8, 0xBF, 0x00, 0x50, 0xA9, 0xCB, 0xED, 0xEE, 0xFF, 0xEE, 0xEE, 0xFE, 0x05, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x84, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF8, 0x8F, 0x00, 0xF8, 0xFF, 0x5F, 0x30, 
	0x00, 0xE2, 0xFF, 0x9F, 0x00, 0xF7, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x10, 0x22, 0x12, 0x01, 0x00, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x00, 0x20, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xFA, 0x7F, 0x00, 0xF9, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xCF, 0x00, 0xF4, 0xFF, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xFD, 0x4F, 0x00, 0xFC, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xDF, 0x00, 0xF2, 0xFF, 0xFF, 0xAD, 0x78, 0x56, 0x34, 0x12, 0x00, 0x10, 0x21, 0x33, 0x01, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0xD5, 0xFF, 0xFF, 0xFF, 0x1E, 0x10, 0xFF, 0x2F, 0x00, 0xFD, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xEF, 0x02, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x5C, 0x00, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0xB1, 0x9F, 0x14, 0x00, 0x00, 0xE7, 0xFF, 0xFF, 0x0D, 0x30, 0xFF, 0x1E, 0x20, 0xFE, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x04, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x60, 0x02, 0x00, 0xFB, 0xDF, 0x17, 0x00, 0x10, 0xF9, 0xFF, 0x08, 0x60, 0xFF, 0x0B, 0x40, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x07, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0x00, 0x00, 0x60, 0x4C, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0xF4, 0x3D, 0x00, 0x90, 0xFF, 0xDF, 0x05, 0x00, 0x30, 0x78, 0x00, 0xA0, 0xFF, 0x07, 0x70, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x0A, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9D, 0x14, 0x00, 0x00, 0x30, 0xFB, 0xEF, 0x02, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x20, 0xFE, 0xEF, 0x03, 0x00, 0xF9, 0xFF, 0xBF, 0x03, 0x00, 0x00, 0x00, 0xF3, 0xFF, 0x04, 0xA0, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x2D, 0x20, 0xFD, 0xFF, 0xFF, 0xFF, 0xBF, 0x27, 0x00, 0x00, 0x00, 0x41, 0xFB, 0xFF, 0xFF, 0x2D, 0x00, 0x30, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x05, 0x00, 0xD2, 0xFF, 0xFF, 0x4E, 0x00, 0x80, 0xFF, 0xFF, 0x9F, 0x02, 0x00, 0x30, 0xFD, 0xDF, 0x02, 0xD2, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x4F, 0x00, 0xF9, 0xFF, 0xFF, 0xBF, 0x03, 0x00, 0x00, 0x10, 0x85, 0xFC, 0xFF, 0xFF, 0xFF, 0xEF, 0x04, 0x00, 0x40, 0xB9, 0xED, 0xDE, 0x9B, 0x05, 0x00, 0x40, 0xFE, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xF9, 0xFF, 0xFF, 0x9E, 0x76, 0xFA, 0xFF, 0x9F, 0x00, 0xF4, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0x0C, 0x00, 0x00, 0x72, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0x00, 0x10, 0x22, 0x22, 0x01, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xDF, 0x01, 0xD1, 0xFF, 0xFF, 0x04, 0x20, 0xD8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x10, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1D, 0x10, 0xFD, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0x04, 0x80, 0xFF, 0xEF, 0x00, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x00, 0x00, 0x40, 0x23, 0x32, 0x54, 0x00, 0x01, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x40, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0x0A, 0x10, 0xFE, 0xDF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x00, 0x61, 0x00, 0xF4, 0xDE, 0xED, 0xFF, 0x00, 0x53, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0xA0, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xF7, 0xFF, 0x02, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x6B, 0x00, 0xF8, 0xFF, 0xFF, 0xEF, 0x00, 0xC3, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xD1, 0xFF, 0x07, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xB0, 0x0F, 0x00, 0xFC, 0xFF, 0xFF, 0xEF, 0x00, 0xF2, 0x06, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0x1D, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x60, 0xFF, 0x2E, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xF9, 0x09, 0x20, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF1, 0x0C, 0x10, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xFD, 0xFF, 0xFF, 0x06, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xFC, 0xAF, 0x00, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x00, 0x90, 0xFF, 0x04, 0x80, 0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0xF1, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xFA, 0xFF, 0xCF, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF5, 0xFF, 0x06, 0x10, 0xFD, 0xFF, 0xFF, 0xFF, 0xDF, 0x03, 0x00, 0xF8, 0xDF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xEF, 0x02, 0xF0, 0xBF, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF8, 0xFF, 0x5F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x90, 0xFF, 0x2F, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 0x1C, 0x00, 0x90, 0xFF, 0x7F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0xF0, 0xFF, 0x01, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 0xFB, 0xFF, 0x09, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFC, 0xCF, 0x01, 0x20, 0xFD, 0xFF, 0xAF, 0x00, 0x10, 0xFB, 0xFF, 0x1D, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0xF0, 0xFF, 0x04, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x03, 0x20, 0xFE, 0xCF, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xD2, 0xFF, 0x1C, 0x00, 0xE3, 0xFF, 0x09, 0x00, 0xC2, 0xFF, 0xFF, 0x05, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0xF1, 0xFF, 0x09, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x2D, 0x00, 0xB0, 0xFF, 0x2D, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x30, 0xFF, 0xBF, 0x00, 0x20, 0x58, 0x00, 0x30, 0xFD, 0xFF, 0xBF, 0x00, 0xD0, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF2, 0xFF, 0x0D, 0x20, 0xFF, 0xFF, 0xFF, 0xDF, 0x02, 0x00, 0xFB, 0xFF, 0x03, 0x10, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF5, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0xE5, 0xFF, 0xFF, 0x3F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF3, 0xFF, 0x2F, 0x00, 0xFD, 0xFF, 0xFF, 0x1A, 0x00, 0xB1, 0xFF, 0x5F, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x70, 0xFF, 0xBF, 0x02, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0x09, 0x10, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x00, 0xF4, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0x6F, 0x00, 0x10, 0xFC, 0xFF, 0x07, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF7, 0xFF, 0xBE, 0x98, 0xFD, 0xFF, 0xFF, 0xFF, 0x02, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF5, 0xFF, 0xBF, 0x00, 0xE2, 0xCF, 0x02, 0x00, 0xC3, 0xFF, 0x7F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xF6, 0xFF, 0xEF, 0x02, 0x10, 0x03, 0x00, 0x60, 0xFF, 0xFF, 0x05, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF7, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x20, 0xFB, 0xFF, 0x3D, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0x20, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF8, 0xFF, 0xFF, 0xCF, 0x03, 0x20, 0xE7, 0xFF, 0xCF, 0x02, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xDF, 0x8A, 0xDA, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x91, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0x09, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xAD, 0xA8, 0xFD, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xE7, 0xFF, 0xFF, 0xFF, 0x9F, 0x01, 0x00, 0xC5, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x10, 0x64, 0x98, 0x99, 0xAA, 0x06, 0x00, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5C, 0x00, 0x10, 0xF9, 0xFF, 0xFF, 0xFF, 0x7E, 0x00, 0x00, 0x70, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x4F, 0x00, 0x00, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x00, 0x00, 0xD6, 0xFF, 0xFF, 0xFF, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6D, 0x00, 0x00, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0xF4, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x09, 0x00, 0x96, 0x05, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x10, 0xE7, 0xFF, 0xFF, 0xFF, 0x5B, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x01, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x50, 0x69, 0x00, 0x90, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x03, 0x90, 0xFF, 0x8F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x04, 0x00, 0x10, 0xD8, 0xFF, 0xFF, 0xFF, 0xFF, 0x9C, 0x78, 0x56, 0x55, 0xB7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8D, 0x01, 0x00, 0x40, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF8, 0xFF, 0x09, 0x30, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xEF, 0x02, 0xE3, 0xFF, 0xFF, 0x01, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x03, 0x00, 0x10, 0x95, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x59, 0x01, 0x00, 0x30, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x10, 0xFF, 0xFF, 0x3E, 0x20, 0xFE, 0x2E, 0x00, 
	0x00, 0xE2, 0xEF, 0x02, 0xE2, 0xFF, 0xFF, 0x01, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAE, 0x03, 0x00, 0x00, 0x42, 0xB7, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x7B, 0x24, 0x00, 0x00, 0x30, 0xEA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x10, 0xFF, 0xFF, 0x2E, 0x20, 0xFE, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x03, 0x90, 0xFF, 0x8F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x14, 0x00, 0x00, 0x00, 0x21, 0x74, 0x98, 0xAA, 0xAA, 0x89, 0x47, 0x12, 0x00, 0x00, 0x00, 0x41, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF8, 0xFF, 0x09, 0x30, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x08, 0x00, 0xA6, 0x06, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x48, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x84, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x60, 0x6A, 0x00, 0x80, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0x4F, 0x00, 0x00, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAD, 0x47, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x74, 0xDA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0xF4, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0x06, 0x00, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0x9C, 0x88, 0x67, 0x76, 0x88, 0xC9, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x60, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE2, 0xFF, 0xFF, 0xDF, 0x79, 0xD9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9D, 0x97, 0xFD, 0xFF, 0xFF, 0x2E, 0x00, 
	0x00, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 
	0x03, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x30, 
	0x07, 0x20, 0xEC, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xCE, 0x02, 0x70, 
	0x2E, 0x00, 0x10, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x01, 0x00, 0xE2, 
	0xCF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFC, 
	0xFF, 0x7E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xE7, 0xFF, 
	};