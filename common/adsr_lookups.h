#ifndef ADSR_TABLES_H
#define	ADSR_TABLES_H

#include "p600.h"

uint16_t attackCurveLookup[]=
{
	0,494,986,1475,1961,2444,2924,3402,3877,4349,4818,5284,5748,6209,6667,7123,
	7576,8026,8474,8919,9361,9801,10238,10673,11105,11534,11961,12386,12808,
	13227,13645,14059,14471,14881,15289,15694,16096,16497,16894,17290,17683,
	18074,18463,18849,19234,19615,19995,20372,20748,21121,21492,21860,22227,
	22591,22953,23313,23671,24027,24381,24732,25082,25430,25775,26119,26460,
	26800,27137,27473,27806,28138,28468,28795,29121,29445,29767,30087,30405,
	30722,31036,31349,31660,31969,32276,32581,32885,33187,33487,33785,34081,
	34376,34669,34961,35250,35538,35825,36109,36392,36673,36953,37231,37507,
	37782,38055,38326,38596,38865,39131,39397,39660,39922,40183,40442,40699,
	40955,41210,41463,41714,41964,42213,42460,42706,42950,43193,43434,43674,
	43912,44150,44385,44620,44853,45084,45315,45543,45771,45997,46222,46446,
	46668,46889,47109,47327,47544,47760,47975,48188,48400,48611,48820,49029,
	49236,49442,49646,49850,50052,50253,50453,50652,50850,51046,51241,51436,
	51629,51821,52011,52201,52389,52577,52763,52948,53133,53316,53498,53679,
	53858,54037,54215,54392,54567,54742,54916,55088,55260,55430,55600,55769,
	55936,56103,56268,56433,56597,56759,56921,57082,57242,57401,57559,57716,
	57872,58028,58182,58335,58488,58640,58790,58940,59089,59237,59385,59531,
	59676,59821,59965,60108,60250,60391,60532,60672,60810,60948,61086,61222,
	61358,61493,61627,61760,61892,62024,62155,62285,62414,62543,62671,62798,
	62924,63050,63175,63299,63422,63545,63667,63788,63909,64029,64148,64266,
	64384,64501,64618,64733,64848,64963,65076,65189,65302,65413,65524,
};

uint16_t decayCurveLookup[]=
{
	0,1845,3639,5383,7077,8724,10324,11879,13390,14859,16286,17674,19022,20332,
	21605,22842,24045,25214,26349,27453,28526,29568,30581,31566,32523,33452,
	34356,35234,36088,36917,37723,38507,39268,40008,40727,41426,42105,42765,
	43406,44029,44635,45224,45796,46352,46892,47417,47927,48423,48905,49374,
	49829,50271,50701,51119,51525,51920,52303,52676,53038,53390,53732,54065,
	54388,54702,55007,55303,55591,55872,56144,56408,56665,56915,57158,57394,
	57623,57846,58063,58273,58478,58676,58869,59057,59240,59417,59589,59757,
	59920,60078,60231,60381,60526,60667,60804,60937,61067,61193,61315,61434,
	61549,61662,61771,61877,61980,62080,62177,62272,62364,62453,62540,62624,
	62706,62786,62863,62938,63012,63083,63152,63219,63284,63347,63409,63469,
	63527,63584,63639,63692,63744,63794,63843,63891,63937,63982,64026,64068,
	64110,64150,64189,64227,64264,64299,64334,64368,64401,64433,64464,64494,
	64523,64552,64579,64606,64632,64658,64683,64707,64730,64753,64775,64796,
	64817,64837,64857,64876,64894,64912,64930,64947,64963,64980,64995,65010,
	65025,65039,65053,65067,65080,65093,65105,65117,65129,65141,65152,65162,
	65173,65183,65193,65203,65212,65221,65230,65239,65247,65255,65263,65270,
	65278,65285,65292,65299,65306,65312,65318,65324,65330,65336,65342,65347,
	65352,65358,65363,65367,65372,65377,65381,65385,65390,65394,65398,65402,
	65405,65409,65412,65416,65419,65422,65426,65429,65432,65435,65437,65440,
	65443,65445,65448,65450,65453,65455,65457,65459,65462,65464,65466,65468,
	65469,65471,65473,65475,65476,65478,65480,65481,65483,65484,65486,65487,
	65488,65490,
};
		
uint8_t phaseLookupHi[]=
{                                                                                         
    0x06, 0x06, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

uint8_t phaseLookupMid[]=
{                                                                                        
    0x90, 0x0C, 0xA2, 0x40, 0xEA, 0xA3, 0x60, 0x13, 0xD0, 0x93, 0x5F, 0x31, 0x08, 0xE0, 0xB9, 0x92,
    0x6B, 0x44, 0x1C, 0xF5, 0xCE, 0xA7, 0x7F, 0x58, 0x31, 0x23, 0x16, 0x08, 0xFA, 0xEC, 0xDF, 0xD1,
    0xC3, 0xB5, 0xA8, 0xA2, 0x9C, 0x96, 0x91, 0x8B, 0x85, 0x7F, 0x7A, 0x74, 0x6E, 0x68, 0x63, 0x5D,
    0x57, 0x51, 0x4C, 0x46, 0x40, 0x3A, 0x39, 0x37, 0x35, 0x33, 0x31, 0x30, 0x2E, 0x2C, 0x2A, 0x28,
    0x26, 0x25, 0x23, 0x21, 0x1F, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x12,
    0x11, 0x10, 0x0F, 0x0F, 0x0E, 0x0E, 0x0D, 0x0D, 0x0C, 0x0C, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A, 0x09,
    0x09, 0x08, 0x08, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

uint8_t phaseLookupLo[]=
{                                                                                         
    0x69, 0xC3, 0x69, 0x54, 0xBB, 0x91, 0x46, 0xBB, 0xFB, 0xC1, 0xF6, 0xB7, 0x2B, 0xF2, 0xBA, 0x82,
    0x49, 0x11, 0xD9, 0xA0, 0x68, 0x30, 0xF7, 0xBF, 0x87, 0xC7, 0x07, 0x47, 0x88, 0xC8, 0x08, 0x49,
    0x89, 0xC9, 0x0A, 0x4C, 0x8E, 0xD0, 0x13, 0x55, 0x97, 0xDA, 0x1C, 0x5E, 0xA1, 0xE3, 0x25, 0x68,
    0xAA, 0xEC, 0x2F, 0x71, 0xB3, 0xF6, 0x22, 0x4E, 0x7B, 0xA7, 0xD4, 0x00, 0x2D, 0x59, 0x85, 0xB2,
    0xDE, 0x0B, 0x37, 0x64, 0x90, 0xBD, 0xA8, 0x94, 0x7F, 0x6B, 0x57, 0x42, 0x2E, 0x19, 0x05, 0xF1,
    0xDC, 0xC8, 0xB4, 0x3D, 0xC6, 0x4F, 0xD8, 0x61, 0xEA, 0x73, 0xFC, 0x85, 0x0E, 0x97, 0x20, 0xA9,
    0x32, 0xBB, 0x44, 0xCD, 0x56, 0xDF, 0x69, 0x48, 0x27, 0x06, 0xE5, 0xC4, 0xA3, 0x82, 0x61, 0x41,
    0x20, 0xFF, 0xDE, 0xBD, 0x9C, 0x7B, 0x5A, 0x3A, 0x19, 0xF8, 0xD7, 0xB6, 0x95, 0x74, 0x53, 0x33,
    0x71, 0x5C, 0x33, 0x15, 0xF2, 0xD9, 0xBB, 0xA5, 0x8B, 0x78, 0x62, 0x4D, 0x3D, 0x2B, 0x1D, 0x0C,
    0x00, 0xF1, 0xE6, 0xD8, 0xCE, 0xC2, 0xB6, 0xAE, 0x9F, 0x92, 0x85, 0x77, 0x6C, 0x62, 0x58, 0x51,
    0x45, 0x3D, 0x34, 0x2C, 0x25, 0x1E, 0x15, 0x0C, 0x04, 0xFD, 0xF5, 0xEE, 0xE8, 0xE2, 0xDC, 0xD7,
    0xD2, 0xCE, 0xCA, 0xC6, 0xC2, 0xBF, 0xBB, 0xB8, 0xB5, 0xB2, 0xAE, 0xAC, 0xA9, 0xA6, 0xA3, 0xA0,
    0x9D, 0x9B, 0x98, 0x96, 0x93, 0x91, 0x8F, 0x8C, 0x89, 0x86, 0x84, 0x81, 0x7F, 0x7D, 0x7A, 0x79,
    0x77, 0x75, 0x74, 0x72, 0x71, 0x6F, 0x6E, 0x6C, 0x6B, 0x6A, 0x69, 0x68, 0x66, 0x65, 0x64, 0x63,
    0x62, 0x61, 0x60, 0x5F, 0x5F, 0x5E, 0x5E, 0x5E, 0x5D, 0x5D, 0x5D, 0x5C, 0x5C, 0x5B, 0x5B, 0x5B,
    0x5A, 0x5A, 0x5A, 0x59, 0x59, 0x59, 0x58, 0x58, 0x58, 0x57, 0x57, 0x57, 0x56, 0x56, 0x56, 0x56,		
};
			
#endif	/* ADSR_TABLES_H */
